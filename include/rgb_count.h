#ifndef RGB_COUNT_H
#define RGB_COUNT_H

// Sum up the magnitude of pixels on a subgrid of the sensor
// This will allow to count only pixels in a particular RGB channel
//
int rgb_count_set(int enable);
int rgb_count_isenabled();
int rgb_count_get_subgrid(int x, int y);
void rgb_count();

// Note: used in modules and platform independent code. 
// Do not add platform dependent stuff in here (#ifdef/#endif compile options or camera dependent values)

#endif
