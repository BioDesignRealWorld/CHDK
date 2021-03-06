#include "stubs_asm.h"
#define NULL_SUB 0xFF810950 //ixus110

// Override stubs_entry.S
NHSTUB(kbd_pwr_on,                  NULL_SUB)
NHSTUB(kbd_pwr_off,                 NULL_SUB)

// These don't exist
NHSTUB(SetZoomActuatorSpeedPercent, NULL_SUB)

// Additional
NHSTUB(LogPrintf,                   0xFF86C85C) //ixus110
NHSTUB(MakeAFScan,                  0xFF924900) //ixus110
NHSTUB(ScreenLock,                  0xff9b7738) //ixus110
