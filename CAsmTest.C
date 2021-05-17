#include <stdio.h>
#include <stdlib.h>
#include "CAsm.H"

int main(){
 U8 bin[255]={0};
 U8 len=0;
 U32 args[]={C_MNM_PUSH,C_OPT_REG,C_REG_FLAGS};
 CAsm(C_ARC_AMD64,C_SET_UNMANG,bin,&len,&args);
 for(U32 i=0;i<len;++i){
  printf("%02X ",bin[i]);
 }
 getchar();
}
