#ifndef _C_ASM_H_
#define _C_ASM_H_

typedef          void  U0;
typedef signed   char  S8;
typedef unsigned char  U8;
typedef signed   short S16;
typedef unsigned short U16;
typedef signed   int   S32;
typedef unsigned int   U32;

//args

#define C_REG_MIN       0x000
#define C_REG_AL        0x000
#define C_REG_CL        0x001
#define C_REG_DL        0x002
#define C_REG_BL        0x003
#define C_REG_AH        0x004
#define C_REG_CH        0x005
#define C_REG_DH        0x006
#define C_REG_BH        0x007
#define C_REG_R0B       C_REG_AL
#define C_REG_R1B       C_REG_CL
#define C_REG_R2B       C_REG_DL
#define C_REG_R3B       C_REG_BL
#define C_REG_R4B       C_REG_AH
#define C_REG_R5B       C_REG_CH
#define C_REG_R6B       C_REG_DH
#define C_REG_R7B       C_REG_BH
#define C_REG_R0L       C_REG_AL
#define C_REG_R1L       C_REG_CL
#define C_REG_R2L       C_REG_DL
#define C_REG_R3L       C_REG_BL
#define C_REG_R4L       C_REG_AH
#define C_REG_R5L       C_REG_CH
#define C_REG_R6L       C_REG_DH
#define C_REG_R7L       C_REG_BH
#define C_REG_SPL       0x008
#define C_REG_BPL       0x009
#define C_REG_SIL       0x00A
#define C_REG_DIL       0x00B
#define C_REG_R8B       0x00C
#define C_REG_R9B       0x00D
#define C_REG_R10B      0x00E
#define C_REG_R11B      0x00F
#define C_REG_R12B      0x010
#define C_REG_R13B      0x011
#define C_REG_R14B      0x012
#define C_REG_R15B      0x013
#define C_REG_R8L       C_REG_R8B
#define C_REG_R9L       C_REG_R9B
#define C_REG_R10L      C_REG_R10B
#define C_REG_R11L      C_REG_R11B
#define C_REG_R12L      C_REG_R12B
#define C_REG_R13L      C_REG_R13B
#define C_REG_R14L      C_REG_R14B
#define C_REG_R15L      C_REG_R15B
#define C_REG_AX        0x014
#define C_REG_CX        0x015
#define C_REG_DX        0x016
#define C_REG_BX        0x017
#define C_REG_SP        0x018
#define C_REG_BP        0x019
#define C_REG_SI        0x01A
#define C_REG_DI        0x01B
#define C_REG_R0W       C_REG_AX
#define C_REG_R1W       C_REG_CX
#define C_REG_R2W       C_REG_DX
#define C_REG_R3W       C_REG_BX
#define C_REG_R4W       C_REG_SP
#define C_REG_R5W       C_REG_BP
#define C_REG_R6W       C_REG_SI
#define C_REG_R7W       C_REG_DI
#define C_REG_R8W       0x01C
#define C_REG_R9W       0x01D
#define C_REG_R10W      0x01E
#define C_REG_R11W      0x01F
#define C_REG_R12W      0x020
#define C_REG_R13W      0x021
#define C_REG_R14W      0x022
#define C_REG_R15W      0x023
#define C_REG_EAX       0x024
#define C_REG_ECX       0x025
#define C_REG_EDX       0x026
#define C_REG_EBX       0x027
#define C_REG_ESP       0x028
#define C_REG_EBP       0x029
#define C_REG_ESI       0x02A
#define C_REG_EDI       0x02B
#define C_REG_R0D       C_REG_EAX
#define C_REG_R1D       C_REG_ECX
#define C_REG_R2D       C_REG_EDX
#define C_REG_R3D       C_REG_EBX
#define C_REG_R4D       C_REG_ESP
#define C_REG_R5D       C_REG_EBP
#define C_REG_R6D       C_REG_ESI
#define C_REG_R7D       C_REG_EDI
#define C_REG_R8D       0x02C
#define C_REG_R9D       0x02D
#define C_REG_R10D      0x02E
#define C_REG_R11D      0x02F
#define C_REG_R12D      0x030
#define C_REG_R13D      0x031
#define C_REG_R14D      0x032
#define C_REG_R15D      0x033
#define C_REG_RAX       0x034
#define C_REG_RCX       0x035
#define C_REG_RDX       0x036
#define C_REG_RBX       0x037
#define C_REG_RSP       0x038
#define C_REG_RBP       0x039
#define C_REG_RSI       0x03A
#define C_REG_RDI       0x03B
#define C_REG_R0        C_REG_RAX
#define C_REG_R1        C_REG_RCX
#define C_REG_R2        C_REG_RDX
#define C_REG_R3        C_REG_RBX
#define C_REG_R4        C_REG_RSP
#define C_REG_R5        C_REG_RBP
#define C_REG_R6        C_REG_RSI
#define C_REG_R7        C_REG_RDI
#define C_REG_R8        0x03C
#define C_REG_R9        0x03D
#define C_REG_R10       0x03E
#define C_REG_R11       0x03F
#define C_REG_R12       0x040
#define C_REG_R13       0x041
#define C_REG_R14       0x042
#define C_REG_R15       0x043
#define C_REG_ST0       0x044
#define C_REG_ST1       0x045
#define C_REG_ST2       0x046
#define C_REG_ST3       0x047
#define C_REG_ST4       0x048
#define C_REG_ST5       0x049
#define C_REG_ST6       0x04A
#define C_REG_ST7       0x04B
#define C_REG_MM0       0x04C
#define C_REG_MM1       0x04D
#define C_REG_MM2       0x04E
#define C_REG_MM3       0x04F
#define C_REG_MM4       0x050
#define C_REG_MM5       0x051
#define C_REG_MM6       0x052
#define C_REG_MM7       0x053
#define C_REG_XMM0      0x054
#define C_REG_XMM1      0x055
#define C_REG_XMM2      0x056
#define C_REG_XMM3      0x057
#define C_REG_XMM4      0x058
#define C_REG_XMM5      0x059
#define C_REG_XMM6      0x05A
#define C_REG_XMM7      0x05B
#define C_REG_XMM8      0x05C
#define C_REG_XMM9      0x05D
#define C_REG_XMM10     0x05E
#define C_REG_XMM11     0x05F
#define C_REG_XMM12     0x060
#define C_REG_XMM13     0x061
#define C_REG_XMM14     0x062
#define C_REG_XMM15     0x063
#define C_REG_XMM16     0x064
#define C_REG_XMM17     0x065
#define C_REG_XMM18     0x066
#define C_REG_XMM19     0x067
#define C_REG_XMM20     0x068
#define C_REG_XMM21     0x069
#define C_REG_XMM22     0x06A
#define C_REG_XMM23     0x06B
#define C_REG_XMM24     0x06C
#define C_REG_XMM25     0x06D
#define C_REG_XMM26     0x06E
#define C_REG_XMM27     0x06F
#define C_REG_XMM28     0x070
#define C_REG_XMM29     0x071
#define C_REG_XMM30     0x072
#define C_REG_XMM31     0x073
#define C_REG_YMM0      0x074
#define C_REG_YMM1      0x075
#define C_REG_YMM2      0x076
#define C_REG_YMM3      0x077
#define C_REG_YMM4      0x078
#define C_REG_YMM5      0x079
#define C_REG_YMM6      0x07A
#define C_REG_YMM7      0x07B
#define C_REG_YMM8      0x07C
#define C_REG_YMM9      0x07D
#define C_REG_YMM10     0x07E
#define C_REG_YMM11     0x07F
#define C_REG_YMM12     0x080
#define C_REG_YMM13     0x081
#define C_REG_YMM14     0x082
#define C_REG_YMM15     0x083
#define C_REG_YMM16     0x084
#define C_REG_YMM17     0x085
#define C_REG_YMM18     0x086
#define C_REG_YMM19     0x087
#define C_REG_YMM20     0x088
#define C_REG_YMM21     0x089
#define C_REG_YMM22     0x08A
#define C_REG_YMM23     0x08B
#define C_REG_YMM24     0x08C
#define C_REG_YMM25     0x08D
#define C_REG_YMM26     0x08E
#define C_REG_YMM27     0x08F
#define C_REG_YMM28     0x090
#define C_REG_YMM29     0x091
#define C_REG_YMM30     0x092
#define C_REG_YMM31     0x093
#define C_REG_ZMM0      0x094
#define C_REG_ZMM1      0x095
#define C_REG_ZMM2      0x096
#define C_REG_ZMM3      0x097
#define C_REG_ZMM4      0x098
#define C_REG_ZMM5      0x099
#define C_REG_ZMM6      0x09A
#define C_REG_ZMM7      0x09B
#define C_REG_ZMM8      0x09C
#define C_REG_ZMM9      0x09D
#define C_REG_ZMM10     0x09E
#define C_REG_ZMM11     0x09F
#define C_REG_ZMM12     0x0A0
#define C_REG_ZMM13     0x0A1
#define C_REG_ZMM14     0x0A2
#define C_REG_ZMM15     0x0A3
#define C_REG_ZMM16     0x0A4
#define C_REG_ZMM17     0x0A5
#define C_REG_ZMM18     0x0A6
#define C_REG_ZMM19     0x0A7
#define C_REG_ZMM20     0x0A8
#define C_REG_ZMM21     0x0A9
#define C_REG_ZMM22     0x0AA
#define C_REG_ZMM23     0x0AB
#define C_REG_ZMM24     0x0AC
#define C_REG_ZMM25     0x0AD
#define C_REG_ZMM26     0x0AE
#define C_REG_ZMM27     0x0AF
#define C_REG_ZMM28     0x0B0
#define C_REG_ZMM29     0x0B1
#define C_REG_ZMM30     0x0B2
#define C_REG_ZMM31     0x0B3
#define C_REG_K0        0x0B4
#define C_REG_K1        0x0B5
#define C_REG_K2        0x0B6
#define C_REG_K3        0x0B7
#define C_REG_K4        0x0B8
#define C_REG_K5        0x0B9
#define C_REG_K6        0x0BA
#define C_REG_K7        0x0BB
#define C_REG_TMM0      0x0BC
#define C_REG_TMM1      0x0BD
#define C_REG_TMM2      0x0BE
#define C_REG_TMM3      0x0BF
#define C_REG_TMM4      0x0C0
#define C_REG_TMM5      0x0C1
#define C_REG_TMM6      0x0C2
#define C_REG_TMM7      0x0C3
#define C_REG_TR0       0x0C4
#define C_REG_TR1       0x0C5
#define C_REG_TR2       0x0C6
#define C_REG_TR3       0x0C7
#define C_REG_TR4       0x0C8
#define C_REG_TR5       0x0C9
#define C_REG_TR6       0x0CA
#define C_REG_TR7       0x0CB
#define C_REG_DR0       0x0CC
#define C_REG_DR1       0x0CD
#define C_REG_DR2       0x0CE
#define C_REG_DR3       0x0CF
#define C_REG_DR4       0x0D0
#define C_REG_DR5       0x0D1
#define C_REG_DR6       0x0D2
#define C_REG_DR7       0x0D3
#define C_REG_DR8       0x0D4
#define C_REG_DR9       0x0D5
#define C_REG_DR10      0x0D6
#define C_REG_DR11      0x0D7
#define C_REG_DR12      0x0D8
#define C_REG_DR13      0x0D9
#define C_REG_DR14      0x0DA
#define C_REG_DR15      0x0DB
#define C_REG_CR0       0x0DC
#define C_REG_CR1       0x0DD
#define C_REG_CR2       0x0DE
#define C_REG_CR3       0x0DF
#define C_REG_CR4       0x0E0
#define C_REG_CR5       0x0E1
#define C_REG_CR6       0x0E2
#define C_REG_CR7       0x0E3
#define C_REG_CR8       0x0E4
#define C_REG_CR9       0x0E5
#define C_REG_CR10      0x0E6
#define C_REG_CR11      0x0E7
#define C_REG_CR12      0x0E8
#define C_REG_CR13      0x0E9
#define C_REG_CR14      0x0EA
#define C_REG_CR15      0x0EB
#define C_REG_BND0      0x0EC
#define C_REG_BND1      0x0ED
#define C_REG_BND2      0x0EE
#define C_REG_BND3      0x0EF
#define C_REG_ES        0x0F0
#define C_REG_CS        0x0F1
#define C_REG_SS        0x0F2
#define C_REG_DS        0x0F3
#define C_REG_FS        0x0F4
#define C_REG_GS        0x0F5
#define C_REG_TR        0x0F6
#define C_REG_IDTR      0x0F7
#define C_REG_LDTR      0x0F8
#define C_REG_GDTR      0x0F9
#define C_REG_IP        0x0FA
#define C_REG_EIP       0x0FB
#define C_REG_RIP       0x0FC
#define C_REG_FLAGS     0x0FD
#define C_REG_EFLAGS    0x0FE
#define C_REG_RFLAGS    0x0FF
#define C_REG_CW        0x100
#define C_REG_SW        0x101
#define C_REG_TW        0x102
#define C_REG_BNDCFG    0x103
#define C_REG_BNDSTATUS 0x104
#define C_REG_MSW       0x105
#define C_REG_MXCSR     0x106
#define C_REG_XCR0      0x107
#define C_REG_SSP       0x108
#define C_REG_PKRU      0x109
#define C_REG_MAX       0x109

#define C_OPT_MIN       0x110
#define C_OPT_REG       0x110
#define C_OPT_MEM       0x111
#define C_OPT_IMM       0x112
#define C_OPT_MAX       0x112

#define C_WID_MIN       0x113
#define C_WID_8         0x113
#define C_WID_16        0x114
#define C_WID_32        0x115
#define C_WID_64        0x116
#define C_WID_80        0x117
#define C_WID_128       0x118
#define C_WID_256       0x119
#define C_WID_512       0x11A
#define C_WID_MAX       0x11A

#define C_PFX_MIN       0x11B
#define C_PFX_LCK       0x11B
#define C_PFX_ACQ       0x11C
#define C_PFX_REL       0x11D
#define C_PFX_ACLLCK    0x11E
#define C_PFX_RELLCK    0x11F
#define C_PFX_BND       0x120
#define C_PFX_REP       0x121
#define C_PFX_REPE      0x121
#define C_PFX_REPZ      0x121
#define C_PFX_REPNE     0x122
#define C_PFX_REPNZ     0x122
#define C_PFX_BT        0x123
#define C_PFX_BNT       0x124
#define C_PFX_MAX       0x124

#define C_SCL_MIN       0x124
#define C_SCL_1         0x124
#define C_SCL_2         0x125
#define C_SCL_4         0x126
#define C_SCL_8         0x127
#define C_SCL_MAX       0x127

#define C_MNM_MIN       0x128
#define C_MNM_PUSH      0x128
#define C_MNM_PUSHF     0x129
#define C_MNM_PUSHFD    0x12A
#define C_MNM_PUSHFQ    0x12B
#define C_MNM_POP       0x12C
#define C_MNM_POPF      0x12D
#define C_MNM_POPFD     0x12E
#define C_MNM_POPFQ     0x12F
#define C_MNM_MAX       0x12F

//params

#define C_ARC_IA32      0x0
#define C_ARC_AMD64     0x1

#define C_SET_UNMANG    0x1
#define C_SEG_FIXFAKE   0x2

#define C_SPC(Reg,FstInGrp) ((C_REG_PKRU-FstInGrp)-(C_REG_PKRU-Reg))
#define C_REV_SPC(Reg,LstInGrp) (LstInGrp-Reg)

U8 CAsmMem(U8 arc,U8 opc,U8 is_ext,U8 ext,U8*bin,U8*len,U32*arg){
 U8 arg_i=0,tmp_arg=arg[arg_i];
 U16 mrm_sib=0;
 if(C_REG_ES<=tmp_arg&&C_REG_GS>=tmp_arg){
  switch(C_REV_SPC(tmp_arg,C_REG_GS)){
   case 0:
    bin[*len]=0x65;
    *len+=1;
    break;
   case 1:
    bin[*len]=0x64;
    *len+=1;
    break;
   case 2:
    bin[*len]=0x3E;
    *len+=1;
    break;
   case 3:
    bin[*len]=0x36;
    *len+=1;
    break;
   case 4:
    bin[*len]=0x2E;
    *len+=1;
    break;
   case 5:
    bin[*len]=0x26;
    *len+=1;
    break;
  }
  arg_i+=1;
  tmp_arg=arg[arg_i];
 }
 if(is_ext)
  mrm_sib|=ext<<3;
 if(C_REG_EIP==tmp_arg||C_REG_RIP==tmp_arg){
  if(C_ARC_IA32==arc)
   return 0;
  mrm_sib|=0b101;
  bin[*len]=0xFF&mrm_sib;
  *len+=1;
  *(U32*)(&bin[*len])=arg[arg_i+1];
  return 1;
 }
}

U8 CAsmPfx(U8*bin,U8*len,U32*arg,U8*arg_i){
 U16 tmp_arg=0,grp=0,cnt=0;
 while(1){
  tmp_arg=arg[*arg_i];
  if(!(C_PFX_MIN<=tmp_arg&&C_PFX_MAX>=tmp_arg))
   return 0;
  if(C_PFX_LCK<=tmp_arg&&C_PFX_REPNZ>=tmp_arg){
   if(0b0001&grp)
    return 0;
  }
  else if(C_PFX_BT==tmp_arg||C_PFX_BNT==tmp_arg){
   if(0b0010&grp)
    return 0;
  }
  switch(C_PFX_MAX-tmp_arg){
   case 0:
   case 1:
    bin[*len]=0x2E + (0x10*tmp_arg);
    *len+=1;
    break;
   case 2:
   case 4:
   case 7:
    bin[*len]=0xF3;
    break;
   case 8:
   case 3:
    bin[*len]=0xF2;
    break;
   case 5:
   case 6:
   case 9:
    bin[*len]=0xF0;
    *len+=1;
    if(5==tmp_arg)
     bin[*len]=0xF3;
    else
     bin[*len]=0xF3;
    *len+=1;
    break;
  }
  cnt+=1;
  *arg_i+=1;
 }
}

U8 CAsm(U8 arc,U8 set,U8*bin,U8*len,U32*arg){
 U32 arg_i=0;
 U8 tmp_len=0,tmp_reg=0,tmp_spc=0;
 switch(arc){
  case C_ARC_IA32:
  case C_ARC_AMD64:
   tmp_len=CAsmPfx(bin,len,arg,(U8*)&arg_i);
   switch(arg[arg_i++]){
    case C_MNM_PUSH:
     if(tmp_len){
      *len-=tmp_len;
      return 0;
     }
     switch(arg[arg_i++]){
      case C_OPT_REG:
       tmp_reg=arg[arg_i++];
       if(C_REG_ES<=tmp_reg&&C_REG_GS>=tmp_reg){
        tmp_spc=C_SPC(tmp_reg,C_REG_ES);
        switch(tmp_spc){
         case 0:case 1:case 2:case 3:
          bin[*len]=0x06+(0x08*tmp_spc);
          *len+=1;
          return 1;
         case 4:case 5:
          *(U16*)(&bin[*len])=(U16)0x000F|(((U16)0x00A0
           +(0x8*(tmp_spc-4)))<<8);
          *len+=2;
          return 1;
        }
       }else if(C_REG_AX<=tmp_reg&&C_REG_DI>=tmp_reg){
        tmp_spc=C_SPC(tmp_reg,C_REG_AX);
        bin[*len]=0x66;
        *len+=1;
        goto C_PUSH_GP_SKIP;
       }else if(C_REG_EAX<=tmp_reg&&C_REG_EDI>=tmp_reg){
        if(C_ARC_AMD64==arc)
         return 0;
        tmp_spc=C_SPC(tmp_reg,C_REG_EAX);
        goto C_PUSH_GP_SKIP;
       }else if(C_REG_RAX<=tmp_reg&&C_REG_RDI>=tmp_reg){
        if(C_ARC_IA32==arc)
         return 0;
        tmp_spc=C_SPC(tmp_reg,C_REG_RAX);
       C_PUSH_GP_SKIP:
        bin[*len]=0x50+tmp_spc;
        *len+=1;
        return 1;
       }else if(C_REG_FLAGS<=tmp_reg&&C_REG_RFLAGS>=tmp_reg){
        if(C_SET_UNMANG&set){
         switch(C_REV_SPC(tmp_reg,C_REG_RFLAGS)){
          case 2:
           bin[*len]=0x66;
           *len+=1;
           goto C_PUSH_FLAG_SKIP;
          case 1:
           if(C_ARC_AMD64==arc)
            return 0;
           goto C_PUSH_FLAG_SKIP;
          case 0:
           if(C_ARC_IA32==arc)
            return 0;
          C_PUSH_FLAG_SKIP:
           bin[*len]=0x9C;
           *len+=1;
           return 1;
         }
        }else
         goto C_PUSH_REG_BAD_SKIP;
       }else{
       C_PUSH_REG_BAD_SKIP:
        return 0;
       }
       return 0;
      case C_OPT_IMM:
       switch(arg[1]){
        case C_WID_8:
         *(U16*)(&bin[*len])=(U16)0x6A|((0xFF&(U16)arg[2])<<8);
         *len+=2;
         return 1;
        case C_WID_16:
         *(U32*)(&bin[*len])=(U32)0x6866|((0xFFFF&arg[2])<<16);
         *len+=4;
         return 1;
        case C_WID_32:
         bin[*len]=0x68;
         *len+=1;
         *(U32*)(&bin[*len])=arg[2];
         *len+=4;
         return 1;
       }
       return 0;
      case C_OPT_MEM:
       return CAsmMem(arc,0xFF,1,6,bin,len,&arg[1]);
       return 0;
     }
     arg_i+=1;
   }
 }
}

#endif
