#ifndef MONOCHROMIFY_H
#define MONOCHROMIFY_H

// CHDK Zero out some of the color component

// Note: used in modules and platform independent code. 
// Do not add platform dependent stuff in here (#ifdef/#endif compile options or camera dependent values)

int monochromify_set(int enable);
int monochromify_isenabled();
void monochromify_keep_rgb(int red, int green, int blue);
void monochromify();

#endif
