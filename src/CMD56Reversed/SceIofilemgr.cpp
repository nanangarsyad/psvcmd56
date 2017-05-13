#include <string>

#include "SceIofilemgr.h"

#include "Constants.h"
#include "SceSysmemGlobalVariables.h"
#include "SceCpu.h"
#include "SceThreadmgr.h"

int SceDebugForDriver_02b04343(int r0, int* r1, char* r2, int r3)
{
   return 0;
}

//==========================

SceUID get_SceIoVfsHeap_id()
{
   //dereference 0x99C0D8
   return 0;
}

//==========================

//0x99D9D4
typedef struct ctx_19D4 //size is 0x1C
{
   char* unk_0; 
   uint32_t unk_4;
   vfs_node* offset;
   uint32_t size;

   uint32_t count;
   uint32_t unk_14;
   uint32_t unk_18;
   uint32_t unk_1C;
}ctx_19D4;

//initializes arrays
int sub_BF3350(ctx_19D4 *buffer, int count, vfs_node* offset1, int size, char* offset2)
{
   if(size == 0)
      return -1;

   buffer->unk_0 = 0;
   buffer->unk_4 = 0;
   buffer->offset = offset1;
   buffer->size = size;
   buffer->count = count;

   int cur_idx = count - 1;

   if(cur_idx < 0)
      return 0;

   vfs_node* array1 = cur_idx * size + offset1;

   char* array2 = offset2 + (count * 8);   

   while(true)
   {
      //array2[-4] = array1;

      while(true)
      {
         //array2[-4] = buffer->unk_0;

         //DMB.W           SY

         buffer->unk_0 = array2 + 4;

         int success = 0; //success immitation

         if(success == 0)
            break;
      }

      cur_idx = cur_idx - 1;

      array1 = array1 - size;

      array2 = array2 + 4;

      if(cur_idx < 0)
         break;
   }

   return 0;
}


//-------------------------------

int sub_BECE80(void* a0)
{
   return 0;
}

int sub_BEC808(char* filesystem)
{
   return 0;
}

int sub_BE5814(vfs_node* a0)
{
   return 0;
}

int SceIofilemgrForDriver_6b3ca9f7(uint32_t* a0)
{
   return 0;
}

int SceIofilemgrForDriver_dc2d8bce(uint32_t* a0)
{
   return 0;
}

int sub_BEC578(vfs_mount* a0, vfs_mount* a1)
{
   return 0;
}

int sub_BEC620(vfs_mount* a0)
{
   return 0;
}

int sub_BEC010(vfs_mount* a0)
{
   return 0;
}

//alloc
void* sub_BECE0C()
{
   return 0;
}

int sub_BE62E8(char* mount, void* a1, uint32_t* a2, uint32_t* a3, int a4)
{
   return 0;
}

int proc_find_vfs_node_BE6788(void* unk0, int unk1, vfs_node** vnode, void* unk3, int unk4)
{
   return 0;
}

int sub_BE5F10(vfs_node* a0, void* a1, void* a2, int a3, vfs_node** a4)
{
   return 0;
}

int sub_BEE364(vfs_node* a0)
{
   return 0;
}

int sub_BEE3C8(vfs_node* n0)
{
   return 0;
}

vfs_mount* g_99D9D0;

vfs_mount* proc_get_arg0_for_sceVfsGetNewNode_BEBAC0()
{
   int prev_state1 = SceCpuForDriver_ksceKernelCpuSuspendIntr_d32ace9e((int*)0x99DA44);

   if(g_99D9D0 == 0)
   {
      SceCpuForDriver_ksceKernelCpuResumeIntr_7bb9d5df((int*)0x99DA44, prev_state1);
      return 0;
   }

   vfs_mount* mount_node = g_99D9D0;

   g_99D9D0 = mount_node->unk_78;

   SceCpuForDriver_ksceKernelCpuResumeIntr_7bb9d5df((int*)0x99DA44, prev_state1);

   mount_node->fd_lock_ptr = &mount_node->fd_lock; //C8
   
   SceUID mutex_id = SceThreadmgrForDriver_ksceKernelCreateMutex_fbaa026e("SceVfsFdLock", 0, 0, 0);

   if(mutex_id >= 0)
   {
      mount_node->fd_lock.mutex_SceVfsFdLock = mutex_id; // D0

      SceUID cond_id = SceThreadmgrForDriver_sceKernelCreateCondForDriver_db6cd34a("SceVfsFdCond", 0, mutex_id, 0);

      if(cond_id >= 0)
      {
         mount_node->fd_lock.cond_SceVfsFdCond = cond_id; // 4
         mount_node->fd_lock.unk_8 = 0;
         mount_node->fd_lock.unk_C = 0;

         mount_node->unk_CC = &mount_node->unk_E0;

         return mount_node;
      }
      else
      {
         SceThreadmgrForDriver_sceKernelDeleteMutexForKernel_0a912340(mount_node->fd_lock.mutex_SceVfsFdLock);
         mount_node->fd_lock.mutex_SceVfsFdLock = -1;
      }
   }

   int prev_state2 = SceCpuForDriver_ksceKernelCpuSuspendIntr_d32ace9e((int*)0x99DA44);

   if(g_99D9D0 != 0)
   {
      mount_node->unk_78 = g_99D9D0;
   }

   g_99D9D0 = mount_node;
   
   SceCpuForDriver_ksceKernelCpuResumeIntr_7bb9d5df((int*)0x99DA44, prev_state2);

   return 0;
}

int proc_init_SceVfsMnt_BEBB84(vfs_mount* arg0, vfs_node* arg1, SceUID heapid, vfs_add_data* arg3)
{
   int r0 = SceThreadmgrForDriver_ksceKernelInitializeFastMutex_af8e1266(&arg0->fast_mutex_SceVfsMnt, "SceVfsMnt", 2, 0);

   arg0->pool = heapid; // 44
   
   arg0->add_data = arg3; // 5C

   arg0->unk_60 = 1;

   arg0->unk_54 = 0;
   arg0->unk_58 = 0;

   arg0->unk_64 = 0;
   arg0->unk_68 = 0;
   arg0->unk_6C = 0;
   arg0->unk_70 = 0;
   arg0->unk_74 = 0;
   arg0->unk_78 = 0;
   arg0->blockDev = 0; // 7C

   memset(arg0->unixMount, 0, 0x40); //0x80

   arg0->unk_40 = arg1;

   if(arg1 != 0)
   {
      arg1->unk_78 = arg1->unk_78 | 0x4000;
      arg1->unk_58++;
   }

   arg0->unk_CC->unk_0 = 0;
   arg0->unk_CC->unk_4 = 0;

   arg0->unk_CC->unk_8 = 0x99C034;
   arg0->unk_CC->unk_C = 0x99C01C;

   return 0;
}

//links 2 nodes
void sub_BEC56C(vfs_mount* r0, vfs_mount* r1)
{
   vfs_mount* temp = r0->unk_70;
   if(temp != 0)
      r1->unk_74 = temp;
   r0->unk_70 = r1;
}

//--------

int sub_BEBD20(int r0)
{
   return 0;
}

int sub_BF2B50(int r0, int r1, vfs_node* r2, int r3)
{
   return 0;
}

int sub_BEBD70(vfs_node* input_node)
{
   vfs_node* r10 = input_node;
   
   if(input_node->unk_7C != 0)
   {
      sub_BEBD20(input_node->unk_7C);
   }

   if(input_node->unk_5C != 0)
   {
      if(input_node->node->unk_48 == 0x10)
      {
         sub_BF2B50(input_node->unk_5C, 0, input_node, input_node->unk_90);
      }
   }

   memset((char*)&input_node->ops, 0, 0x98); //set 0x98 bytes from offset 0x40

   int id0 = SceThreadmgrForDriver_sceKernelGetThreadIdForDriver_59d06540();

   if(id0 != r10->unk_4)
      return id0;
   
   r10->unk_8 = 0;

   int id1 = SceThreadmgrForDriver_sceKernelGetThreadIdForDriver_59d06540();

   if(id1 != r10->unk_4)
      return id1;

   if(r10->unk_8 != 0)
   {
      r10->unk_8--;
      return id1;
   }
   
   if(r10->unk_0 == 0)
   {
      int r6 = r10->unk_0;
      int r7 = r10->unk_4;
      
      //DMB.W SY

      while(true)
      {
         if(r7 != r10->unk_4)
            break;

         if(r6 != r10->unk_0)
            break;

         r10->unk_0 = 0;
         r10->unk_4 = -1;

         int r3 = 0; //immitation of STREXD.W success

         if(r3 != 0)
            continue;
         else
            return id1;
      }
   }

   r10->unk_4 = 0xFFFFFFFD;

   return SceThreadmgrForDriver_ksceKernelSetEventFlag_d4780c3e(r10->event_flag_SceVfsVnode, r10->evid_bits);
}

int sub_BED838(int r0)
{
   return 0;
}

//calculates offset
int proc_findNode_BE9504(vfs_mount* r0, vfs_node** r1)
{
   /*
   int r7 = *99D96C;
   int r0 = 99D9D4;
   int r3 = r0[0x8];
   int r6 = r0[0xC];
   int r11 = r6 * r7 + r3;
   return r11;
   */
   
   return 0;
}

vfs_node* sub_BF33A0(ctx_19D4* r0)
{
   return 0;
}

int get_99DA40()
{
   //*(0x99DA40)
   return 0;
}

int* get_99DA40_ptr()
{
   //0x99DA40
   return 0;
}

int get_99C024()
{
   //*(0x99C024);
   return 0;
}

ctx_19D4* get_0x99D9D4_ptr()
{
   //0x99D9D4
   return 0;
}

int* get_dword_BFD130_ptr()
{
   //&dword_BFD130
   return 0;
}

int nullsub_3(vfs_node* r0, int r1)
{
   return 0;
}

//--------

int SceIofilemgrForDriver_sceVfsGetNewNode_d60b5c63(vfs_mount* cur_node, node_ops2* ops, int unused, vfs_node** node)
{
   int var_2C = var_009EA004;

   vfs_node* result = 0;

   SceUID node_pool = cur_node->pool;
   if(node_pool == 0)
      node_pool =  get_SceIoVfsHeap_id();

   int value;
   int cond;

   vfs_node* found_node;

   //loc_BED8BA:
   while(true)
   {
      value = get_99DA40();
      cond = get_99DA40();

      if(get_99DA40() < get_99C024())
      {
         //loc_BED900:

         value++;
      
         int atomic_xor_res = SceCpuForDriver_atomic_set_xor_cda96e81(get_99DA40_ptr(), cond, value);
      
         if(atomic_xor_res != cond)
         {
            continue;
         }
         else
         {
            result = sub_BF33A0(get_0x99D9D4_ptr());
         }
      }

      found_node = result;
      if(found_node == 0)
      {
         int r0 = proc_findNode_BE9504(cur_node, &result); //further finds a node
         if(r0 < 0)
         {
            int r11 = sub_BED838(get_99C024());
            if(r11 == 0)
            {
               continue;
            }
            else
            {
               SceDebugForDriver_02b04343(0xF, get_dword_BFD130_ptr(), "::0x10f::001::%d\n", get_99DA40());

               if(var_2C == var_009EA004)
                  return r11;
               else
                  return STACK_CHECK_FAIL;
            }
         }
         else
         {
            //loc_BED9AA:
            sub_BEBD70(result);
            found_node = result;
         }
      }

      //loc_BED930:
      if(found_node->unk_74 != 0)
      {
         //loc_BED99C:

         nullsub_3(found_node, 1);
         
         break;
      }
      else
      {
         break;
      }
   }

   //loc_BED936:
   
   memset((char*)&found_node->ops, 0, 0x98); //set to 0 begginning from offset 0x40

   found_node->unk_74 = 0x8000;

   result->unk_D0 = cur_node->devMajor.w.unk_4E;
   result->ops = ops;
   
   result->node = cur_node;
   result->unk_58++;
   result->pool_uid = node_pool;
   
   SceIofilemgrForDriver_6b3ca9f7(&cur_node->fast_mutex_SceVfsMnt);

   result->unk_54 = 0;

   if(cur_node->unk_54 != 0)
      result->unk_54 = cur_node->unk_54;

   cur_node->unk_54 = result;
   
   cur_node->unk_58++; //counter
   
   SceIofilemgrForDriver_dc2d8bce(&cur_node->fast_mutex_SceVfsMnt);
   
   *node = result;
   
   if(var_2C == var_009EA004)
      return 0;
   else
      return STACK_CHECK_FAIL;
}

int SceIofilemgrForDriver_21d57633(vfs_node* a0)
{
   return 0;
}

//searches some tree
int sub_BE61C4(vfs_node_70* a0)
{
   return 0;
}

int sub_BE5A38(vfs_node_70* a0, int a1)
{
   return 0;
}

int sub_BEE2C4()
{
   return 0;
}

int sub_BEE2D4()
{
   return 0;
}

int sub_BEDEB0(uint32_t* a0, int a1, vfs_node* a2, int a3)
{
   // proc_find_vfs_node_info_node_BEDA18

   return 0;
}

int SceIofilemgrForDriver_sceVfsNodeWaitEventFlag_aa45010b(vfs_node* a0)
{
   return 0;
}

int sub_BE59BC(vfs_node* a0, void* a1)
{
   return 0;
}

int sub_BEDF5C(uint32_t* a0, int a1)
{

   //proc_find_vfs_node_info_node_BEDA18

   return 0;
}

int sub_BE5B30(vfs_node* a0, vfs_node* a1, void* a2, int a3, int a4)
{
   a0->node->add_data->funcs1->func13(0); // call func 13   

   return 0;
}

int sub_BEBC1C()
{
   return 0;
}
    
int sub_BEC51C(vfs_mount* a0)
{
   return 0;
}
    
int sub_BEBC2C()
{
   return 0;
}

int sub_BF18CC(vfs_mount* a0, uint32_t* a1)
{
   return 0;
}

int sub_BEC530(vfs_mount* a0)
{
   return 0;
}

int SceIofilemgrForDriver_sceVfsNodeSetEventFlag_6048f245(vfs_node* a0)
{
   return 0;
}

int vfs_func3_BF1AF0(vfs_mount *cur_node, int unk1, vfs_node *node)
{
   node_ops1* r3 = cur_node->add_data->funcs1; //5C then 0
   r3->func3(0);

   return 0;
}

vfs_add_data* proc_findVfsNodeByFilesystem_BEC7C0(char* filesystem)
{
   return 0;
}

//==========================

int loc_BE6C96(char* filesystem, int errorCode, void* unk3, void* var_D8, int cookie)
{
   sub_BECE80(unk3);
    
   sub_BECE80(var_D8);
    
   if(errorCode == 0)
   {
      if(cookie == var_009EA004)
         return 0;
      else
         return STACK_CHECK_FAIL; //SceIofilemgr.SceSysclibForDriver._imp_sceKernelStackCheckFail_b997493d
   }
   else
   {
      sub_BEC808(filesystem);
   
      if(cookie == var_009EA004)
         return errorCode;
      else
         return STACK_CHECK_FAIL; //SceIofilemgr.SceSysclibForDriver._imp_sceKernelStackCheckFail_b997493d
   }
}

int loc_BE7252(vfs_node* n0, char* filesystem, int errorCode, vfs_node* unk2, void* unk3, void* var_D8, int cookie)
{
   sub_BE5814(n0);
   
   if(unk2 == 0)
      return loc_BE6C96(filesystem, errorCode, unk3, var_D8, cookie);
    
   sub_BE5814(unk2);
   
   return loc_BE6C96(filesystem, errorCode, unk3, var_D8, cookie);
}

int loc_BE76C8(vfs_node* n0, vfs_mount* r7, char* filesystem, int errorCode, vfs_node* unk2, void* unk3, void* var_D8, int cookie)
{
   SceIofilemgrForDriver_6b3ca9f7(&n0->node->fast_mutex_SceVfsMnt); //4C mutex lock print

   n0->node->unk_60--; //counter
   
   sub_BEC578(n0->node, r7);
   
   SceIofilemgrForDriver_dc2d8bce(&n0->node->fast_mutex_SceVfsMnt); //4C mutex  unlock print

   sub_BEC620(r7);
   
   sub_BEC010(r7);
   
   return loc_BE7252(n0, filesystem, errorCode, unk2, unk3, var_D8, cookie);
}

//==========================

int loc_BE6AA2_default_case(char* filesystem, int cookie)
{
   sub_BEC808(filesystem);
   
   if(cookie == var_009EA004)
      return 0x80010016;
   else
      return STACK_CHECK_FAIL; //SceIofilemgr.SceSysclibForDriver._imp_sceKernelStackCheckFail_b997493d
}

//==========================

//TODO:
//3 - fix function signatures in ida after clarification
//4 - fix locals, especially 'node' which is located on stack - arrange fields properly

//----------
//also procedure BEC56C is used to link two items of same type together

//this means that bnode and n0->node are of same type which is different from vfs_node

//----------

//explanation to type derivation 2
//based on BEC56C code we can derive that there should be fields unk_70 and unk_74 in vfs_node_base which are also of type vfs_node_base
//based on calls sub_BE5A38(n0->unk_70, 1); and sub_BE5A38(vnode->unk_70, 0);
//we can derive that n0->unk_70 has same type as vnode->unk_70 and most likely n0 is same type as vnode

//we can derive that unk2 and n0 are of same type vfs_root
//int result1 = proc_find_vfs_node_BE6788(unk0, unk1 - 1, &unk2, unk3, 0x3000);
//int result2 = proc_find_vfs_node_BE6788(unk0, unk1, &n0, unk3, 0x3000);

//there is also one important assignment:
//vnode->unk_4C = bnode; 
//vnode->unk_50 = unk2;

//it could be usefull to revisit and list global variable
//0x01A8 - array of 96 elements of vfs_node_info 
//used by proc_find_vfs_node_info_node_BEDA18 <- proc_find_vfs_node_BEDF04 <- proc_find_vfs_node_BE584C <- proc_find_vfs_node_BE6788 - used by mount

//NOT EXACTLY SURE IF vfs_node* prev_node; in vfs_node should be vfs_node or vfs_node_base
//currently derrivation is based on the fact that unk2 type is same as n0 type (see above)

//--------------

//TODO:
//check:
//sub_BE4DE4 - SceIofileFlockWaitQueue event flag, SceIofileFlockLock mutex
//proc_SceIoSchedulerDispatcher_BF651C - SceIoSchedulerDispatcher mutex and flag
//sceVfsGetNewNode_BEBAC0 - SceVfsFdLock, SceVfsFdCond
//sub_BED694 - SceVfsFdLock, SceVfsFdCond
//proc_SceIoScheduler_BF8728 - SceIoScheduler mutex and cond and flag

//reverse:
//sub_BEDEB0
//sub_BEDF5C

//sub_BEC808 - ?
//sub_BEC578 - ?

//check:
//vfs functions - that they are passing vfs_node and not vfs_mount

//--------------

//loc_BE6C50 - jumptable 00BE6A86 case 1
int mount_switch_case_1(vfs_mount_point_info_base *mountInfo, vfs_add_data* addData, int cookie)
{
   uint32_t majorIndex = (0x000000FF & mountInfo->devMajor);
   if(majorIndex != 0x03)
   return loc_BE6AA2_default_case(mountInfo->filesystem, cookie);

   void* unk3 = sub_BECE0C(); //alloc memory
   
   if(unk3 == 0)
   {
      sub_BEC808(mountInfo->filesystem);
   
      if(cookie == var_009EA004)
         return 0x8001000C;
      else
         return STACK_CHECK_FAIL; //SceIofilemgr.SceSysclibForDriver._imp_sceKernelStackCheckFail_b997493d
   }

   void* var_D8 = sub_BECE0C(); //alloc memory
    
   if(var_D8 == 0)
   {
      sub_BECE80(unk3);
   
      sub_BEC808(mountInfo->filesystem);
   
      if(cookie == var_009EA004)
         return 0x8001000C;
      else
         return STACK_CHECK_FAIL; //SceIofilemgr.SceSysclibForDriver._imp_sceKernelStackCheckFail_b997493d
   }

   uint32_t* unk0;
   uint32_t unk1;
   uint32_t str1;
    
   unk0 = &str1;

   int result0 = sub_BE62E8(mountInfo->unk_4, unk3, unk0, &unk1, 0x01);

   if(result0 < 0)
      return loc_BE6C96(mountInfo->filesystem, result0, unk3, var_D8, cookie);

   if(unk1 == 0)
      return loc_BE6C96(mountInfo->filesystem, result0, unk3, var_D8, cookie);

//loc_BE71B0:

    vfs_node* unk2;
    
    void* var_D4 = unk0 + ((unk1 - 1) << 3);

    int result1 = proc_find_vfs_node_BE6788(unk0, unk1 - 1, &unk2, unk3, 0x3000);

    vfs_node* n0;

    if(result1 < 0)
    {
        if(result1 != 0x80010002)
            return loc_BE6C96(mountInfo->filesystem, result1, unk3, var_D8, cookie);

        int result2 = proc_find_vfs_node_BE6788(unk0, unk1, &n0, unk3, 0x3000);
        if(result2 < 0)
            return loc_BE6C96(mountInfo->filesystem, result2, unk3, var_D8, cookie);
            
        unk2 = 0;
    }
    else
    {   
        int result2 = sub_BE5F10(unk2, var_D4, unk3, 0x3000, &n0);
        if(result2 < 0)
        {
           if(unk2 == 0)
               return loc_BE6C96(mountInfo->filesystem, result2, unk3, var_D8, cookie);
    
           sub_BE5814(unk2);
   
           return loc_BE6C96(mountInfo->filesystem, result2, unk3, var_D8, cookie);
        }
    }

//loc_BE71F6:    
    
   if(n0->node->devMajor.b.unk_4C == 3) 
      return loc_BE7252(n0, mountInfo->filesystem, 0x80010010, unk2, unk3, var_D8, cookie);
    
   if((mountInfo->devMinor & 0x1000) == 0)
   {
      //loc_BE7446:
      int result3 = sub_BEE364(n0);
      
      if(result3 < 0)
      {
         if(result3 != 0x800F090D && result3 != 0x8001000D)
            return loc_BE7252(n0, mountInfo->filesystem, result3, unk2, unk3, var_D8, cookie);
         else
            return loc_BE7252(n0, mountInfo->filesystem, 0x8001001E, unk2, unk3, var_D8, cookie);
      }

      if((n0->node->devMinor << 0x13) < 0)
         return loc_BE7252(n0, mountInfo->filesystem, 0x8001001E, unk2, unk3, var_D8, cookie);
   }
   else
   {
      int result3 = sub_BEE3C8(n0);
      if(result3 < 0)
         return loc_BE7252(n0, mountInfo->filesystem, result3, unk2, unk3, var_D8, cookie);
   }
    
   //loc_BE7216:
    
   uint32_t var_28;

   void* r2 = (&var_28) + ((unk1 - 1) << 3);
    
   uint32_t node; // = r2[-0x84];   // D0 - 84 = 4C - can be part of vfs_node ?
   uint32_t var_B8; // = r2[-0x80]; // D0 - 80 = 50 - can be part of vfs_node ?

   void* var_B4 = unk3;
    
   int result4 = sub_BE62E8(mountInfo->unixMount, var_D8, unk0, &unk1, 0x01);
   if(result4 < 0)
      return loc_BE7252(n0, mountInfo->filesystem, result4, unk2, unk3, var_D8, cookie);
        
   int r3 = unk1;
   if(r3 == 0)
      return loc_BE7252(n0, mountInfo->filesystem, result4, unk2, unk3, var_D8, cookie);
        
//loc_BE74F4:        
   vfs_mount* bnode = proc_get_arg0_for_sceVfsGetNewNode_BEBAC0();
   if(bnode == 0)
      return loc_BE7252(n0, mountInfo->filesystem, 0x8001000C, unk2, unk3, var_D8, cookie);    

   proc_init_SceVfsMnt_BEBB84(bnode, n0, get_SceIoVfsHeap_id(), addData); // important initialization function
  
   bnode->blockDev = mountInfo->blockDev1;
    
   strncpy(bnode->unixMount, (char*)var_D8, 0x40); //it should be string since it is terminated with 0 explicitly

   bnode->unixMount[0x3F] = (char)0; //terminate with 0

   bnode->unk_C4 = mountInfo->unk_14;

   bnode->devMajor.dw.unk_4C = mountInfo->devMajor; //0x4C 
   bnode->devMinor = (mountInfo->devMinor & 0xFFFFF); //0x50 - take first 0x14 bits

   bnode->unk_48 = 0x101; //0x48    
    
   SceIofilemgrForDriver_6b3ca9f7(&n0->node->fast_mutex_SceVfsMnt); //0x4C mutex lock print
   
   n0->node->unk_60++; //counter
    
   sub_BEC56C(n0->node, bnode); //link
    
   SceIofilemgrForDriver_dc2d8bce(&n0->node->fast_mutex_SceVfsMnt); //0x4C mutex unlock print
    
   bnode->devMajor.w.unk_4C = bnode->devMajor.w.unk_4C | (n0->node->devMajor.w.unk_4E << 16);
    
   vfs_add_data* r6 = addData;

   node_ops2* ops2 = mountInfo->unk_1C == 0 ? addData->funcs2 : mountInfo->unk_1C;

   vfs_node* vnode;

//loc_BE7576:    
   int result5 = SceIofilemgrForDriver_sceVfsGetNewNode_d60b5c63(bnode, ops2, 0, &vnode);
   if(result5 < 0)
      return loc_BE76C8(n0, bnode, mountInfo->filesystem, result5, unk2, unk3, var_D8, cookie);
    
   if((bnode->devMinor << 0x0E) < 0) //50
   {
      if((bnode->devMajor.w.unk_4E & 0xF00) != 0x200)
      {
         bnode->devMinor = bnode->devMinor & (~0x20000); //50
      }
   }
    
//loc_BE75A4:    
    
   if((n0->node->devMinor << 0x0E) < 0) //4C 50
   {
      if((n0->node->devMajor.w.unk_4E & 0xF00) == 0x200)
      {
         //this code proves that 'bnode' and 'node' have same type

         bnode->unk_CC->unk_8 = n0->node->unk_CC->unk_8;
         bnode->unk_CC->unk_C = n0->node->unk_CC->unk_C;
         bnode->devMinor = bnode->devMinor | 0x20000; //50
      }
   }
    
//loc_BE75D4:   
    
   //important assignment of nodes
   vnode->node = bnode; //4C
   vnode->prev_node = unk2; //50
    
   vnode->unk_78 = 0x1002;
 
   if(n0->unk_70 != 0)
   {
      int result6 = sub_BE61C4(n0->unk_70);
      if(result6 < 0)
      {
         SceIofilemgrForDriver_21d57633(vnode);
         return loc_BE76C8(n0, bnode, mountInfo->filesystem, result6, unk2, unk3, var_D8, cookie);
      }
            
      sub_BE5A38(n0->unk_70, 1);
   }
 
//loc_BE75FA:    

   sub_BEE2C4(); //lock SceVfsRfsLock
    
   if(n0->unk_70 != 0)
   {
      int result7 = sub_BE61C4(n0->unk_70);
      if(result7 < 0)
      {
         sub_BEE2D4(); //unlock SceVfsRfsLock
    
         SceIofilemgrForDriver_21d57633(vnode);
         return loc_BE76C8(n0, bnode, mountInfo->filesystem, result7, unk2, unk3, var_D8, cookie);
      }
   }
   
//loc_BE760E:

   int result8 = sub_BEDEB0(unk0, unk1, vnode, 0xD8);
    
   sub_BEE2D4(); //unlock SceVfsRfsLock
    
   if(result8 < 0)
   {
      SceIofilemgrForDriver_21d57633(vnode);
      return loc_BE76C8(n0, bnode, mountInfo->filesystem, result8, unk2, unk3, var_D8, cookie);
   }

   SceIofilemgrForDriver_sceVfsNodeWaitEventFlag_aa45010b(vnode);
     
   if(unk2 == 0)
   {
      //loc_BE79F4:
      
      int result9 = sub_BE59BC(vnode, var_D4);
      if(result9 < 0)
      {
         sub_BEE2C4(); //lock SceVfsRfsLock
    
         sub_BEDF5C(unk0, unk1);

         sub_BEE2D4(); //unlock SceVfsRfsLock
    
         SceIofilemgrForDriver_21d57633(vnode);
         return loc_BE76C8(n0, bnode, mountInfo->filesystem, result9, unk2, unk3, var_D8, cookie);
      }
   }
   else
   {
      int result9 = sub_BE5B30(unk2, vnode, var_D4, 1, 1);
      if(result9 < 0)
      {
         sub_BEE2C4(); //lock SceVfsRfsLock
    
         sub_BEDF5C(unk0, unk1);

         sub_BEE2D4(); //unlock SceVfsRfsLock
    
         SceIofilemgrForDriver_21d57633(vnode);
         return loc_BE76C8(n0, bnode, mountInfo->filesystem, result9, unk2, unk3, var_D8, cookie);
      }
   }
    
//loc_BE7646:    

    sub_BEBC1C(); //lock SceVfsMntlistLock
    
    sub_BEC51C(bnode);
    
    sub_BEBC2C(); //unlock SceVfsMntlistLock
       
    int result10 = sub_BF18CC(bnode, &node);
    if(result10 != 0)
    {
       sub_BEBC1C(); //lock SceVfsMntlistLock
    
       sub_BEC530(bnode);
    
       sub_BEBC2C(); //unlock SceVfsMntlistLock
     
       sub_BE5A38(vnode->unk_70, 0);
    
       sub_BEE2C4(); //lock SceVfsRfsLock
    
       sub_BEDF5C(unk0, unk1);

       sub_BEE2D4(); //unlock SceVfsRfsLock
    
       SceIofilemgrForDriver_21d57633(vnode);
       return loc_BE76C8(n0, bnode, mountInfo->filesystem, result10, unk2, unk3, var_D8, cookie);
    }
    
    int result11 = vfs_func3_BF1AF0(bnode, 0, vnode);
    if(result11 < 0)
    {
       sub_BEBC1C(); //lock SceVfsMntlistLock
    
       sub_BEC530(bnode);
    
       sub_BEBC2C(); //unlock SceVfsMntlistLock
     
       sub_BE5A38(vnode->unk_70, 0);
    
       sub_BEE2C4(); //lock SceVfsRfsLock
    
       sub_BEDF5C(unk0, unk1);

       sub_BEE2D4(); //unlock SceVfsRfsLock
    
       SceIofilemgrForDriver_21d57633(vnode);
       return loc_BE76C8(n0, bnode, mountInfo->filesystem, result11, unk2, unk3, var_D8, cookie);
    }
    
    SceIofilemgrForDriver_6b3ca9f7(&bnode->fast_mutex_SceVfsMnt); //print lock
    
    bnode->unk_48 = bnode->unk_48 & (~0x100); //0x48
    bnode->unk_60--; //counter - one of fields that can identify type by logic
    
    SceIofilemgrForDriver_dc2d8bce(&bnode->fast_mutex_SceVfsMnt); //print unlock
    
    vnode->unk_58 = vnode->unk_58 -1; //counter - one of fields that can identify type by logic
    
    SceIofilemgrForDriver_sceVfsNodeSetEventFlag_6048f245(vnode);
   
    return loc_BE7252(n0, mountInfo->filesystem, result11, unk2, unk3, var_D8, cookie);
}

//==========================

//loc_BE6A96 - jumptable 00BE6A86 case 2
int mount_switch_case_2(vfs_mount_point_info_base *mountInfo, int cookie)
{
    uint32_t majorIndex = (0x000000FF & mountInfo->devMajor) - 1;
    
    if(majorIndex > 0x01)
       return loc_BE6AA2_default_case(mountInfo->filesystem, cookie);

    return -1; //not implemented
}

//==========================

//loc_BE6CAA - jumptable 00BE6A86 case 3
int mount_switch_case_3(vfs_mount_point_info_base *mountInfo, vfs_add_data* addData, int cookie)
{
    int r3 = addData->unk_10;

    if(r3 != 0x10)
        return loc_BE6AA2_default_case(mountInfo->filesystem, cookie);
    
    return -1; //not implemented
}

//==========================

//loc_BE6D40 - jumptable 00BE6A86 case 4
int mount_switch_case_4(vfs_mount_point_info_base *mountInfo, int cookie)
{
    if(mountInfo->unk_4 == 0x00)
        return loc_BE6AA2_default_case(mountInfo->filesystem, cookie);

   if(cookie == var_009EA004)
      return 0;
   else
      return STACK_CHECK_FAIL; //SceIofilemgr.SceSysclibForDriver._imp_sceKernelStackCheckFail_b997493d
}

//==========================

//loc_BE6D4C - case 5
int mount_switch_case_5(vfs_mount_point_info_base *mountInfo, int cookie)
{
    uint32_t majorIndex = (0x000000FF & mountInfo->devMajor) - 1;

    if(majorIndex > 0x01)
        return loc_BE6AA2_default_case(mountInfo->filesystem, cookie);

    if(mountInfo->unk_4 == 0x00)
        return loc_BE6AA2_default_case(mountInfo->filesystem, cookie);
    
    return -1; //not implemented
}

//==========================

//loc_BE6AC2 - case 6
int mount_switch_case_6(vfs_mount_point_info_base *mountInfo, int cookie)
{
    uint32_t majorIndex = (0x000000FF & mountInfo->devMajor);
    if(majorIndex != 0x04)
        return loc_BE6AA2_default_case(mountInfo->filesystem, cookie);
    
    return -1; //not implemented
}

//==========================

int sceVfsMount(vfs_mount_point_info_base *mountInfo)
{
    int cookie = var_009EA004;

    if(mountInfo == 0x00) //compare input pointer to 0
    {
      if(cookie == var_009EA004)
         return 0x80010016;
      else
         return STACK_CHECK_FAIL; //SceIofilemgr.SceSysclibForDriver._imp_sceKernelStackCheckFail_b997493d
    }
    
    if(mountInfo->unixMount == 0x00) //compare unixMount pointer to 0
    {
      if(cookie == var_009EA004)
         return 0x80010016;
      else
         return STACK_CHECK_FAIL; //SceIofilemgr.SceSysclibForDriver._imp_sceKernelStackCheckFail_b997493d
    }
    
    vfs_add_data* addData = proc_findVfsNodeByFilesystem_BEC7C0(mountInfo->filesystem);
    
    if(addData == 0x00) //compare node pointer to 0
    {
      if(cookie == var_009EA004)
         return 0x80010016;
      else
         return STACK_CHECK_FAIL; //SceIofilemgr.SceSysclibForDriver._imp_sceKernelStackCheckFail_b997493d
    }
    
    int minorIndex = (0x000000FF & mountInfo->devMinor) - 1;
    
    switch(minorIndex)
    {
    case 0:
        return mount_switch_case_1(mountInfo, addData, cookie);
    case 1:
        return mount_switch_case_2(mountInfo, cookie);
    case 2:
        return mount_switch_case_3(mountInfo, addData, cookie);
    case 3:
        return mount_switch_case_4(mountInfo, cookie);
    case 4:
        return mount_switch_case_5(mountInfo, cookie);
    case 5:
        return mount_switch_case_6(mountInfo, cookie);
    default:
        return loc_BE6AA2_default_case(mountInfo->filesystem, cookie); //default case
    }
}

int proc_lock_SceVfsNcacheLock_mutex_BEBC58()
{
   return 0;
}

int proc_unlock_SceVfsNcacheLock_mutex_BEBC68()
{
   return 0;
}

int sub_BE5F94(vfs_node *node, char *dest, int length, int* result_length)
{
   if(length == 0)
      return 0x80010016;

   SceIofilemgrForDriver_sceVfsNodeWaitEventFlag_aa45010b(node);
   
   proc_lock_SceVfsNcacheLock_mutex_BEBC58();
      
   vfs_node_70* ctx_70 = node->unk_70;

   if(ctx_70 == 0)
   {
      proc_unlock_SceVfsNcacheLock_mutex_BEBC68();
      SceIofilemgrForDriver_sceVfsNodeSetEventFlag_6048f245(node);
      return 0x80010016;
   }
   
   if(length <= ctx_70->str_len_18)
   {
      strncpy(dest, ctx_70->str_1C, length);
      dest[length - 1] = 0; //terminate with zero
      *result_length = length - 1;
   }
   else
   {
      strncpy(dest, ctx_70->str_1C, ctx_70->str_len_18);
      dest[ctx_70->str_len_18] = 0; //terminate with zero
      *result_length = ctx_70->str_len_18;
   }

   proc_unlock_SceVfsNcacheLock_mutex_BEBC68();
   SceIofilemgrForDriver_sceVfsNodeSetEventFlag_6048f245(node);
   return 0;
}

//get some string from node field 70
int SceIofilemgrForDriver_unk_aa253b68(vfs_node *node, char *dest, int length, int* result_length)
{
   return sub_BE5F94(node, dest, length, result_length);
}

int loc_BF0906()
{
   /*
   LDR             R2, [SP,#0x40+var_24]
   LDR.W           R3, [R8]
   CMP             R2, R3
   BNE             loc_BF0980
   */

   //return or stack fail

   return 0;
}

int loc_BF08FC()
{
   /*
   LDR.W           R4, [R9]
   MOV             R0, R6
   */

   if(r4 == 0)
      return loc_BF0906();

   /*
   LDR.W           LR, [R7,#8]
   MOVS            R0, #0x27
   LDR.W           R12, [R7,#0xC]
   MOV             R2, R10
   LDR             R5, [R7]
   MOVS            R1, #6
   LDR             R7, [R7,#4]
   MOV             R3, R6
   STMEA.W         SP, {R5,R7,R12,LR}
   BLX             R4
   MOV             R0, R6
   */

   return loc_BF0906();
}

int SceIofilemgrForDriver_vfs_node_func15_50a63acf(vfs_node *node, vfs_node_func15_arg1* unk0, vfs_node_func15_arg2* unk1)
{
   /*
   var_38= -0x38
   var_34= -0x34
   var_30= -0x30           ; 0x10 ctx
   var_2C= -0x2C           ; 0x14
   var_28= -0x28           ; 0x18
   var_24= -0x24           ; cookie
   */

   /*
   MOVW            R8, #0xA004
   MOVW            R9, #0xC050
   MOVT.W          R8, #0x9E ; 9EA004
   MOVT.W          R9, #0x99
   SUB             SP, SP, #0x20
   LDR.W           R3, [R8]
   MOV             R10, R0 ; vfs_node*
   LDR.W           R4, [R9]
   MOV             R6, R1  ; arg1
   MOV             R7, R2  ; arg2
   LDR             R5, [R0,#0x40] ; R0 = vfs_node*
   STR             R3, [SP,#0x40+var_24]
   */

   if(r4 != 0)
   {
      /*
      LDR             R3, [R1,#8]
      MOVS            R0, #0x26
      MOVS            R1, #2
      MOV             R2, R10
      */

      if(r3 == 0)
      {
         /*
         LDR             R3, [R6]
         BLX             R4
         */
      }
      else
      {
         //BLX             R4
      }
   }

   if(r7 == 0)
   {
      /*
      LDR.W           R4, [R9]
      MOVS            R0, 0x80010016 ; 00BF094A : possible external reference: 80010016
      */

      if(r4 == 0)
         return loc_BF0906();

      /*
      MOVS            R3, #0x16 ; 00BF0954 : possible external reference: 80010016
      MOVS            R0, #0x27
      STRD.W          R7, R7, [SP]
      MOV             R2, R10
      STR             R7, [SP,#0x40+var_38]
      MOVT.W          R3, #0x8001 ; 00BF0960 : possible external reference: 80010016
      STR             R7, [SP,#0x40+var_34]
      MOVS            R1, #6
      BLX             R4
      MOVS            R0, 0x80010016 ; 00BF096A : possible external reference: 80010016
      */

      return loc_BF0906();
   }
   else
   {
      //LDR             R3, [R5,#0x38] ; index 14
      
      if(r3 == 0)
      {
         //MOVS            R6, 0x80010030
         return loc_BF08FC();
      }

      /*
      STRD.W          R6, R7, [SP,#0x14] ; var_2C = arg1, var_28 = arg2
      ADD             R0, SP, #0x40+var_30 ; ctx
      STR.W           R10, [SP,#0x40+var_30] ; vfs_node*
      BLX             R3      ; indirect call
      MOV             R6, R0
      LDR.W           R0, [R10,#0x4C]
      BL              sub_BECFB4
      */

      if(r6 != 0)
         return loc_BF08FC();

      /*
      LDRD.W          R4, R5, [R10,#0x80]
      LDRD.W          R2, R3, [R7,#8]
      */

      if((r3 == r5) && (r2 == r4))
         return loc_BF08FC();

      //LDR.W           R3, [R10,#0x5C]
               
      if(r3 == 0)
         return loc_BF08FC();

      /*
      LDR.W           R3, [R10,#0x4C]
      LDR             R3, [R3,#0x50]
      LSLS            R3, R3, #0xD
      */

      if(bpl)
         return loc_BF08FC();

      //STRD.W          R4, R5, [R7,#8]

      return loc_BF08FC();
   }
}