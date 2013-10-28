#include "platform.h"
#include "conf.h"
#include "monochromify.h"
#include "raw.h"
#include "stdlib.h"

#define RAW_TARGET_DIRECTORY    "A/DCIM/%03dCANON"
#define RAW_TARGET_FILENAME     "%s_%04d.%s"

unsigned short monochromify_flag = 0;
unsigned short keep_blue  = 1;
unsigned short keep_red   = 1;
unsigned short keep_green = 1;

// enable or disable shot histogram
int monochromify_set(int enable)
{
  monochromify_flag = enable;
  return 1;
}

int monochromify_isenabled()
{
 return(monochromify_flag != 0);
}

void monochromify_keep_rgb(int red, int green, int blue)
{
  keep_red   = red;
  keep_green = green;
  keep_blue  = blue;
}

void monochromify()
{
  // This will zero out some of the color channels
  
  if(!monochromify_isenabled())
    return;

  int x, y, x0, x1, y0, y1;

  x0 = 0;
  x1 = camera_sensor.raw_rowpix;
  y0 = 0;
  y1 = camera_sensor.raw_rows;


  // zero out (what I believe) is green pixels
  if (!keep_green)
  {
    for (y = y0 ; y < y1; y += 2)
      for (x = x0 ; x < x1; x += 2)
        set_raw_pixel(x,y,0);
    for (y = y0+1 ; y < y1; y += 2)
      for (x = x0+1 ; x < x1; x += 2)
        set_raw_pixel(x,y,0);
  }

  // zero out (what I believe) is red pixels
  if (!keep_red)
  {
    for (y = y0 ; y < y1; y += 2)
      for (x = x0+1 ; x < x1; x += 2)
        set_raw_pixel(x,y,0);
  }

  // zero out (what I believe) is blue pixels
  if (!keep_blue)
  {
    for (y = y0+1 ; y < y1; y += 2)
      for (x = x0 ; x < x1; x += 2)
        set_raw_pixel(x,y,0);
  }

  /*
  // dump to file (just for debugging / logging purposes)
  // for each shoot, creates a HSTnnnnn.DAT file containing 2*1024 bytes
  char fn[64];
  char dir[32];
  sprintf(dir, RAW_TARGET_DIRECTORY, (conf.raw_in_dir)?get_target_dir_num():100);
  sprintf(fn, "%s/", dir);
  sprintf(fn+strlen(fn), RAW_TARGET_FILENAME, "HST", get_target_file_num(), "DAT");

  char buf[64];
  int fd = open(fn, O_WRONLY|O_CREAT, 0777);
  if (fd>=0) 
  {
  write(fd, shot_histogram, 2048);
  close(fd);
  } */
}

