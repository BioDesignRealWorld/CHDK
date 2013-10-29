#include "platform.h"
#include "conf.h"
#include "rgb_count.h"
#include "raw.h"
#include "stdlib.h"

#define RAW_TARGET_DIRECTORY    "A/DCIM/%03dCANON"
#define RAW_TARGET_FILENAME     "%s_%04d.%s"

unsigned short rgb_count_flag = 0;
int subgrid_sum[4];

// enable or disable shot histogram
int rgb_count_set(int enable)
{
  rgb_count_flag = enable;
  return 1;
}

int rgb_count_isenabled()
{
 return(rgb_count_flag != 0);
}

int rgb_count_get_subgrid(int x, int y)
{
  return subgrid_sum[2*x + y];
}

void rgb_count()
{
  // This will zero out some of the color channels
  
  if(!rgb_count_isenabled())
    return;

  int x, y, x0, x1, y0, y1;
  int sx, sy;

  // grid size
  x0 = 0;
  x1 = camera_sensor.raw_rowpix;
  y0 = 0;
  y1 = camera_sensor.raw_rows;

  // init subgrid_sum
  memset(subgrid_sum, 0, 4*sizeof(int));

  // zero out (what I believe) is green pixels
  for (sx = 0 ; sx < 2 ; sx++)
    for (sy = 0 ; sy < 2 ; sy++)
      for (y = y0+sy ; y < y1; y += 2)
        for (x = x0+sx ; x < x1; x += 2)
          subgrid_sum[2*sx + sy] += get_raw_pixel(x,y);
}

