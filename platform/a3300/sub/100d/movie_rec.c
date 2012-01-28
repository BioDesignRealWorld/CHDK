#include "conf.h"

void change_video_tables(int a, int b){
}

void  set_quality(int *x){ // -17 highest; +12 lowest
 
 if (conf.video_mode) *x=12-((conf.video_quality-1)*(12+17)/(99-1));
}

//** movie_record_task  @ 0xFF96A0F8 

void __attribute__((naked,noinline)) movie_record_task(  ) { 
asm volatile (
"    STMFD   SP!, {R2-R10,LR} \n" 
"    LDR     R6, =0xFF969628 \n" 
"    LDR     R7, =sub_FF969B20_my \n"    //patch
"    LDR     R4, =0x66F0 \n" 
"    LDR     R9, =0x67F \n" 
"    LDR     R10, =0x2710 \n" 
"    MOV     R8, #1 \n" 
"    MOV     R5, #0 \n" 
"loc_FF96A118:\n"
"    LDR     R0, [R4, #0x24] \n" 
"    MOV     R2, #0 \n" 
"    ADD     R1, SP, #4 \n" 
"    BL      sub_FF839BD8 \n" 
"    LDR     R0, [R4, #0x2C] \n" 
"    CMP     R0, #0 \n" 
"    LDRNE   R0, [R4, #0xC] \n" 
"    CMPNE   R0, #2 \n" 
"    LDRNE   R0, [R4, #0x44] \n" 
"    CMPNE   R0, #6 \n" 
"    BNE     loc_FF96A23C \n" 
"    LDR     R0, [SP, #4] \n" 
"    LDR     R1, [R0] \n" 
"    SUB     R1, R1, #2 \n" 
"    CMP     R1, #0xB \n" 
"    ADDCC   PC, PC, R1, LSL #2 \n" 
"    B       loc_FF96A23C \n" 
"    B       loc_FF96A1EC \n" 
"    B       loc_FF96A210 \n" 
"    B       loc_FF96A220 \n" 
"    B       loc_FF96A228 \n" 
"    B       loc_FF96A1F4 \n" 
"    B       loc_FF96A230 \n" 
"    B       loc_FF96A200 \n" 
"    B       loc_FF96A23C \n" 
"    B       loc_FF96A238 \n" 
"    B       loc_FF96A1B8 \n" 
"    B       loc_FF96A188 \n" 
"loc_FF96A188:\n"
"    STR     R5, [R4, #0x40] \n" 
"    STR     R5, [R4, #0x30] \n" 
"    STR     R5, [R4, #0x34] \n" 
"    STRH    R5, [R4, #6] \n" 
"    STR     R6, [R4, #0xB4] \n" 
"    STR     R7, [R4, #0xCC] \n" 
"    LDR     R0, [R4, #0xC] \n" 
"    ADD     R0, R0, #1 \n" 
"    STR     R0, [R4, #0xC] \n" 
"    MOV     R0, #6 \n" 
"    STR     R0, [R4, #0x44] \n" 
"    B       loc_FF96A1D8 \n" 
"loc_FF96A1B8:\n"
"    STR     R5, [R4, #0x40] \n" 
"    STR     R5, [R4, #0x30] \n" 
"    STR     R6, [R4, #0xB4] \n" 
"    STR     R7, [R4, #0xCC] \n" 
"    LDR     R0, [R4, #0xC] \n" 
"    ADD     R0, R0, #1 \n" 
"    STR     R0, [R4, #0xC] \n" 
"    STR     R8, [R4, #0x44] \n" 
"loc_FF96A1D8:\n"
"    LDR     R2, =0xFF968E44 \n" 
"    LDR     R1, =0xACA28 \n" 
"    LDR     R0, =0xFF968F58 \n" 
"    BL      sub_FF852C70 \n" 
"    B       loc_FF96A23C \n" 
"loc_FF96A1EC:\n"
"    BL      sub_FF969780_my \n"     //patch
"    B       loc_FF96A23C \n" 
"loc_FF96A1F4:\n"
"    LDR     R1, [R4, #0xCC] \n" 
"    BLX     R1 \n" 
"    B       loc_FF96A23C \n" 
"loc_FF96A200:\n"
"    LDR     R1, [R0, #0x18] \n" 
"    LDR     R0, [R0, #4] \n" 
"    BL      sub_FFAAD0AC \n" 
"    B       loc_FF96A23C \n" 
"loc_FF96A210:\n"
"    LDR     R0, [R4, #0x44] \n" 
"    CMP     R0, #5 \n" 
"    STRNE   R8, [R4, #0x34] \n" 
"    B       loc_FF96A23C \n" 
"loc_FF96A220:\n"
"    BL      sub_FF9692E8 \n" 
"    B       loc_FF96A23C \n" 
"loc_FF96A228:\n"
"    BL      sub_FF968FA4 \n" 
"    B       loc_FF96A23C \n" 
"loc_FF96A230:\n"
"    BL      sub_FF968DD0 \n" 
"    B       loc_FF96A23C \n" 
"loc_FF96A238:\n"
"    BL      sub_FF96A67C \n" 
"loc_FF96A23C:\n"
"    LDR     R1, [SP, #4] \n" 
"    LDR     R3, =0xFF968C18 \n" 
"    STR     R5, [R1] \n" 
"    STR     R9, [SP] \n" 
"    LDR     R0, [R4, #0x28] \n" 
"    MOV     R2, R10 \n" 
"    BL      sub_FF83A550 \n" 
"    B       loc_FF96A118 \n" 
	);
}


//** sub_FF969780_my  @ 0xFF969780 

void __attribute__((naked,noinline)) sub_FF969780_my(  ) { 
asm volatile (
"    STMFD   SP!, {R2-R8,LR} \n" 
"    LDR     R5, =0x66F0 \n" 
"    MOV     R0, #0 \n" 
"    STR     R0, [R5, #0x34] \n" 
"    STR     R0, [R5, #0x38] \n" 
"    ADD     R0, R5, #0 \n" 
"    LDR     R0, [R0, #0x5C] \n" 
"    LDRH    R1, [R5, #6] \n" 
"    MOV     R2, #0x3E8 \n" 
"    MUL     R0, R2, R0 \n" 
"    CMP     R1, #0 \n" 
"    BNE     loc_FF9697BC \n" 
"loc_FF9697B0:\n"
"    MOV     R1, #0x3E8 \n" 
"    BL      sub_FFB58D24 \n" 
"    B       loc_FF9697C8 \n" 
"loc_FF9697BC:\n"
"    CMP     R1, #3 \n" 
"    BNE     loc_FF9697B0 \n" 
"    MOV     R0, #1 \n" 
"loc_FF9697C8:\n"
"    LDR     R4, =0xACA5C \n" 
"    STR     R0, [R5, #0x48] \n" 
"    LDR     R0, [R4, #8] \n" 
"    MOV     R6, #2 \n" 
"    CMP     R0, #0 \n" 
"    BEQ     loc_FF969834 \n" 
"    LDR     R0, [R5, #0x58] \n" 
"    MOV     R1, #4 \n" 
"    CMP     R0, #0x18 \n" 
"    BEQ     loc_FF96992C \n" 
"    BGT     loc_FF969810 \n" 
"    CMP     R0, #0xA \n" 
"    CMPNE   R0, #0xF \n" 
"    STREQ   R6, [R4, #0x14] \n" 
"    BEQ     loc_FF969834 \n" 
"    CMP     R0, #0x14 \n" 
"    BNE     loc_FF969828 \n" 
"    B       loc_FF96992C \n" 
"loc_FF969810:\n"
"    CMP     R0, #0x1E \n" 
"    BEQ     loc_FF96992C \n" 
"    CMP     R0, #0x3C \n" 
"    MOVEQ   R0, #8 \n" 
"    STREQ   R0, [R4, #0x14] \n" 
"    BEQ     loc_FF969834 \n" 
"loc_FF969828:\n"
"    LDR     R1, =0x777 \n" 
"    LDR     R0, =0xFF968C18 \n" 
"    BL      sub_FF81EC88 \n" 
"loc_FF969834:\n"
"    LDR     R2, =0x66F2 \n" 
"    LDR     R0, [R5, #0x94] \n" 
"    MOV     R3, #2 \n" 
"    MOV     R1, #0xAA \n" 
"    BL      sub_FF88D3E4 \n" 
"    LDR     R2, =0x66F4 \n" 
"    LDR     R0, [R5, #0x94] \n" 
"    MOV     R3, #2 \n" 
"    MOV     R1, #0xA9 \n" 
"    BL      sub_FF88D3E4 \n" 
"    LDR     R2, =0x6740 \n" 
"    LDR     R0, [R5, #0x94] \n" 
"    MOV     R3, #4 \n" 
"    MOV     R1, #0xA2 \n" 
"    BL      sub_FF88D3E4 \n" 
"    LDR     R2, =0x6744 \n" 
"    LDR     R0, [R5, #0x94] \n" 
"    MOV     R3, #4 \n" 
"    MOV     R1, #0xA3 \n" 
"    BL      sub_FF88D3E4 \n" 
"    LDR     R2, =0x67C8 \n" 
"    MOV     R1, #0 \n" 
"    MOV     R0, #0xD \n" 
"    BL      sub_FF887950 \n" 
"    LDR     R0, [R5, #0x4C] \n" 
"    LDR     R1, =0x67C8 \n" 
"    CMP     R0, #2 \n" 
"    CMPNE   R0, #3 \n" 
"    LDREQ   R0, =0x42546000 \n" 
"    LDR     R3, =0xFF96974C \n" 
"    STREQ   R0, [R1] \n" 
"    LDRNE   R0, [R1] \n" 
"    LDR     R1, [R1, #4] \n" 
"    STR     R3, [SP] \n" 
"    LDR     R3, =0xACA5C \n" 
"    SUB     R2, R3, #0x18 \n" 
"    BL      sub_FFAAC5A4 \n" 
"    LDR     R3, [R5, #0x94] \n" 
"    STR     R3, [SP] \n" 
"    LDR     R0, [R5, #0x90] \n" 
"    LDRD    R2, [R5, #0xD0] \n" 
"    BL      sub_FFAAC918 \n" 
"    LDR     R0, [R5, #0x64] \n" 
"    LDR     R7, =0xACA44 \n" 
"    LDR     R3, =0x6778 \n" 
"    AND     R1, R0, #0xFF \n" 
"    LDR     R0, [R7] \n" 
"    SUB     R2, R3, #4 \n" 
"    BL      sub_FFAAB098 \n" 
"    LDR     R1, [R5, #0xC] \n" 
"    LDR     R0, =0xFFB978B0 \n" 
"    CMP     R1, #2 \n" 
"    LDR     R1, [R5, #0x4C] \n" 
"    ADD     R0, R0, R1, LSL #3 \n" 
"    LDR     R1, [R7, #0xC] \n" 
"    LDR     R0, [R0, R1, LSL #2] \n" 
"    BNE     loc_FF969934 \n" 
"    BL      sub_FFA6898C \n" 
"    LDR     R0, =0xFF969704 \n" 
"    MOV     R1, #0 \n" 
"    BL      sub_FFA68EA0 \n" 
"    B       loc_FF969944 \n" 
"loc_FF96992C:\n"
"    STR     R1, [R4, #0x14] \n" 
"    B       loc_FF969834 \n" 
"loc_FF969934:\n"
"    BL      sub_FFA674DC \n" 
"    LDR     R0, =0xFF969704 \n" 
"    MOV     R1, #0 \n" 
"    BL      sub_FFA67C18 \n" 
"loc_FF969944:\n"
"    LDR     R0, [R4, #8] \n" 
"    CMP     R0, #0 \n" 
"    BEQ     loc_FF969978 \n" 
"    ADD     R0, SP, #4 \n" 
"    BL      sub_FFAACF28 \n" 
"    LDR     R1, [R4, #0xC] \n" 
"    LDR     R0, [SP, #4] \n" 
"    BL      sub_FF861308 \n" 
"    ADD     R0, SP, #4 \n" 
"    BL      sub_FFAACF28 \n" 
"    LDR     R1, [R4, #0xC] \n" 
"    LDR     R0, [SP, #4] \n" 
"    BL      sub_FF861308 \n" 
"loc_FF969978:\n"
"    LDR     R0, =0xFF9696BC \n" 
"    STR     R6, [R5, #0x44]! \n" 
"    STR     R0, [R5, #0x70] \n" 
"    LDMFD   SP!, {R2-R8,PC} \n" 
	);
}


//** sub_FF969B20_my  @ 0xFF969B20 

void __attribute__((naked,noinline)) sub_FF969B20_my(  ) { 
asm volatile (
"    STMFD   SP!, {R4-R11,LR} \n" 
"    SUB     SP, SP, #0x64 \n" 
"    MOV     R9, #0 \n" 
"    LDR     R6, =0x66F0 \n" 
"    STR     R9, [SP, #0x54] \n" 
"    STR     R9, [SP, #0x4C] \n" 
"    STR     R9, [R6, #0xB8] \n" 
"    STR     R9, [R6, #0xBC] \n" 
"    STR     R9, [R6, #0xC0] \n" 
"    MOV     R4, R0 \n" 
"    STR     R9, [R6, #0xC4] \n" 
"    LDR     R0, [R6, #0x44] \n" 
"    MOV     R11, #4 \n" 
"    CMP     R0, #3 \n" 
"    STREQ   R11, [R6, #0x44] \n" 
"    LDR     R0, [R6, #0xB4] \n" 
"    MOV     R8, R9 \n" 
"    MOV     R5, #1 \n" 
"    MOV     R7, R9 \n" 
"    BLX     R0 \n" 
"    LDR     R0, [R6, #0x44] \n" 
"    CMP     R0, #6 \n" 
"    BEQ     loc_FF969B90 \n" 
"    LDR     R1, [R6, #0xC] \n" 
"    CMP     R1, #2 \n" 
"    BNE     loc_FF969BB8 \n" 
"    CMP     R0, #5 \n" 
"    BEQ     loc_FF969BC8 \n" 
"loc_FF969B90:\n"
"    LDR     R2, =0xFF9699F4 \n" 
"    LDR     R1, =0xFF969A58 \n" 
"    LDR     R0, =0xFF969ABC \n" 
"    MOV     R7, #1 \n" 
"    ADD     R3, SP, #0x34 \n" 
"    BL      sub_FF853A90 \n" 
"    LDR     R0, [R6, #0x44] \n" 
"    CMP     R0, #4 \n" 
"    MOVNE   R5, #0 \n" 
"    B       loc_FF969BD8 \n" 
"loc_FF969BB8:\n"
"    CMP     R0, #4 \n" 
"    BEQ     loc_FF969BD8 \n" 
"    CMP     R1, #2 \n" 
"    BNE     loc_FF969BD0 \n" 
"loc_FF969BC8:\n"
"    MOV     R0, #0 \n" 
"    BL      sub_FF853A9C \n" 
"loc_FF969BD0:\n"
"    ADD     SP, SP, #0x64 \n" 
"    LDMFD   SP!, {R4-R11,PC} \n" 
"loc_FF969BD8:\n"
"    LDRH    R0, [R6, #6] \n" 
"    CMP     R0, #3 \n" 
"    BNE     loc_FF969BF8 \n" 
"    LDR     R0, [R6, #0x6C] \n" 
"    LDR     R1, [R6, #0xC8] \n" 
"    BL      sub_FFB58D24 \n" 
"    CMP     R1, #0 \n" 
"    MOVNE   R5, #0 \n" 
"loc_FF969BF8:\n"
"    LDR     R0, [R6, #0x44] \n" 
"    CMP     R0, #6 \n" 
"    CMPNE   R0, #1 \n" 
"    CMPNE   R0, #3 \n" 
"    BNE     loc_FF969C3C \n" 
"    CMP     R7, #1 \n" 
"    CMPEQ   R5, #0 \n" 
"    BNE     loc_FF969C3C \n" 
"    BL      sub_FF853A94 \n" 
"    LDR     R0, [R6, #0x18] \n" 
"    MOV     R1, #0x3E8 \n" 
"    BL      sub_FF839FF4 \n" 
"    CMP     R0, #9 \n" 
"    BNE     loc_FF96A074 \n" 
"    MOV     R0, #0x90000 \n" 
"    BL      sub_FF892114 \n" 
"    B       loc_FF969BD0 \n" 
"loc_FF969C3C:\n"
"    CMP     R5, #1 \n" 
"    MOV     R10, #1 \n" 
"    BNE     loc_FF969C64 \n" 
"    ADD     R3, SP, #0x4C \n" 
"    ADD     R2, SP, #0x50 \n" 
"    ADD     R1, SP, #0x54 \n" 
"    ADD     R0, SP, #0x58 \n" 
"    BL      sub_FFAAD16C \n" 
"    MOVS    R9, R0 \n" 
"    BNE     loc_FF969C80 \n" 
"loc_FF969C64:\n"
"    LDR     R0, [R6, #0x34] \n" 
"    CMP     R0, #1 \n" 
"    BNE     loc_FF969DF0 \n" 
"    LDR     R0, [R6, #0x6C] \n" 
"    LDR     R1, [R6, #0x48] \n" 
"    CMP     R0, R1 \n" 
"    BCC     loc_FF969DF0 \n" 
"loc_FF969C80:\n"
"    CMP     R9, #0x80000001 \n" 
"    STREQ   R11, [R6, #0x70] \n" 
"    BEQ     loc_FF969CB8 \n" 
"    CMP     R9, #0x80000003 \n" 
"    STREQ   R10, [R6, #0x70] \n" 
"    BEQ     loc_FF969CB8 \n" 
"    CMP     R9, #0x80000005 \n" 
"    MOVEQ   R0, #2 \n" 
"    BEQ     loc_FF969CB4 \n" 
"    CMP     R9, #0x80000007 \n" 
"    STRNE   R8, [R6, #0x70] \n" 
"    BNE     loc_FF969CB8 \n" 
"    MOV     R0, #3 \n" 
"loc_FF969CB4:\n"
"    STR     R0, [R6, #0x70] \n" 
"loc_FF969CB8:\n"
"    LDR     R0, [R6, #0xC] \n" 
"    CMP     R0, #2 \n" 
"    BNE     loc_FF969D20 \n" 
"    LDR     R0, =0xFF9699E8 \n" 
"    MOV     R1, #0 \n" 
"    BL      sub_FFA68EA0 \n" 
"    LDR     R2, [R6, #0x64] \n" 
"    ADD     R3, SP, #0x5C \n" 
"    STRD    R2, [SP, #0x28] \n" 
"    MOV     R2, #0x18 \n" 
"    ADD     R1, SP, #0x34 \n" 
"    ADD     R0, SP, #0x10 \n" 
"    BL      sub_FFB58A08 \n" 
"    LDR     R1, [R6, #0x84] \n" 
"    LDR     R2, [R6, #0x88] \n" 
"    MVN     R3, #1 \n" 
"    ADD     R0, SP, #0x60 \n" 
"    STMEA   SP, {R0-R3} \n" 
"    MOV     R3, #0 \n" 
"    LDR     R0, =0xACA74 \n" 
"    MOV     R2, R3 \n" 
"    MOV     R1, #0x40 \n" 
"    BL      sub_FFA68DEC \n" 
"    B       loc_FF969D78 \n" 
"loc_FF969D18:\n"
"    MOV     R1, #1 \n" 
"    B       loc_FF96A004 \n" 
"loc_FF969D20:\n"
"    BL      sub_FF96A74C \n" 
"    LDR     R2, [R6, #0x64] \n" 
"    ADD     R3, SP, #0x5C \n" 
"    MVN     R1, #1 \n" 
"    MOV     R0, #0 \n" 
"    ADD     R5, SP, #0x1C \n" 
"    STMIA   R5, {R0-R3} \n" 
"    LDR     R3, [R4, #0x1C] \n" 
"    LDR     R1, [R6, #0x84] \n" 
"    LDR     R2, [R6, #0x88] \n" 
"    ADD     R0, SP, #0x60 \n" 
"    ADD     R4, SP, #0xC \n" 
"    STMIA   R4, {R0-R3} \n" 
"    MOV     R3, #0 \n" 
"    MOV     R1, #0x40 \n" 
"    STMEA   SP, {R1,R3} \n" 
"    MOV     R2, #0 \n" 
"    STR     R3, [SP, #8] \n" 
"    LDR     R3, =0xACA74 \n" 
"    MOV     R1, R2 \n" 
"    MOV     R0, R2 \n" 
"    BL      sub_FFA67AF8 \n" 
"loc_FF969D78:\n"
"    LDR     R0, [R6, #0x18] \n" 
"    LDR     R1, [R6, #0x60] \n" 
"    BL      sub_FF839FF4 \n" 
"    CMP     R0, #9 \n" 
"    BEQ     loc_FF969D18 \n" 
"    LDR     R0, [SP, #0x5C] \n" 
"    CMP     R0, #0 \n" 
"    BEQ     loc_FF969DA0 \n" 
"loc_FF969D98:\n"
"    MOV     R1, #1 \n" 
"    B       loc_FF96A01C \n" 
"loc_FF969DA0:\n"
"    LDR     R0, [R6, #0xC] \n" 
"    MOV     R4, #5 \n" 
"    CMP     R0, #2 \n" 
"    MOV     R0, #1 \n" 
"    BNE     loc_FF969DDC \n" 
"    BL      sub_FFA68E60 \n" 
"    BL      sub_FFA68E88 \n" 
"    MOV     R0, #0 \n" 
"    BL      sub_FF853A9C \n" 
"    BL      sub_FF853AAC \n" 
"    STR     R4, [R6, #0x44] \n" 
"    BL      sub_FF96A74C \n" 
"    BL      sub_FF853B08 \n" 
"    STR     R10, [R6, #0x44] \n" 
"    B       loc_FF969DE8 \n" 
"loc_FF969DDC:\n"
"    BL      sub_FFA67BA8 \n" 
"    BL      sub_FFA67BF4 \n" 
"    STR     R4, [R6, #0x44] \n" 
"loc_FF969DE8:\n"
"    STR     R8, [R6, #0x34] \n" 
"    B       loc_FF969BD0 \n" 
"loc_FF969DF0:\n"
"    CMP     R5, #1 \n" 
"    BNE     loc_FF96A06C \n" 
"    STR     R10, [R6, #0x38] \n" 
"    LDR     R0, [R6, #0x6C] \n" 
"    LDR     R11, [R4, #0xC] \n" 
"    CMP     R0, #0 \n" 
"    LDRNE   R9, [SP, #0x58] \n" 
"    LDRNE   R10, [SP, #0x54] \n" 
"    BNE     loc_FF969F3C \n" 
"    LDR     R0, [R6, #0xC] \n" 
"    CMP     R0, #2 \n" 
"    BNE     loc_FF969E94 \n" 
"    LDR     R0, =0xFF9699E8 \n" 
"    MOV     R1, #0 \n" 
"    BL      sub_FFA68EA0 \n" 
"    LDR     R2, [R6, #0x64] \n" 
"    ADD     R3, SP, #0x5C \n" 
"    STRD    R2, [SP, #0x28] \n" 
"    MOV     R2, #0x18 \n" 
"    ADD     R1, SP, #0x34 \n" 
"    ADD     R0, SP, #0x10 \n" 
"    BL      sub_FFB58A08 \n" 
"    LDR     R1, [R6, #0x84] \n" 
"    LDR     R2, [R6, #0x88] \n" 
"    MVN     R3, #0 \n" 
"    ADD     R0, SP, #0x60 \n" 
"    STMEA   SP, {R0-R3} \n" 
"    LDR     R0, [SP, #0x58] \n" 
"    LDR     R1, [SP, #0x54] \n" 
"    LDR     R2, [SP, #0x50] \n" 
"    LDR     R3, [SP, #0x4C] \n" 
"    BL      sub_FFA68DEC \n" 
"    LDR     R0, [R6, #0x18] \n" 
"    LDR     R1, [R6, #0x60] \n" 
"    BL      sub_FF839FF4 \n" 
"    CMP     R0, #9 \n" 
"    BEQ     loc_FF969D18 \n" 
"    LDR     R0, =0xFF969704 \n" 
"    MOV     R1, #0 \n" 
"    BL      sub_FFA68EA0 \n" 
"    B       loc_FF969EFC \n" 
"loc_FF969E94:\n"
"    LDR     R0, [R4, #0x20] \n" 
"    LDR     R2, [R6, #0x64] \n" 
"    ADD     R3, SP, #0x5C \n" 
"    MVN     R1, #0 \n" 
"    ADD     R9, SP, #0x1C \n" 
"    STMIA   R9, {R0-R3} \n" 
"    LDR     R3, [R4, #0x1C] \n" 
"    LDR     R1, [R6, #0x84] \n" 
"    LDR     R2, [R6, #0x88] \n" 
"    ADD     R0, SP, #0x60 \n" 
"    ADD     R9, SP, #0xC \n" 
"    STMIA   R9, {R0-R3} \n" 
"    LDR     R1, [SP, #0x50] \n" 
"    LDR     R2, [SP, #0x54] \n" 
"    LDR     R3, [SP, #0x4C] \n" 
"    STMFA   SP, {R1,R3} \n" 
"    STR     R2, [SP] \n" 
"    LDMIB   R4, {R0,R1} \n" 
"    LDR     R3, [SP, #0x58] \n" 
"    MOV     R2, R11 \n" 
"    BL      sub_FFA67AF8 \n" 
"    LDR     R0, [R6, #0x18] \n" 
"    LDR     R1, [R6, #0x60] \n" 
"    BL      sub_FF839FF4 \n" 
"    CMP     R0, #9 \n" 
"    BEQ     loc_FF969D18 \n" 
"loc_FF969EFC:\n"
"    LDR     R0, [SP, #0x5C] \n" 
"    CMP     R0, #0 \n" 
"    BNE     loc_FF969D98 \n" 
"    LDR     R0, [R6, #0xC] \n" 
"    CMP     R0, #2 \n" 
"    MOV     R0, #1 \n" 
"    BNE     loc_FF969F20 \n" 
"    BL      sub_FFA68E60 \n" 
"    B       loc_FF969F24 \n" 
"loc_FF969F20:\n"
"    BL      sub_FFA67BA8 \n" 
"loc_FF969F24:\n"
"    STR     R8, [R6, #0xC4] \n" 
"    LDR     R0, [SP, #0x60] \n" 
"    LDR     R1, [SP, #0x58] \n" 
"    ADD     R9, R1, R0 \n" 
"    LDR     R1, [SP, #0x54] \n" 
"    SUB     R10, R1, R0 \n" 
"loc_FF969F3C:\n"
"    LDR     R0, [R6, #0xC] \n" 
"    LDR     R2, [R6, #0x64] \n" 
"    CMP     R0, #2 \n" 
"    ADD     R3, SP, #0x5C \n" 
"    BNE     loc_FF969F94 \n" 
"    STRD    R2, [SP, #0x28] \n" 
"    MOV     R2, #0x18 \n" 
"    ADD     R1, SP, #0x34 \n" 
"    ADD     R0, SP, #0x10 \n" 
"    BL      sub_FFB58A08 \n" 
"    LDR     R1, [R6, #0x84] \n" 
"    LDR     R2, [R6, #0x88] \n" 
"    LDR     R3, [R6, #0x68] \n" 
"    ADD     R0, SP, #0x60 \n" 
"    STMEA   SP, {R0-R3} \n" 
"    LDR     R2, [SP, #0x50] \n" 
"    LDR     R3, [SP, #0x4C] \n" 
"    MOV     R1, R10 \n" 
"    MOV     R0, R9 \n" 
"    BL      sub_FFA68DEC \n" 
"    BL      sub_FF853A94 \n" 
"    B       loc_FF969FEC \n" 
"loc_FF969F94:\n"
"    LDR     R1, [R6, #0x68] \n" 
"    LDR     R0, [R4, #0x20] \n" 
"    STR     R1, [SP, #0x20] \n" 
"    STR     R0, [SP, #0x1C] \n" 
"    STR     R2, [SP, #0x24] \n" 
"    STR     R3, [SP, #0x28] \n" 
"    LDR     R3, [R4, #0x1C] \n" 
"    LDR     R1, [R6, #0x84] \n" 
"    LDR     R2, [R6, #0x88] \n" 
"    ADD     R0, SP, #0x60 \n" 
"    STR     R2, [SP, #0x14] \n" 
"    LDR     R2, [SP, #0x50] \n" 
"    STR     R1, [SP, #0x10] \n" 
"    STR     R3, [SP, #0x18] \n" 
"    LDR     R3, [SP, #0x4C] \n" 
"    STR     R0, [SP, #0xC] \n" 
"    STMFA   SP, {R2,R3} \n" 
"    STR     R10, [SP] \n" 
"    LDMIB   R4, {R0,R1} \n" 
"    MOV     R3, R9 \n" 
"    MOV     R2, R11 \n" 
"    BL      sub_FFA67AF8 \n" 
"loc_FF969FEC:\n"
"    LDR     R0, [R6, #0x18] \n" 
"    LDR     R1, [R6, #0x60] \n" 
"    BL      sub_FF839FF4 \n" 
"    CMP     R0, #9 \n" 
"    BNE     loc_FF96A00C \n" 
"    MOV     R1, #0 \n" 
"loc_FF96A004:\n"
"    MOV     R0, #0x90000 \n" 
"    B       loc_FF96A020 \n" 
"loc_FF96A00C:\n"
"    LDR     R0, [SP, #0x5C] \n" 
"    CMP     R0, #0 \n" 
"    BEQ     loc_FF96A028 \n" 
"    MOV     R1, #0 \n" 
"loc_FF96A01C:\n"
"    MOV     R0, #0xA0000 \n" 
"loc_FF96A020:\n"
"    BL      sub_FF969988 \n" 
"    B       loc_FF969BD0 \n" 
"loc_FF96A028:\n"
"    LDR     R0, [R6, #0xC] \n" 
"    CMP     R0, #2 \n" 
"    MOV     R0, #0 \n" 
"    BNE     loc_FF96A040 \n" 
"    BL      sub_FFA68E60 \n" 
"    B       loc_FF96A044 \n" 
"loc_FF96A040:\n"
"    BL      sub_FFA67BA8 \n" 
"loc_FF96A044:\n"
"    LDR     R0, [SP, #0x58] \n" 
"    LDR     R1, [SP, #0x60] \n" 
"    BL      sub_FFAAD390 \n" 
"    LDR     R0, [R6, #0x68] \n" 
"    LDR     R3, =0x6778 \n" 
"    ADD     R1, R0, #1 \n" 
"    STR     R1, [R6, #0x68] \n" 
"    LDR     R0, [SP, #0x60] \n" 
"    SUB     R2, R3, #4 \n" 
"    BL      sub_FFAAB164 \n" 
        //PATCH BEGIN
                "LDR    R0, =0x6774\n"
                "BL     set_quality\n"
        //PATCH END
"loc_FF96A06C:\n"
"    CMP     R7, #1 \n" 
"    BNE     loc_FF96A080 \n" 
"loc_FF96A074:\n"
"    BL      sub_FF853A98 \n" 
"    MOV     R0, #1 \n" 
"    BL      sub_FF853A9C \n" 
"loc_FF96A080:\n"
"    CMP     R5, #1 \n" 
"    LDRNEH  R0, [R6, #6] \n" 
"    CMPNE   R0, #3 \n" 
"    BNE     loc_FF969BD0 \n" 
"    LDR     R0, [R6, #0x6C] \n" 
"    ADD     R0, R0, #1 \n" 
"    STR     R0, [R6, #0x6C] \n" 
"    LDRH    R1, [R6, #6] \n" 
"    CMP     R1, #3 \n" 
"    LDRNE   R1, [R6, #0x54] \n" 
"    LDREQ   R1, =0x3E9 \n" 
"    MUL     R0, R1, R0 \n" 
"    LDRNE   R1, [R6, #0x50] \n" 
"    LDREQ   R1, =0x1770 \n" 
"    BL      sub_FFB58D24 \n" 
"    MOV     R4, R0 \n" 
"    BL      sub_FFAAD718 \n" 
"    LDR     R0, [R6, #0x8C] \n" 
"    CMP     R0, R4 \n" 
"    BNE     loc_FF96A0DC \n" 
"    LDR     R0, [R6, #0x3C] \n" 
"    CMP     R0, #1 \n" 
"    BNE     loc_FF96A0F0 \n" 
"loc_FF96A0DC:\n"
"    LDR     R1, [R6, #0x98] \n" 
"    MOV     R0, R4 \n" 
"    BLX     R1 \n" 
"    STR     R4, [R6, #0x8C] \n" 
"    STR     R8, [R6, #0x3C] \n" 
"loc_FF96A0F0:\n"
"    STR     R8, [R6, #0x38] \n" 
"    B       loc_FF969BD0 \n" 
	);
}
