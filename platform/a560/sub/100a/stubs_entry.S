// !!! THIS FILE IS GENERATED. DO NOT EDIT. !!!
#include "stubs_asm.h"

// Camera info:
//   "Firmware Ver GM1.00A"      // Found @ 0xffc08048
//   Firmware build timestamp: Dec 14 2006 20:14:41
//   Possible corrupt firmware dump - file size too small for start address 0xffc00000
//     file size = 3.14MB, should be 4.00MB
//   Could not find Camera name - possible corrupt firmware dump

// Values for makefile.inc

// Stubs below should be checked. Stub not matched 100%, or difference found to current 'stubs_entry_2.S'
//    Name                                     Address      Rule  %  Comp to stubs_entry_2.S
NHSTUB(EnterToCompensationEVF                 ,0xffe90258) //  3 96%
NHSTUB(FreeUncacheableMemory                  ,0xffc0e5f8) //  1 90%
NHSTUB(GetDrive_ClusterSize                   ,0xffe3ae00) //  3 92%
NHSTUB(GetDrive_FreeClusters                  ,0xffe3ae78) //  3 92%
NHSTUB(GetDrive_TotalClusters                 ,0xffe3ae3c) //  3 92%
//NHSTUB(GetFocusLensSubjectDistance          ,0xffe66598) //  1 90%    *** != 0xffe685a0
NHSTUB(GetParameterData                       ,0xffecefe8) //  1 86%
NHSTUB(GetPropertyCase                        ,0xffc0bcb8) //  2 89%
NHSTUB(GetSystemTime                          ,0xffc0370c) //  1 96%
NHSTUB(PutInNdFilter                          ,0xffdfb8b4) //  1 92%
NHSTUB(PutOutNdFilter                         ,0xffdfb8fc) //  1 94%
NHSTUB(Restart                                ,0xffc0b76c) //  1 96%
NHSTUB(SetParameterData                       ,0xffecef08) //  1 86%
NHSTUB(TakeSemaphore                          ,0xffea90f4) //  1 61%
NHSTUB(UnsetZoomForMovie                      ,0xffc232b4) //  1 89%
NHSTUB(add_ptp_handler                        ,0xffd915d0) //  1 96%
NHSTUB(exmem_alloc                            ,0xffc0e2d0) //  2 93%
// ERROR: free is not found.                               //--- ---    *** != 0xffcd1704
NHSTUB(kbd_p2_f                               ,0xffddbe68) //  1 56%
//NHSTUB(kbd_read_keys_r2                     ,0xffddd0dc) //  3 62%    *** != 0xffddd0c0
NHSTUB(kbd_pwr_on                             ,0xffddd6e0) //  1 88%
NHSTUB(malloc                                 ,0xffcd16f8) //  1 53%
NHSTUB(mkdir                                  ,0xffe3b87c) //  1 51%
// ALT: NHSTUB(mkdir, 0xffe3b950) // 1 16/15
NHSTUB(taskIdListGet                          ,0xffcdb840) //  1 82%
NHSTUB(utime                                  ,0xffee4ff0) //  1 57%
NHSTUB(localtime                              ,0xffcca510) //  1 93%
NHSTUB(Mount_FileSystem                       ,0xffe3a938) //  3 93%
NHSTUB(MakeAFScan                             ,0xffe952b8) //  2 86%

// Stubs below matched 100%.
//    Name                                     Address                Comp to stubs_entry_2.S
NHSTUB(AllocateUncacheableMemory              ,0xffc0e5c4) //  1
NHSTUB(Close                                  ,0xffe3b614) //120
NHSTUB(CreateTask                             ,0xffea9728) //120
NHSTUB(DeleteFile_Fut                         ,0xffe36be8) //  1
NHSTUB(DoAFLock                               ,0xffe8feb0) //102
NHSTUB(ExecuteEventProcedure                  ,0xffc04a78) //  1
NHSTUB(ExitFromCompensationEVF                ,0xffe902dc) //  3
NHSTUB(ExitTask                               ,0xffea9ae8) //120
NHSTUB(Fclose_Fut                             ,0xffe36d5c) //120
NHSTUB(Feof_Fut                               ,0xffe36f58) //  3
NHSTUB(Fflush_Fut                             ,0xffe36f94) //  3
NHSTUB(Fgets_Fut                              ,0xffe36ec0) //  3
NHSTUB(Fopen_Fut                              ,0xffe36d1c) //120
NHSTUB(Fread_Fut                              ,0xffe36e18) //120
NHSTUB(Fseek_Fut                              ,0xffe36f0c) //120
NHSTUB(Fwrite_Fut                             ,0xffe36e6c) //120
NHSTUB(GetBatteryTemperature                  ,0xffde0734) //102
NHSTUB(GetCCDTemperature                      ,0xffde0720) //102
NHSTUB(GetCurrentAvValue                      ,0xffdfb6d0) //  2
// ALT: NHSTUB(GetCurrentAvValue, 0xffdfdb80) // 1 13/0
NHSTUB(GetFocusLensSubjectDistanceFromLens    ,0xffe66a8c) //  3
NHSTUB(GetOpticalTemperature                  ,0xffde070c) //102
NHSTUB(GetZoomLensCurrentPoint                ,0xffe79288) //102
NHSTUB(GetZoomLensCurrentPosition             ,0xffe7929c) //102
NHSTUB(GiveSemaphore                          ,0xffea92f4) //120
NHSTUB(IsStrobeChargeCompleted                ,0xffd5488c) //  2
NHSTUB(LocalTime                              ,0xffeb5f78) //115
NHSTUB(LockMainPower                          ,0xffecbea4) //120
NHSTUB(MakeDirectory_Fut                      ,0xffe36c9c) //  3
NHSTUB(MoveFocusLensToDistance                ,0xffdfddc0) //102
NHSTUB(MoveIrisWithAv                         ,0xffe6d404) //102
NHSTUB(MoveZoomLensWithPoint                  ,0xffe79160) //102
NHSTUB(Open                                   ,0xffe3b5ec) //120
NHSTUB(PT_MoveDigitalZoomToWide               ,0xffea0730) //120
NHSTUB(PT_MoveOpticalZoomAt                   ,0xffea06f4) //120
NHSTUB(PT_PlaySound                           ,0xffea01f4) //  3
NHSTUB(PostLogicalEventForNotPowerType        ,0xffec7ad4) //120
NHSTUB(PostLogicalEventToUI                   ,0xffec7b50) //120
NHSTUB(Read                                   ,0xffe3b6a8) //120
NHSTUB(RefreshPhysicalScreen                  ,0xffcbdfec) //120
NHSTUB(RenameFile_Fut                         ,0xffe36b40) //  3
NHSTUB(SetAE_ShutterSpeed                     ,0xffe00ec0) //102
NHSTUB(SetAutoShutdownTime                    ,0xffecbda8) //120
NHSTUB(SetCurrentCaptureModeType              ,0xffc183b4) //120
NHSTUB(SetFileAttributes                      ,0xffe3b7fc) //  3
NHSTUB(SetLogicalEventActive                  ,0xffec99b0) //  3
NHSTUB(SetPropertyCase                        ,0xffc0bb80) //  3
//NHSTUB(SetScriptMode                        ,0xffec9a14) //120            == 0xffec9a14
NHSTUB(SleepTask                              ,0xffea963c) //120
NHSTUB(TurnOffBackLight                       ,0xffc304cc) //  2
NHSTUB(TurnOnBackLight                        ,0xffc3049c) //  2
NHSTUB(UnlockAF                               ,0xffe8ff30) //102
NHSTUB(UnlockMainPower                        ,0xffecbf3c) //120
NHSTUB(UpdateMBROnFlash                       ,0xffe3ab34) //  1
NHSTUB(VbattGet                               ,0xffdd9568) //120
NHSTUB(Write                                  ,0xffe3b6b4) //120
NHSTUB(WriteSDCard                            ,0xffe4d9a8) //  3
NHSTUB(_log                                   ,0xffee37d4) //  1
NHSTUB(_log10                                 ,0xffee2c54) //  1
NHSTUB(_pow                                   ,0xffcc1f30) //  1
NHSTUB(_sqrt                                  ,0xffcc3df0) //  1
NHSTUB(apex2us                                ,0xffce2b80) //  1
NHSTUB(close                                  ,0xffcce6b8) //109
NHSTUB(exmem_free                             ,0xffc0e520) //102
NHSTUB(kbd_p1_f                               ,0xffddba38) //  1
NHSTUB(kbd_p1_f_cont                          ,0xffddba44) //109
NHSTUB(kbd_pwr_off                            ,0xffddd708) //  3
// ALT: NHSTUB(kbd_pwr_off, 0xffddd738) // 3 6/0
// ALT: NHSTUB(kbd_pwr_off, 0xffddd754) // 3 6/0
NHSTUB(lseek                                  ,0xffcce7fc) //  1
NHSTUB(memcmp                                 ,0xffcc98f0) //120
NHSTUB(memcpy                                 ,0xffcc992c) //120
NHSTUB(memset                                 ,0xffcc99a4) //120
NHSTUB(open                                   ,0xffccecfc) //109
NHSTUB(closedir                               ,0xffee4e94) //  1
NHSTUB(qsort                                  ,0xffcc9150) //  1
NHSTUB(rand                                   ,0xffcc9174) //  1
NHSTUB(realloc                                ,0xffeb5270) //115
NHSTUB(srand                                  ,0xffcc9198) //  1
NHSTUB(stat                                   ,0xffee4f5c) //  1
NHSTUB(strcat                                 ,0xffcc99c4) //  1
NHSTUB(strchr                                 ,0xffcc99f0) //  1
NHSTUB(strcmp                                 ,0xffcc9a14) //120
NHSTUB(strcpy                                 ,0xffcc9ba8) //120
NHSTUB(strftime                               ,0xffccb230) //  1
NHSTUB(strlen                                 ,0xffcc9d0c) //120
NHSTUB(strncmp                                ,0xffcc9d70) //  1
NHSTUB(strncpy                                ,0xffcc9db4) //  1
NHSTUB(strrchr                                ,0xffcc9e38) //  1
NHSTUB(strtol                                 ,0xffcc958c) //  1
NHSTUB(isdigit                                ,0xffcc5cc0) //  1
NHSTUB(isspace                                ,0xffcc5d38) //  1
NHSTUB(isalpha                                ,0xffcc5c90) //  1
NHSTUB(isupper                                ,0xffcc5d50) //  1
NHSTUB(islower                                ,0xffcc5cf0) //  1
NHSTUB(ispunct                                ,0xffcc5d20) //  1
NHSTUB(isxdigit                               ,0xffcc5d68) //  1
NHSTUB(toupper                                ,0xffcc5d90) //  1
NHSTUB(tolower                                ,0xffcc5d80) //  1
NHSTUB(taskLock                               ,0xffcdbefc) //  1
NHSTUB(taskUnlock                             ,0xffcdbfa4) //  1
NHSTUB(taskName                               ,0xffcdb738) //  1
NHSTUB(errnoOfTaskGet                         ,0xffccc30c) //  1
NHSTUB(readdir                                ,0xffee4e60) //  1
NHSTUB(strtoul                                ,0xffcc9734) //  1
NHSTUB(strpbrk                                ,0xffcc9dfc) //  1
NHSTUB(mktime                                 ,0xffcca6d8) //  1
NHSTUB(opendir                                ,0xffee4ec8) //  1
NHSTUB(memchr                                 ,0xffcc98bc) //  1
NHSTUB(memPartInfoGet                         ,0xffcd1b18) //  1
NHSTUB(iosDrvInstall                          ,0xffccfb9c) //  1
NHSTUB(iosDevAdd                              ,0xffccf8d8) //  1
NHSTUB(iosDevDelete                           ,0xffccf8b0) //  1
NHSTUB(GetCurrentTargetDistance               ,0xffdfdb28) //  1
NHSTUB(taskCreateHookAdd                      ,0xffcd4358) //  1
NHSTUB(taskDeleteHookAdd                      ,0xffcd4294) //  1
NHSTUB(Unmount_FileSystem                     ,0xffe3a9e0) //  1
NHSTUB(taskSuspend                            ,0xffcdb948) //  1
NHSTUB(taskResume                             ,0xffcdbb1c) //  1
NHSTUB(time                                   ,0xffccb25c) //  1
NHSTUB(vsprintf                               ,0xffccd460) //115
