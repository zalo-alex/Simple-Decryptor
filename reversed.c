#include "out.h"



int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00101020(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = fread(__ptr,__size,__n,__stream);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fclose(__stream);
  return iVar1;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void srand(uint __seed)

{
  srand(__seed);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long ftell(FILE *__stream)

{
  long lVar1;
  
  lVar1 = ftell(__stream);
  return lVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = time(__timer);
  return tVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = fseek(__stream,__off,__whence);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int rand(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1;
}



void _start(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  __libc_start_main(main,unaff_retaddr,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_3,
                    auStack_8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x001011e3)
// WARNING: Removing unreachable block (ram,0x001011ef)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00101224)
// WARNING: Removing unreachable block (ram,0x00101230)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_8061 != '\0') {
    return;
  }
  __cxa_finalize(&__dso_handle);
  deregister_tm_clones();
  completed_8061 = 1;
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



undefined8 main(void)

{
  int iVar1;
  time_t tVar2;
  long in_FS_OFFSET;
  uint local_40;
  uint local_3c;
  long local_38;
  FILE *local_30;
  size_t local_28;
  void *local_20;
  FILE *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = fopen("flag","rb");
  fseek(local_30,0,2);
  local_28 = ftell(local_30);
  fseek(local_30,0,0);
  local_20 = malloc(local_28);
  fread(local_20,local_28,1,local_30);
  fclose(local_30);
  tVar2 = time((time_t *)0x0);
  local_40 = (uint)tVar2;
  srand(local_40);

  for (local_38 = 0; local_38 < (long)local_28; local_38 = local_38 + 1) {
    iVar1 = rand();
    *(byte *)((long)local_20 + local_38) = *(byte *)((long)local_20 + local_38) ^ (byte)iVar1;
    local_3c = rand();
    local_3c = local_3c & 7;
    *(byte *)((long)local_20 + local_38) =
         *(byte *)((long)local_20 + local_38) << (sbyte)local_3c |
         *(byte *)((long)local_20 + local_38) >> 8 - (sbyte)local_3c;
  }
  local_18 = fopen("flag.enc","wb");
  fwrite(&local_40,1,4,local_18);
  fwrite(local_20,1,local_28,local_18);
  fclose(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return 0;
}



void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _init(param_1);
  lVar1 = 0;
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[lVar1])((ulong)param_1 & 0xffffffff,param_2,param_3)
    ;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}



void __libc_csu_fini(void)

{
  return;
}



void _fini(void)

{
  return;
}




