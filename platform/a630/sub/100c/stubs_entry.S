// !!! THIS FILE IS GENERATED. DO NOT EDIT. !!!
#include "stubs_asm.h"

// Camera info:
//   "Firmware Ver GM1.00C"      // Found @ 0xffc0a398
//   Firmware build timestamp: Jul  4 2006 21:35:08
//   Possible corrupt firmware dump - file size too small for start address 0xffc00000
//     file size = 3.07MB, should be 4.00MB
//   Could not find Camera name - possible corrupt firmware dump

// Values for makefile.inc

// Stubs below should be checked. Stub not matched 100%, or difference found to current 'stubs_entry_2.S'
//    Name                                     Address      Rule  %  Comp to stubs_entry_2.S
NHSTUB(DoAFLock                               ,0xffd4fc44) //  2 95%
NHSTUB(EnterToCompensationEVF                 ,0xffd4fd90) //  2 96%
//NHSTUB(GetDrive_ClusterSize                 ,0xffc60d88) //  3 76%    *** != 0xffc60cd4
//NHSTUB(GetDrive_FreeClusters                ,0xffc60cd4) //  1 73%    *** != 0xffc60d4c
// ALT: NHSTUB(GetDrive_FreeClusters, 0xffc60d10) // 1 19/7
// ALT: NHSTUB(GetDrive_FreeClusters, 0xffc60d4c) // 1 19/7
// ALT: NHSTUB(GetDrive_FreeClusters, 0xffc60d88) // 1 19/7
// ALT: NHSTUB(GetDrive_FreeClusters, 0xffc60d10) // 3 19/7
// ALT: NHSTUB(GetDrive_FreeClusters, 0xffc60d4c) // 3 19/7
// ALT: NHSTUB(GetDrive_FreeClusters, 0xffc60d88) // 3 19/7
NHSTUB(GetDrive_TotalClusters                 ,0xffc60d10) //  2 92%
NHSTUB(GetFocusLensSubjectDistance            ,0xffe9b4fc) //  2 96%
NHSTUB(GetFocusLensSubjectDistanceFromLens    ,0xffe9bab0) //  2 57%
NHSTUB(PutInNdFilter                          ,0xffea7484) //  1 92%
NHSTUB(PutOutNdFilter                         ,0xffea74cc) //  1 94%
NHSTUB(Restart                                ,0xffc12fd4) //  1 96%
NHSTUB(SetLogicalEventActive                  ,0xffd65bd8) //  1 88%
NHSTUB(UnlockAF                               ,0xffd4fc90) //  2 91%
NHSTUB(UnsetZoomForMovie                      ,0xffda1ce4) //  1 89%
NHSTUB(add_ptp_handler                        ,0xffe5291c) //  1 96%
// ERROR: free is not found.                               //--- ---    *** != 0xffef3284
NHSTUB(malloc                                 ,0xffef3278) //  1 53%
NHSTUB(taskIdListGet                          ,0xffeffea0) //  1 82%
NHSTUB(localtime                              ,0xffeebeb4) //  1 93%
NHSTUB(Mount_FileSystem                       ,0xffc60810) //  1 90%
NHSTUB(MakeAFScan                             ,0xffd54358) //  2 79%

// Stubs below matched 100%.
//    Name                                     Address                Comp to stubs_entry_2.S
NHSTUB(AllocateUncacheableMemory              ,0xffc04b00) //  1
NHSTUB(Close                                  ,0xffc614e8) //120
NHSTUB(CreateTask                             ,0xffc11abc) //120
NHSTUB(DeleteFile_Fut                         ,0xffc5a398) //  1
NHSTUB(ExecuteEventProcedure                  ,0xffc0699c) //  1
NHSTUB(ExitFromCompensationEVF                ,0xffd5337c) //  2
NHSTUB(ExitTask                               ,0xffc11e7c) //120
NHSTUB(Fclose_Fut                             ,0xffc5a4d8) //120
NHSTUB(Feof_Fut                               ,0xffc5a6ec) //  1
NHSTUB(Fflush_Fut                             ,0xffc5a724) //  1
NHSTUB(Fgets_Fut                              ,0xffc5a65c) //  1
NHSTUB(Fopen_Fut                              ,0xffc5a49c) //120
NHSTUB(Fread_Fut                              ,0xffc5a5bc) //120
NHSTUB(FreeUncacheableMemory                  ,0xffc04b34) //  1
NHSTUB(Fseek_Fut                              ,0xffc5a6a4) //120
NHSTUB(Fwrite_Fut                             ,0xffc5a60c) //120
NHSTUB(GetBatteryTemperature                  ,0xffc1d7a4) //102
NHSTUB(GetCCDTemperature                      ,0xffc1d790) //102
NHSTUB(GetCurrentAvValue                      ,0xffea6ffc) //  2
// ALT: NHSTUB(GetCurrentAvValue, 0xffea70f4) // 1 13/0
// ALT: NHSTUB(GetCurrentAvValue, 0xffea9528) // 1 13/0
NHSTUB(GetOpticalTemperature                  ,0xffc1d77c) //102
NHSTUB(GetParameterData                       ,0xffd6d854) //  2
NHSTUB(GetPropertyCase                        ,0xffc14de4) //  2
NHSTUB(GetSystemTime                          ,0xffc04d38) //  2
NHSTUB(GetZoomLensCurrentPoint                ,0xffe87928) //102
NHSTUB(GetZoomLensCurrentPosition             ,0xffe8793c) //102
NHSTUB(GiveSemaphore                          ,0xffc116b4) //120
NHSTUB(IsStrobeChargeCompleted                ,0xffd08620) //  2
NHSTUB(LocalTime                              ,0xffc043c8) //115
NHSTUB(LockMainPower                          ,0xffd68070) //120
NHSTUB(MakeDirectory_Fut                      ,0xffc5a424) //  1
NHSTUB(MoveFocusLensToDistance                ,0xffea9770) //102
NHSTUB(MoveZoomLensWithPoint                  ,0xffe87808) //102
NHSTUB(Open                                   ,0xffc614c0) //120
NHSTUB(PT_PlaySound                           ,0xffd5eee0) //  1
NHSTUB(PostLogicalEventForNotPowerType        ,0xffd63df0) //120
NHSTUB(PostLogicalEventToUI                   ,0xffd63e6c) //120
NHSTUB(Read                                   ,0xffc6157c) //120
NHSTUB(RefreshPhysicalScreen                  ,0xffd7f49c) //120
NHSTUB(RenameFile_Fut                         ,0xffc5a318) //  1
NHSTUB(SetAE_ShutterSpeed                     ,0xffeac3e0) //102
NHSTUB(SetAutoShutdownTime                    ,0xffd67f74) //120
NHSTUB(SetCurrentCaptureModeType              ,0xffd964c8) //120
NHSTUB(SetFileAttributes                      ,0xffc61710) //  1
NHSTUB(SetParameterData                       ,0xffd6d774) //  2
NHSTUB(SetPropertyCase                        ,0xffc14c94) //  2
//NHSTUB(SetScriptMode                        ,0xffd65c40) //120            == 0xffd65c40
NHSTUB(SleepTask                              ,0xffc119d0) //120
NHSTUB(TakeSemaphore                          ,0xffc114cc) //  1
NHSTUB(TurnOffBackLight                       ,0xffdb63f4) //  2
NHSTUB(TurnOnBackLight                        ,0xffdb63c4) //  2
NHSTUB(UnlockMainPower                        ,0xffd68108) //120
NHSTUB(UpdateMBROnFlash                       ,0xffc60a08) //  1
NHSTUB(VbattGet                               ,0xffc1c6d0) //120
NHSTUB(Write                                  ,0xffc61588) //120
NHSTUB(WriteSDCard                            ,0xffc707ac) //  2
NHSTUB(_log                                   ,0xffee5cf0) //  1
NHSTUB(_log10                                 ,0xffee2090) //  1
NHSTUB(_pow                                   ,0xffee2218) //  1
NHSTUB(_sqrt                                  ,0xffee40ec) //  1
NHSTUB(apex2us                                ,0xffca4bf8) //  1
NHSTUB(close                                  ,0xffef0238) //109
NHSTUB(exmem_alloc                            ,0xffc02834) //  2
NHSTUB(kbd_p1_f                               ,0xffc17478) //  1
NHSTUB(kbd_p1_f_cont                          ,0xffc17484) //109
NHSTUB(kbd_p2_f                               ,0xffc1785c) //  1
NHSTUB(kbd_read_keys_r2                       ,0xffc18274) //  1
NHSTUB(kbd_pwr_off                            ,0xffc188f0) //  1
// ALT: NHSTUB(kbd_pwr_off, 0xffc18920) // 1 6/0
// ALT: NHSTUB(kbd_pwr_off, 0xffc1893c) // 1 6/0
NHSTUB(kbd_pwr_on                             ,0xffc188c8) //  1
NHSTUB(lseek                                  ,0xffef037c) //  1
NHSTUB(memcmp                                 ,0xffeeb294) //120
NHSTUB(memcpy                                 ,0xffeeb2d0) //120
NHSTUB(memset                                 ,0xffeeb348) //120
NHSTUB(mkdir                                  ,0xffc61740) //  1
NHSTUB(open                                   ,0xffef087c) //109
NHSTUB(closedir                               ,0xffeed6c0) //  1
NHSTUB(qsort                                  ,0xffeeaaf4) //  1
NHSTUB(rand                                   ,0xffeeab18) //  1
NHSTUB(realloc                                ,0xffedc240) //115
NHSTUB(srand                                  ,0xffeeab3c) //  1
NHSTUB(stat                                   ,0xffeed788) //  1
NHSTUB(strcat                                 ,0xffeeb368) //  1
NHSTUB(strchr                                 ,0xffeeb394) //  1
NHSTUB(strcmp                                 ,0xffeeb3b8) //120
NHSTUB(strcpy                                 ,0xffeeb54c) //120
NHSTUB(strftime                               ,0xffeecbd4) //  1
NHSTUB(strlen                                 ,0xffeeb6b0) //120
NHSTUB(strncmp                                ,0xffeeb714) //  1
NHSTUB(strncpy                                ,0xffeeb758) //  1
NHSTUB(strrchr                                ,0xffeeb7dc) //  1
NHSTUB(strtol                                 ,0xffeeaf30) //  1
NHSTUB(isdigit                                ,0xffee7664) //  1
NHSTUB(isspace                                ,0xffee76dc) //  1
NHSTUB(isalpha                                ,0xffee7634) //  1
NHSTUB(isupper                                ,0xffee76f4) //  1
NHSTUB(islower                                ,0xffee7694) //  1
NHSTUB(ispunct                                ,0xffee76c4) //  1
NHSTUB(isxdigit                               ,0xffee770c) //  1
NHSTUB(toupper                                ,0xffee7734) //  1
NHSTUB(tolower                                ,0xffee7724) //  1
NHSTUB(taskLock                               ,0xfff0055c) //  1
NHSTUB(taskUnlock                             ,0xfff00604) //  1
NHSTUB(taskName                               ,0xffeffd98) //  1
NHSTUB(errnoOfTaskGet                         ,0xffeede8c) //  1
NHSTUB(readdir                                ,0xffeed68c) //  1
NHSTUB(strtoul                                ,0xffeeb0d8) //  1
NHSTUB(strpbrk                                ,0xffeeb7a0) //  1
NHSTUB(utime                                  ,0xffeed81c) //  1
NHSTUB(mktime                                 ,0xffeec07c) //  1
NHSTUB(opendir                                ,0xffeed6f4) //  1
NHSTUB(memchr                                 ,0xffeeb260) //  1
NHSTUB(memPartInfoGet                         ,0xffef3698) //  1
NHSTUB(iosDrvInstall                          ,0xffef171c) //  1
NHSTUB(iosDevAdd                              ,0xffef1458) //  1
NHSTUB(iosDevDelete                           ,0xffef1430) //  1
NHSTUB(GetCurrentTargetDistance               ,0xffea94d0) //  1
NHSTUB(taskCreateHookAdd                      ,0xffef5ed8) //  1
NHSTUB(taskDeleteHookAdd                      ,0xffef5e14) //  1
NHSTUB(Unmount_FileSystem                     ,0xffc608b4) //  1
NHSTUB(taskSuspend                            ,0xffefffa8) //  1
NHSTUB(taskResume                             ,0xfff0017c) //  1
NHSTUB(time                                   ,0xffeecc00) //  1
NHSTUB(vsprintf                               ,0xffeeefe0) //115
