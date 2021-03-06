#include "SceAppMgr.h"

#include "Constants.h"

#include "SceThreadmgr.h"
#include "SceSysmem.h"
#include "SceSysmemGlobalVariables.h"
#include "SceIofilemgr.h"
#include "SceSblACMgr.h"
#include "SceSblSsMgr.h"
#include "SceProcessmgr.h"
#include "ScePfsMgr.h"

#include <string>
#include <cstdint>

//==============================

int loc_23D5220()
{
   /*
   MOV             R0, R5
   BL              sub_23EFA40
   MOVS            R0, #0
   BLX             SceAppMgr.SceKernelSuspendForDriver._imp_2bb92967
   LDR             R2, [SP,#0x88+var_2C]
   MOV             R0, R4
   LDR.W           R3, [R10]
   CMP             R2, R3
   */

   //return r0 or stack fail

   return 0;
}

int loc_23D52BC()
{
   //MOVS            R4, 0x80800034
   return loc_23D5220();
}

int loc_23D518E()
{
   //  more code

   return 0;
}

int loc_23D50A0()
{
   /*
   ADD.W           R8, SP, #0x88+var_78
   ADD             R7, SP, #0x88+var_70
   ADD.W           R9, SP, #0x88+var_68
   MOVW            R1, #(aCategory_0 AND 0xFFFF) ; "CATEGORY"
   MOV             R2, R8
   MOV             R3, R7
   STR.W           R9, [SP,#0x88+arg_0]
   MOVT.W          R1, #high16(aCategory_0) ; "CATEGORY"
   MOV             R0, R5
   BL              sub_23EF8DC
   SUBS            R4, R0, #0
   */

   //if(r4 < 0)
   //{
   //   return loc_23D5220();
   //}
   //else
   //{
      /*
      LDR             R3, [SP,#0x88+var_70]
      */

      //if(r3 <= 2)
      //{
      //   return loc_23D52BC();
      //}
      //else
      //{
         /*
         LDR             R4, [SP,#0x88+var_68]
         */

         //if(r4 != 4)
         //{
         //   return loc_23D52BC();
         //}
         //else
         //{
            /*
            LDR             R3, [SP,#0x88+var_78]
            MOV             R1, dword_24047E0 ; 024047E0 data reference 00007067
            MOV             R2, R4
            MOV             R0, R3
            STR             R3, [SP,#0x88+var_7C]
            BLX             SceAppMgr.SceSysclibForDriver._imp_strncmp_12cee649
            */

            //if(r0 == 0)
            //{
               /*
               LDR.W           R2, [R6,#0x160]
               LSLS            R3, R2, #0x1F
               */

               //if(!true) //NOT BPL
               //{
                  /*
                  MOVW            R1, #(dword_24047E4 AND 0xFFFF) ; 024047E4 data reference 00006467
                  MOV             R2, R4
                  MOVT.W          R1, #high16(dword_24047E4) ; 024047E4 data reference 00006467
                  ADD.W           R0, R6, #0x298
                  BLX             SceAppMgr.SceSysclibForDriver._imp_6d286146
                  */
               //}
            //}
            //else
            //{
               /*
               MOVW            R1, #(aGpc AND 0xFFFF) ; "gpc"
               LDR             R0, [SP,#0x88+var_7C]
               MOVT.W          R1, #high16(aGpc) ; "gpc"
               MOV             R2, R4
               BLX             SceAppMgr.SceSysclibForDriver._imp_strncmp_12cee649
               */

               //if(r0 != 0)
               //{
                  /*
                  MOVW            R1, #(aGpd AND 0xFFFF)
                  LDR             R0, [SP,#0x88+var_7C]
                  MOVT.W          R1, #high16(aGpd) ; "gpd"
                  MOV             R2, R4
                  BLX             SceAppMgr.SceSysclibForDriver._imp_strncmp_12cee649
                  */

                  //if(r0 != 0)
                  //{
                     /*
                     LDR             R1, [SP,#0x88+var_7C]
                     MOV             R2, R4
                     ADD.W           R0, R6, #0x298
                     BLX             SceAppMgr.SceSysclibForDriver._imp_6d286146
                     MOVS            R3, #0
                     STRB.W          R3, [R6,#0x29B]
                     */
                  //}
                  //else
                  //{
                     /*
                     LDR.W           R3, [R6,#0x160]
                     LSLS            R0, R3, #0x1F
                     */

                     //if(!true) //NOT BPL
                     //{
                        /*
                        MOV             R3, aGdd ; "gdd"
                        LDR             R0, [R3]
                        STR.W           R0, [R6,#0x298]
                        */
                     //}
                  //}
               //}
               //else
               //{
                  /*
                  LDR.W           R3, [R6,#0x160]
                  LSLS            R4, R3, #0x1F
                  */

                  //if(true) //BMI
                  //{
                     /*
                     MOV             R3, aGdc ; "gdc"
                     LDR             R0, [R3]
                     STR.W           R0, [R6,#0x298]
                     */
                  //}
               //}
            //}

            //loc_23D5110:

            /*
            MOVW            R1, #(aTitle_id AND 0xFFFF) ; "TITLE_ID"
            STR.W           R9, [SP,#0x88+arg_0]
            MOVT.W          R1, #high16(aTitle_id) ; "TITLE_ID"
            MOV             R0, R5
            MOV             R2, R8
            MOV             R3, R7
            BL              sub_23EF8DC
            SUBS            R4, R0, #0
            */

            //if(r4 < 0)
            //{
               //return loc_23D5220();
            //}
            //else
            //{
               /*
               LDR             R3, [SP,#0x88+var_70]
               */

               //if(r3 <= 9)
               //{
                  //return  loc_23D52BC();
               //}
               //else
               //{
                  /*
                  LDR             R3, [SP,#0x88+var_68]
                  */
                  //if(r3 != 0x0C)
                  //{
                     //return loc_23D52BC();
                  //}
                  //else
                  //{
                     /*
                     ADD.W           R4, R6, #0x378
                     LDR             R1, [SP,#0x88+var_78]
                     MOVS            R2, #0xA
                     MOV             R0, R4
                     BLX             SceAppMgr.SceSysclibForDriver._imp_6d286146
                     MOVS            R3, #0
                     LDR.W           LR, [R6,#0x37C]
                     STRB.W          R3, [R6,#0x381]
                     LDR.W           R1, [R6,#0x384]
                     LDR.W           R0, [R6,#0x380]
                     LDR.W           R12, [R6,#0x378]
                     STR.W           LR, [R6,#0x38C]
                     STR.W           R0, [R6,#0x390]
                     STR.W           R1, [R6,#0x394]
                     LDR.W           LR, [R6,#0x378]
                     LDR.W           R0, [R6,#0x37C]
                     LDR.W           R1, [R6,#0x380]
                     LDR.W           R2, [R6,#0x384]
                     STR.W           R12, [R6,#0x388]
                     STR.W           LR, [R6,#0x498]
                     STR.W           R0, [R6,#0x49C]
                     STR.W           R1, [R6,#0x4A0]
                     STR.W           R2, [R6,#0x4A4]
                     */

                     //return loc_23D518E();
                  //}
               //}
            //}
         //}
      //}
   //}

   return 0;
}

int proc_parse_param_sfo_23D5028(SceUID pid, char *param_sfo_path, int ignore_overlay, phys_ctx_t *gdat_ctx)
{
   /*
   MOV             R10, 0x9EA004
   MOVS            R4, #0
   MOV             R5, R0  ; arg0
   MOVW            R0, #0x4780 ; 023D5038 : external reference: 022D4780
   LDR.W           R7, [R10]
   SUB             SP, SP, #0x64
   MOV             R8, R1  ; arg1
   MOV             R11, R2 ; arg2
   MOV             R1, R4
   MOVT.W          R0, #0x22D ; 023D5048 : external reference: 022D4780
   MOV.W           R2, #0x124
   MOV             R6, R3  ; arg3
   STR             R7, [SP,#0x88+var_2C]
   STRD.W          R4, R4, [SP,#0x30]
   STR             R4, [SP,#0x88+var_50]
   STR             R4, [SP,#0x88+var_78]
   STR             R4, [SP,#0x88+var_70]
   STR             R4, [SP,#0x88+var_68]
   BLX             SceAppMgr.SceSysclibForDriver._imp_memset_0ab9bf5c
   */

   //if(r5 == 0)
   //{
      //BLX             SceAppMgr.SceThreadmgrForDriver._imp_sceKernelGetProcessId_9dcb4b7a
      //MOV             R5, R0
   //}
   
   /*
   MOVS            R0, #0
   BLX             SceAppMgr.SceKernelSuspendForDriver._imp_4df40893
   */

   //if(r11 == 0)
   //{
      /*
      MOVS            R0, #0x80
      BLX             SceAppMgr.SceThreadmgrForDriver._imp_02eedf17
      MOV.W           R1, #0x124
      MOVW            R3, #0x4780 ; 023D524A : external reference: 022D4780
      MOV             R7, R0
      MOV             R2, R8  ; unk2
      MOV             R0, R5  ; unk0
      STR             R1, [SP,#0x88+arg_0] ; arg_0
      MOVT.W          R3, #0x22D ; 023D5256 : external reference: 022D4780
      MOV             R1, R11 ; unk1
      BLX             SceAppMgr.SceFios2KernelForDriver._imp_sceFiosKernelOverlayResolveSyncForDriver_0f456345
      MOV             R4, R0
      MOV             R0, R7
      BLX             SceAppMgr.SceThreadmgrForDriver._imp_02eedf17
      ADD             R5, SP, #0x88+var_58
      */
      //if(r4 != 0)
      //{
         //return loc_23D5220();
      //}
      //else
      //{
         /*
         MOVW            R0, #0x4780 ; 023D526E : external reference: 022D4780
         MOV             R1, R5
         MOVT.W          R0, #0x22D ; 023D5274 : external reference: 022D4780
         BL              sub_23EF934
         SUBS            R4, R0, #0
         */
         //if(r4 < 0)
         //{
            //return loc_23D5220();
         //}
         //else
         //{
            /*
            LDR.W           R3, [R6,#0x160]
            LSLS            R2, R3, #0x1F
            */
            //if(true) //BMI
            //{
               //return loc_23D50A0();
            //}
            //else
            //{
               /*
               ADD.W           R8, SP, #0x88+var_78
               ADD             R7, SP, #0x88+var_70
               ADD.W           R9, SP, #0x88+var_68
               */

               //return loc_23D518E();
            //}
         //}
      //}
   //}
   //else
   //{
      /*
      MOVW            R0, #0x4780 ; 023D5078 : external reference: 022D4780
      MOV             R1, R8
      MOV.W           R2, #0x124
      MOVT.W          R0, #0x22D ; 023D5082 : external reference: 022D4780
      BLX             SceAppMgr.SceSysclibForDriver._imp_6d286146
      ADD             R5, SP, #0x88+var_58
      MOVW            R0, #0x4780 ; 023D508C : external reference: 022D4780
      MOV             R1, R5
      MOVT.W          R0, #0x22D ; 023D5092 : external reference: 022D4780
      BL              sub_23EF934
      SUBS            R4, R0, #0
      */
      //if(r4 < 0)
      //{
         //return loc_23D5220();
      //}
      //else
      //{
         //return loc_23D50A0();
      //}
   //}

   return 0;
}

SceUID SceAppMgrMount_pool_22A0008;

SceUID SceAppMgrMount_mutex_22A000C;

char* PD_str_2404BBC = "PD";

mount_point_data_entry* mount_point_entries_22D470C;

//this function tries to OverlayResolveSync input path
//then checks that it is not a PD path (temp mount point probably aquired by PFS)
//then takes beginning of path until symbol ":"
//then tries to do a lookup by that path copy in mount_point_entries_22D470C item array
//if item is found then path from mount_point_entries_22D470C item is copied to result
//in any other case OverlayResolveSync result path is copied to result

int iofilemgr_path_mapping_callback_23DDE64(const char *path, SceUID pid, char *result_path, int size)
{
   int result = 0;

   int cookie = var_009EA004;
  
   //clear path copy

   char path_copy[33];
   memset(path_copy,0, 0x21); 
 
   int mutex_res = SceThreadmgrForDriver_ksceKernelLockMutex_16AC80C5(SceAppMgrMount_mutex_22A000C, 1, 0);

   if (mutex_res >= 0)
   {
      //allocate buffer for overlay path

      ctx_49D4DD9B alloc_ctx;
      alloc_ctx.unk4 = 0;
      alloc_ctx.unkC = 0;
      alloc_ctx.unk10 = 0;
      alloc_ctx.unk0 = 0x14;
      alloc_ctx.unk8 = 0x20;

      char* overlay_resolve_sync_path = (char*)SceSysmemForDriver_sceKernelAllocHeapMemory3ForDriver_49D4DD9B(SceAppMgrMount_pool_22A0008, 0x124u, &alloc_ctx);
    
      if ( overlay_resolve_sync_path )
      {
         //get pid if not specified

         SceUID pid_local = pid;
         if (!pid_local)
            pid_local = SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a();

         //overlay resolve sync - input path

         int prev_perm = SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(0x80); //set permission
         int overlay_res = SceFios2KernelForDriver_sceFiosKernelOverlayResolveSyncForDriver_0f456345(pid_local, 0, path, overlay_resolve_sync_path, 0x124);
         SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(prev_perm); //restore permission

         if (overlay_res >= 0 )
         {
            //limit max size

            unsigned int size_local = size;
            if (size >= 0x124 )
               size_local = 0x124;

            //compare to PD string (PFS temp mount point)

            int pd_cmp_result = strncmp(overlay_resolve_sync_path,PD_str_2404BBC, 2u);
            if (pd_cmp_result)
            {
               // copy path from heap to result path

               strncpy(result_path, overlay_resolve_sync_path, size_local);
               result_path[size_local - 1] = 0;// terminate with 0

               //cleanup

               SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, overlay_resolve_sync_path);

               SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);

               if(var_009EA004 == cookie)
                  return 0;
               else
                  return STACK_CHECK_FAIL;
            }

            //clear path copy

            memset(path_copy, 0x21, 0);

            int str_index = 0;

            //copy path till ":"
            while ( 1 )
            {
               char str_symbol = overlay_resolve_sync_path[str_index];
               path_copy[str_index] = str_symbol;
               
               //check end symbol
               if ( str_symbol == ':' )
                  break;

               //check max length
               if (++str_index == 0x21 )
               {
                  // copy path from heap to result path

                  strncpy(result_path, overlay_resolve_sync_path, size_local);
                  result_path[size_local - 1] = 0;// terminate with 0

                  //cleanup

                  SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, overlay_resolve_sync_path);

                  SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);

                  if(var_009EA004 == cookie)
                     return 0;
                  else
                     return STACK_CHECK_FAIL;
               }
            }

            //terminate path with 0
            path_copy[15] = 0;

            mount_point_data_entry *global_buffer = mount_point_entries_22D470C;

            // if global item is set
            if (global_buffer)
            {
               // do path lookup while strings are not equal
               while (strncmp(global_buffer->gen_mount_point, path_copy, 0x10u) )
               {
                  global_buffer = global_buffer->next; // get pointer to next item
                  if (!global_buffer)
                  {
                     //when there is no next item

                     // copy path from heap to result path

                     strncpy(result_path, overlay_resolve_sync_path, size_local);
                     result_path[size_local - 1] = 0;// terminate with 0

                     //cleanup

                     SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, overlay_resolve_sync_path);

                     SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);

                     if(var_009EA004 == cookie)
                        return 0;
                     else
                        return STACK_CHECK_FAIL;
                  }
               }

               // copy path from global to result path

               strncpy(result_path, global_buffer->path, size_local);
               result = 0;
               result_path[size_local - 1] = 0;// terminate with 0
            }
            else
            {
               // copy path from heap to result path

               strncpy(result_path, overlay_resolve_sync_path, size_local);
               result = 0;
               result_path[size_local - 1] = 0;// terminate with 0
            }
         }
         
         SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, overlay_resolve_sync_path);
      }
      else
      {
         result = 0x80801006;
      }

      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
   }
  
   //check cookie and return result

   if(var_009EA004 == cookie)
      return result;
   else
      return STACK_CHECK_FAIL;
}

int proc_generate_random_path_23D4FBC(char *prefix, char *result_path)
{   
   int result;
   char random_buffer[8]; // [sp+18h] [bp-28h]

   result = SceSblSsMgrForDriver_sceKernelGetRandomNumberForDriver_4f9bfbe5(random_buffer, 8);
   if(result < 0)
      return result;

   _snprintf(result_path, 0x10u, "%s%02x%02x%02x%02x%02x%02xd", prefix, random_buffer[0], random_buffer[1], random_buffer[2], random_buffer[3], random_buffer[4], random_buffer[5]);
   return 0;
}

int AppMgr_decrypt_str_constant_23D59D4(char* input, char* output)
{
   if(output == 0)
      return 0x80800001;

   if(input == 0)
      return 0x80800001;

   memset(output, 0, 0x20);

   int index = 0;

   while(input[index])
   {
      output[index] = ~input[index];
      if (++index == 0x20)
         return 0x80800001;
   }
  
   output[index] = 0;
   return 0;
}

int AppMgr_decrypt_str_constant_23D5998(char *input, char *output)
{
  if(output == 0)
     return 0x80800001;

  if(input == 0)
     return 0x80800001;

  memset(output, 0, 0x40u);

  int index = 0;

  while (input[index])
  {
    output[index] = ~input[index];
    if (++index == 0x40)
      return 0x80800001;
  }
  
  output[index] = 0;
  return 0;
}

global_ctx_item *__cdecl get_global_ctx_item_23C2DE0(ctx_23C2960 *ctx, SceUID pid)
{
   return 0;
}

int verify_copy_23D5A10(char *src, char *dst)
{
   return 0;
}

//----------------

int w_unmount_23D5F44(SceUID pid, mount_point_data_entry *mnt_entry, int umountArg)
{
   return 0;
}

int read_sealedkey_23D6EA0(const char *mountpoint, char *secret)
{
   return 0;
}

int proc_fios2kernel_overlay_add_for_process_23D4DDC(SceUID pid, mount_ctx_t *mctx)
{
   return 0;
}

int clearsign_exists_23D9A4C(const char *mountpoint)
{
   return 0;
}

//----------------

int generate_mount_drive(unsigned int mount_id, char* mount_drive)
{
   if(mount_id <= 0x70)
   {
      #pragma region
      int res = proc_generate_random_path_23D4FBC("ad", mount_drive);
      if (res)
         return res;

      mount_drive[14] = ':';
      mount_drive[15] = 0;
      return 0;
      #pragma endregion
   }
   else if((mount_id > 0x70) && (mount_id < 0xC8))
   {
      return 0x80800001;
   }
   else if((mount_id >= 0xC8) && (mount_id <= 0xCF))
   {
      #pragma region
      switch(mount_id)
      {
      case 0xC8:
      case 0xC9:
         {
            int res = proc_generate_random_path_23D4FBC("td", mount_drive);
            if (res)
               return res;

            mount_drive[14] = ':';
            mount_drive[15] = 0;
            return 0;
         }
      case 0xCA:
         {
            if (SceSblACMgrForDriver_sceSblACMgrCheckAuthIdForDriver_0b6e6cd7(0))
            {
               strcpy(mount_drive, "ms0:");
               return 0;
            }
            else
            {
               int res = proc_generate_random_path_23D4FBC("ms", mount_drive);
               if (res)
                  return res;
               
               mount_drive[14] = ':';
               mount_drive[15] = 0;
               return 0;
            }
         }
      case 0xCB:
      case 0xCC:
         {
            int res = proc_generate_random_path_23D4FBC("td", mount_drive);
            if (res)
               return res;
            
            mount_drive[14] = ':';
            mount_drive[15] = 0;
            return 0;
         }
      case 0xCD:
         strcpy(mount_drive, "cache0:");
         return 0;
      case 0xCE:
      case 0xCF:
         {
            int res = proc_generate_random_path_23D4FBC("td", mount_drive);
            if (res)
               return res;

            mount_drive[14] = ':';
            mount_drive[15] = 0;
            return 0;
         }
      }
      #pragma endregion
   }
   else if((mount_id > 0xCF) && (mount_id < 0x12E))
   {
      return 0x80800001;
   }
   else if((mount_id >= 0x12E) && (mount_id <= 0x130))
   {
      #pragma region
      switch(mount_id)
      {
      case 0x12E:
         strcpy(mount_drive, "trophy_sys0:");
         return 0;
      case 0x12F:
         strcpy(mount_drive, "trophy_dat0:");
         return 0;
      case 0x130:
         strcpy(mount_drive, "trophy_dbk0:");
         return 0;
      }
      #pragma endregion
   }
   else if((mount_id > 0x130) && (mount_id < 0x190))
   {
      return 0x80800001;
   }
   else if((mount_id >= 0x190) && (mount_id <= 0x192))
   {
      #pragma region
      switch(mount_id)
      {
      case 0x190:
      case 0x191:
      case 0x192:
         {
            int res = proc_generate_random_path_23D4FBC("ad", mount_drive);
            if (res)
               return res;
            
            mount_drive[14] = ':';
            mount_drive[15] = 0;
            return 0;
         }
      }
      #pragma endregion
   }
   else if((mount_id >= 0x193) && (mount_id <= 0x1F4))
   {
      #pragma region
      int res = proc_generate_random_path_23D4FBC("ad", mount_drive);
      if (res)
         return res;

      mount_drive[14] = ':';
      mount_drive[15] = 0;
      return 0;
      #pragma endregion
   }
   else if((mount_id > 0x1F4) && (mount_id < 0x1F8))
   {
      return 0x80800001;
   }
   else if((mount_id >= 0x1F8) && (mount_id <= 0x1F9))
   {
      #pragma region
      switch(mount_id)
      {
      case 0x1F8:
         strcpy(mount_drive, "sdimport0:");
         return 0;
      case 0x1F9:
         strcpy(mount_drive, "sdimport_tmp0:");
         return 0;
      }
      #pragma endregion
   }
   else if ((mount_id > 0x1F9) && (mount_id < 0x258))
   {
      return 0x80800001;
   }
   else if(mount_id == 0x258)
   {
      #pragma region
      int res = proc_generate_random_path_23D4FBC("lm", mount_drive);
      if (res)
         return res;
      
      mount_drive[14] = ':';
      mount_drive[15] = 0;
      return 0;
      #pragma endregion
   }
   else if ((mount_id > 0x258) && (mount_id < 0x3E8))
   {
      return 0x80800001;
   }
   else if((mount_id >= 0x3E8) && (mount_id <= 0x3EB))
   {
      #pragma region
      switch(mount_id)
      {
      case 0x3E8:
      case 0x3E9:
         _snprintf(mount_drive, 0x10u, "app%1u:", 0);
         return 0;
      case 0x3EA:
      case 0x3EB:
         _snprintf(mount_drive, 0x10u, "addcont%1u:", 0);
         return 0;
      }
      #pragma endregion
   }
   else if(mount_id == 0x3EC)
   {
      return 0x80800001;
   }
   else if((mount_id >= 0x3ED) && (mount_id <= 0x3F1))
   {
      #pragma region
      switch(mount_id)
      { 
      case 0x3ED:
      case 0x3EE:
         _snprintf(mount_drive, 0x10u, "savedata%1u:", 0);
         return 0;
      case 0x3EF:
      case 0x3F0:
         {
            int res = proc_generate_random_path_23D4FBC("sd", mount_drive);
            if (res)
               return res;
            
            mount_drive[14] = ':';
            mount_drive[15] = 0;
            return 0;
         }
      case 0x3F1:
         {
            int res = proc_generate_random_path_23D4FBC("ud", mount_drive);
            if (res)
               return res;

            mount_drive[14] = ':';
            mount_drive[15] = 0;
            return 0;
         }
      }
      #pragma endregion
   }
   else if(mount_id > 0x3F1)
   {
      return 0x80800001;
   }
}

bool maybe_find_mount(SceUID pid, const mount_ctx_holder_t *mount_ctx_holder, unsigned int mount_id, const char *mount_drive, const char* mount_drive_input, char *gen_mount_point, int& error_code)
{  
   //try to find mount ctx with mount_id and copy current_mount->mountDrive to gen_mount_point

   if (mount_id >= 0x3E8)
   {
      #pragma region
      mount_ctx_t* current_mount = mount_ctx_holder->mount;

      while (1)
      {
         if (mount_id == current_mount->mnt_entry->mount_id)
         {
            if (strncmp(current_mount->mountDrive, mount_drive_input, 0x10u) == 0)
               break;
         }

         current_mount = current_mount->next;

         if (current_mount == 0)
         {
            error_code = 0;
            return true;
         }
      }

      memcpy(gen_mount_point, current_mount->mountDrive, 0x10);
      #pragma endregion
   }
   else
   {
      #pragma region
      mount_ctx_t* current_mount = mount_ctx_holder->mount;

      while (1)
      {
         if(mount_id == current_mount->mnt_entry->mount_id)
            break;

         current_mount = current_mount->next;

         if (current_mount == 0)
         {
            error_code = 0;
            return true;
         }
      }

      memcpy(gen_mount_point, current_mount->mountDrive, 0x10);
      #pragma endregion
   }

   //----

   mount_point_data_entry *mpd_entry0;

   if (mount_drive)
   {
      #pragma region

      mount_ctx_t *mount_ctx_local1 = mount_ctx_holder->mount;

      if (!mount_ctx_local1)
      {
         error_code = 0x80800002; 
         return false;
      }

      while (1)
      {
         mpd_entry0 = mount_ctx_local1->mnt_entry;

         if ( mount_ctx_local1->mnt_entry )
         {
            if ( mount_id == mpd_entry0->mount_id && !strncmp(mount_ctx_local1->mountDrive, mount_drive_input, 0x10u))
               break;
         }

         mount_ctx_local1 = mount_ctx_local1->next;

         if (mount_ctx_local1 == 0)
         {
            error_code = 0x80800002;
            return false;
         }
      }

      #pragma endregion
   }
   else
   {
      #pragma region

      mount_ctx_t *mount_ctx_local2 = mount_ctx_holder->mount;

      if (!mount_ctx_local2)
      {
         error_code = 0x80800002;
         return false;
      }

      while (1)
      {
         mpd_entry0 = mount_ctx_local2->mnt_entry;

         if (mount_ctx_local2->mnt_entry)
         {
            if (mount_id == mpd_entry0->mount_id)
               break;
         }

         mount_ctx_local2 = mount_ctx_local2->next;

         if (mount_ctx_local2 == 0)
         {
            error_code = 0x80800002;
            return false;
         }
      }

      #pragma endregion
   }

   if(mpd_entry0->gen_mount_point[0] == 0)
   {
      error_code = 0x80800003;
      return false;
   }

   SceSelfAuthInfo auth_ctx;

   int res1 = SceProcessmgrForKernel_sceKernelGetSelfAuthInfoForKernel_e4c83b0d(pid, &auth_ctx);
   if(res1 < 0)
   {
      error_code = res1;
      return false;
   }

   int res2 = ScePfsMgrForKernel_find_pmi_check_auth_id_d8d0fee5(mpd_entry0->gen_mount_point, auth_ctx.auth_id);
   if(res2 == 0x80010011 || res2 >= 0)
   {
      error_code = 0x80800003;
      return false;
   }
   else
   {
      error_code = res2;
      return false;
   }   
}

int label_21_cleanup(SceUID pid, const mount_ctx_t* mctx_alloc1, const void* mem, int error_code)
{
   //remove overlay

   if (mctx_alloc1->overlay_id)
   {
      SceUID pid0 = pid != 0 ? pid : SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a();
      int prev_perm0 = SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(0x80);
      SceFios2KernelForDriver_sceFiosKernelOverlayRemoveForProcessForDriver_23247efb(pid0, mctx_alloc1->overlay_id);
      SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(prev_perm0);
   }

   //unmount

   if (mctx_alloc1->mnt_entry)
   {
      w_unmount_23D5F44(pid, mctx_alloc1->mnt_entry, 1);
   }

   //dealloc memory

   SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, mctx_alloc1);

   if (mem)
   {
      SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, mem);
   }

   return error_code;
}

int select_index(const mount_point_data_entry* glb_mpd_entry0)
{
   if (glb_mpd_entry0->auth_ids[0] == 0)
      return 0;
   else if (glb_mpd_entry0->auth_ids[1] == 0)
      return 1;
   else if (glb_mpd_entry0->auth_ids[2] == 0)
      return 2;
   else if (glb_mpd_entry0->auth_ids[3] == 0)
      return 3;
   else if (glb_mpd_entry0->auth_ids[4] == 0)
      return 4;
   else if (glb_mpd_entry0->auth_ids[5] == 0)
      return 5;
   else if (glb_mpd_entry0->auth_ids[6] == 0)
      return 6;
   else if (glb_mpd_entry0->auth_ids[7] == 0)
      return 7;
   else if (glb_mpd_entry0->auth_ids[8] == 0)
      return 8;
   else if (glb_mpd_entry0->auth_ids[9] == 0)
      return 9;
   else if (glb_mpd_entry0->auth_ids[10] == 0)
      return 10;
   else if (glb_mpd_entry0->auth_ids[11] == 0)
      return 11;
   else if (glb_mpd_entry0->auth_ids[12] == 0)
      return 12;
   else if (glb_mpd_entry0->auth_ids[13] == 0)
      return 13;
   else if (glb_mpd_entry0->auth_ids[14] == 0)
      return 14;
   else if (glb_mpd_entry0->auth_ids[15] == 0)
      return 15;
   else
      return -1;
}

int clear_authid(mount_point_data_entry* glb_mpd_entry0, SceUInt64 auth_id)
{
   if (auth_id == glb_mpd_entry0->auth_ids[0])
      glb_mpd_entry0->auth_ids[0] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[1])
      glb_mpd_entry0->auth_ids[1] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[2])
      glb_mpd_entry0->auth_ids[2] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[3])
      glb_mpd_entry0->auth_ids[3] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[4])
      glb_mpd_entry0->auth_ids[4] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[5])
      glb_mpd_entry0->auth_ids[5] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[6])
      glb_mpd_entry0->auth_ids[6] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[7])
      glb_mpd_entry0->auth_ids[7] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[8])
      glb_mpd_entry0->auth_ids[8] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[9])
      glb_mpd_entry0->auth_ids[9] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[10])
      glb_mpd_entry0->auth_ids[10] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[11])
      glb_mpd_entry0->auth_ids[11] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[12])
      glb_mpd_entry0->auth_ids[12] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[13])
      glb_mpd_entry0->auth_ids[13] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[14])
      glb_mpd_entry0->auth_ids[14] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[15])
      glb_mpd_entry0->auth_ids[15] = 0LL;

   return 0;
}

int label_115_cleanup(SceUID pid,  mount_ctx_t *mctx_alloc1, mount_ctx_holder_t *mount_ctx_holder, char *gen_mount_point)
{
   int result2 = proc_fios2kernel_overlay_add_for_process_23D4DDC(pid, mctx_alloc1);
   if (result2)
   {
      return label_21_cleanup(pid, mctx_alloc1, 0, result2);  
   }

   mount_ctx_t* mount_ctx_local3 = mount_ctx_holder->mount;
   
   if (mount_ctx_local3)
   {
      if (mctx_alloc1 == mount_ctx_local3)
      {
         return label_21_cleanup(pid, mctx_alloc1, 0, 0x80800003);
      }
      else
      {
         while (1)
         {
            if (!mount_ctx_local3->next)
            {
               mount_ctx_local3->next = mctx_alloc1;
               mctx_alloc1->unk1C = mount_ctx_local3;
               mctx_alloc1->next = 0;
               memcpy(gen_mount_point, mctx_alloc1->mountDrive, 0x10);

               return 0;
            }

            if (mctx_alloc1 == mount_ctx_local3)
               break;

            mount_ctx_local3 = mount_ctx_local3->next;
         }
         
         return label_21_cleanup(pid, mctx_alloc1, 0, 0x80800003);
      }
   }
   else
   {
      mount_ctx_holder->mount = mctx_alloc1;
      mctx_alloc1->unk1C = 0;
      mctx_alloc1->next = 0;
      memcpy(gen_mount_point, mctx_alloc1->mountDrive, 0x10);
   
      return 0;
   }
}

int special_cleanup(SceUID pid, unsigned int mount_id, mount_ctx_t *mctx_alloc1, mount_ctx_holder_t *mount_ctx_holder, const char* mount_drive_input, char *gen_mount_point)
{
   mount_ctx_t * mount_ctx_current = mount_ctx_holder->mount;

   if (mount_ctx_current)
   {
      mount_point_data_entry * mpd_entry;

      while (1)
      {
         mpd_entry = mount_ctx_current->mnt_entry;

         if (mount_ctx_current->mnt_entry)
         {
            if (mpd_entry->mount_id == mount_id && !strncmp(mount_ctx_current->mountDrive, mount_drive_input, 0x10u))
            {
               break;
            }
         }

         mount_ctx_current = mount_ctx_current->next;

         if (!mount_ctx_current)
         {
            return label_21_cleanup(pid, mctx_alloc1, mount_ctx_current, 0x80800002);
         }
      }

      mctx_alloc1->entry_18 = mpd_entry;

      return label_115_cleanup(pid, mctx_alloc1, mount_ctx_holder, gen_mount_point);
   }
   else
   {
      return label_21_cleanup(pid, mctx_alloc1, mount_ctx_current, 0x80800002);
   }
}

int label_113_cleanup(SceUID pid, unsigned int mount_id, mount_ctx_t *mctx_alloc1, mount_ctx_holder_t *mount_ctx_holder, const char *physical_path_copy2, const char* mount_drive_input, char *gen_mount_point)
{
   SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, physical_path_copy2);

   if (mount_id != 0x3E9)
   {
      if (mount_id != 0x3EB)
      {
         return label_115_cleanup(pid, mctx_alloc1, mount_ctx_holder, gen_mount_point);
      }
      else
      {
         return special_cleanup(pid, 0x3EA, mctx_alloc1, mount_ctx_holder, mount_drive_input, gen_mount_point);
      }
   }
   else
   {
      return special_cleanup(pid, 0x3E8, mctx_alloc1, mount_ctx_holder, mount_drive_input, gen_mount_point);  
   }  
}

bool entries_stuff(SceUID pid, unsigned int mount_id, mount_ctx_t *mctx_alloc1, mount_ctx_holder_t *mount_ctx_holder, const char *physical_path_copy2, const char* mount_drive_input, char *gen_mount_point, SceUInt64 auth_id, int& error_code)
{
   //search

   mount_point_data_entry* glb_mpd_entry0 = mount_point_entries_22D470C;

   while (mount_id != glb_mpd_entry0->mount_id || strncmp(glb_mpd_entry0->path, physical_path_copy2, 0x124u) != 0)
   {
      glb_mpd_entry0 = glb_mpd_entry0->next;
      if (glb_mpd_entry0 == 0)
      {
         error_code = 0;
         return true;
      }
   }

   //select index

   int initialized_global_item_index = select_index(glb_mpd_entry0);
   if(initialized_global_item_index < 0)
   {
      error_code = label_21_cleanup(pid, mctx_alloc1, physical_path_copy2, 0x8080001E);
      return false;
   }

   //assign authid
   
   glb_mpd_entry0->auth_ids[initialized_global_item_index] = auth_id;

   //other checks

   if(glb_mpd_entry0->gen_mount_point[0] == 0)
   {
      mctx_alloc1->mnt_entry = glb_mpd_entry0;
      error_code = label_113_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point);
      return false;
   }

   SceSelfAuthInfo auth_ctx;

   int res0 = SceProcessmgrForKernel_sceKernelGetSelfAuthInfoForKernel_e4c83b0d(pid, &auth_ctx);
   if(res0 >= 0)
   {
      res0 = ScePfsMgrForKernel_find_pmi_check_auth_id_d8d0fee5(glb_mpd_entry0->gen_mount_point, auth_ctx.auth_id);

      if(res0 == 0x80010011 || res0 >= 0)
      {
         mctx_alloc1->mnt_entry = glb_mpd_entry0;
         error_code = label_113_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point);
         return false;
      }
   }

   clear_authid(glb_mpd_entry0, auth_id);

   if (res0 == 0x80800003)
   {
      error_code = label_113_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point);
      return false;
   }
   else
   {
      error_code = label_21_cleanup(pid, mctx_alloc1, physical_path_copy2, res0);
      return false;
   }
}

int mpd_cleanup(SceUID pid, unsigned int mount_id, mount_ctx_t *mctx_alloc1, mount_ctx_holder_t *mount_ctx_holder, const char *physical_path_copy2, const char* mount_drive_input, char *gen_mount_point, mount_point_data_entry* mpd_entry_alloc2, bool check0, int result2)
{
   SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, mpd_entry_alloc2);

   mctx_alloc1->mnt_entry = 0;

   if (check0)
      return label_21_cleanup(pid, mctx_alloc1, physical_path_copy2, result2);
   else
      return label_113_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point);
}

int label_154_cleanup(SceUID pid, unsigned int mount_id, mount_ctx_t *mctx_alloc1, mount_ctx_holder_t *mount_ctx_holder, const char *physical_path_copy2, const char* mount_drive_input, char *gen_mount_point, mount_point_data_entry *mpd_entry_alloc2, bool check0, int result2)
{
   int prev_perm = SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(128);
   if (mount_id == 0x258)
   {
      SceIofilemgrForDriver_sceIoUmountForDriver_20574100(0x10000, 0, 0, 0);
   }
   else
   {
      ScePfsMgrForKernel_unmount_680bc384(mpd_entry_alloc2->gen_mount_point);
   }
   SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(prev_perm);

   return mpd_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, check0, result2);
}

int select_index_136(mount_point_data_entry *mpd_entry_alloc2)
{
   if (mpd_entry_alloc2->auth_ids[0] == 0)
      return 0;
   else if (mpd_entry_alloc2->auth_ids[1] == 0)
      return 1;
   else if (mpd_entry_alloc2->auth_ids[2] == 0)
      return 2; 
   else if (mpd_entry_alloc2->auth_ids[3] == 0)
      return 3;
   else if (mpd_entry_alloc2->auth_ids[4] == 0)
      return 4;
   else if (mpd_entry_alloc2->auth_ids[5] == 0)
      return 5;
   else if (mpd_entry_alloc2->auth_ids[6] == 0)
      return 6;
   else if (mpd_entry_alloc2->auth_ids[7] == 0)
      return 7;
   else if (mpd_entry_alloc2->auth_ids[8] == 0)
      return 8;
   else if (mpd_entry_alloc2->auth_ids[9] == 0)
      return 9;
   else if (mpd_entry_alloc2->auth_ids[10] == 0)
      return 10;
   else if (mpd_entry_alloc2->auth_ids[11] == 0)
      return 11;
   else if (mpd_entry_alloc2->auth_ids[12] == 0)
      return 12;
   else if (mpd_entry_alloc2->auth_ids[13] == 0)
      return 13;
   else if (mpd_entry_alloc2->auth_ids[14] == 0)
      return 14;
   else if (mpd_entry_alloc2->auth_ids[15] == 0)
      return 15;
   else 
      return -1;
}

int label_136_cleanup(SceUID pid, unsigned int mount_id, mount_ctx_t *mctx_alloc1, mount_ctx_holder_t *mount_ctx_holder, const char *physical_path_copy2, const char* mount_drive_input, char *gen_mount_point, mount_point_data_entry *mpd_entry_alloc2, SceUInt64 auth_id)
{
   int initialized_allocated_item_index = select_index_136(mpd_entry_alloc2);
   if(initialized_allocated_item_index < 0)
   {
      return label_154_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, 1, 0x8080001E);
   }
   else
   {
      mount_point_data_entry *glb_mpd_entry1 = (mount_point_data_entry *)mount_point_entries_22D470C;
      mpd_entry_alloc2->auth_ids[initialized_allocated_item_index] = auth_id;

      if (glb_mpd_entry1)
      {
         if (mpd_entry_alloc2 == glb_mpd_entry1)
         {
            return label_154_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, 0, 0x80800003);
         }

         mount_point_data_entry * r3;
         while (1)
         {
            r3 = glb_mpd_entry1->next;
            if(r3 == 0)
               break;

            if (mpd_entry_alloc2 == glb_mpd_entry1)
            {
               return label_154_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, 0, 0x80800003);
            }

            glb_mpd_entry1 = glb_mpd_entry1->next;
         }

         glb_mpd_entry1->next = mpd_entry_alloc2;
         mpd_entry_alloc2->prev = glb_mpd_entry1;
         mpd_entry_alloc2->next = r3;
      }
      else
      {
         mount_point_entries_22D470C = mpd_entry_alloc2;
         mpd_entry_alloc2->prev = 0;
         mpd_entry_alloc2->next = 0;
      }

      mctx_alloc1->mnt_entry = mpd_entry_alloc2;

      return label_113_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point);
   }
}

int handle_mount_id_258(SceUID pid, unsigned int mount_id, mount_ctx_t *mctx_alloc1, mount_ctx_holder_t *mount_ctx_holder, const char *physical_path_copy2, const char* mount_drive_input, char *gen_mount_point, mount_point_data_entry *mpd_entry_alloc2, SceUInt64 auth_id)
{
   mpd_entry_alloc2->gen_mount_point[0] = 0;
   int prev_perm1 = SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(0x80);
   int mount_res = SceIofilemgrForDriver_sceIoMountForDriver_d070bc48(0x10000, physical_path_copy2, 0, 0, 0, 0);

   if(mount_res >= 0)
   {
      int mkdir_res0 = SceIofilemgrForDriver_sceIoMkdirForDriver_7f710b25("lma0:MPE_ROOT", 0x186);
      if(mkdir_res0 == 0x80010011 || mkdir_res0 >= 0)
      {
         SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(prev_perm1);
         return label_136_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, auth_id);
      }
   }

   SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(prev_perm1);

   bool check0 = mount_res != 0x80800003;
   return mpd_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, check0, mount_res);
}

int label_135(SceUID pid, unsigned int mount_id, mount_ctx_t *mctx_alloc1, mount_ctx_holder_t *mount_ctx_holder, const char *physical_path_copy2, const char* mount_drive_input, char *gen_mount_point, mount_point_data_entry *mpd_entry_alloc2, SceUInt64 auth_id,
              char* klicensee0, int pfs_mount_type, const char *mountpoint, char *gen_pfs_drive0)
{
   if (mpd_entry_alloc2->gen_mount_point[0] == 0)
      return label_136_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, auth_id);

   //===============

   SceSelfAuthInfo auth_ctx0;

   int prev_perm2 = SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(0x80);
   int auth_res = SceProcessmgrForKernel_sceKernelGetSelfAuthInfoForKernel_e4c83b0d(pid, &auth_ctx0);
   if (auth_res < 0)
      return mpd_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, auth_res != 0x80800003, auth_res);

   char* klicensee1 = 0;

   if (klicensee0[0] || klicensee0[1] || klicensee0[2] || klicensee0[3] || klicensee0[4] || klicensee0[5] || klicensee0[6] || klicensee0[7] || 
       klicensee0[8] || klicensee0[9] || klicensee0[10] || klicensee0[11] || klicensee0[12] || klicensee0[13] || klicensee0[14])
   {
      klicensee1 = klicensee0;
   }
   else
   {
      klicensee1 = klicensee0[15] ? klicensee0 : 0;
   }

   int mnt_res = ScePfsMgrForKernel_mount_a772209c(mountpoint, gen_pfs_drive0, auth_ctx0.auth_id, klicensee1, pfs_mount_type);
   SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(prev_perm2);
   if (mnt_res)
      return mpd_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, mnt_res != 0x80800003, mnt_res);

   //===============

   int check_res0 = ScePfsMgrForKernel_find_pmi_check_auth_id_d8d0fee5(gen_pfs_drive0, 0x2800000000000001); // SceShell
   if (check_res0 != 0x80010011)
   {
      if (check_res0 < 0)
      {
         ScePfsMgrForKernel_unmount_680bc384(mpd_entry_alloc2->gen_mount_point);
         return mpd_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, check_res0 != 0x80800003, check_res0);
      }
   }

   //===============
   
   int check_res1 = ScePfsMgrForKernel_find_pmi_check_auth_id_d8d0fee5(gen_pfs_drive0, 0x2800000000007001);
   if(check_res1 != 0x80010011)
   {
      if (check_res1 < 0)
      {
         ScePfsMgrForKernel_unmount_680bc384(mpd_entry_alloc2->gen_mount_point);
         return mpd_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, check_res1 != 0x80800003, check_res1);
      }
   }
   
   //===============
   
   int check_res2 = ScePfsMgrForKernel_find_pmi_check_auth_id_d8d0fee5(gen_pfs_drive0, 0x280000000000002D); // SceContentManager
   if (check_res2 != 0x80010011)
   {
      if (check_res2 < 0)
      {
         ScePfsMgrForKernel_unmount_680bc384(mpd_entry_alloc2->gen_mount_point);
         return mpd_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, check_res2 != 0x80800003, check_res2);
      }
   }
   
   //===============

   if (pfs_mount_type == 0x04)
   {
      int check_res3 = ScePfsMgrForKernel_find_pmi_check_auth_id_d8d0fee5(mpd_entry_alloc2->gen_mount_point, 0x2800000000000010); // SceSettings
      if (check_res3 != 0x80010011)
      {
         if (check_res3 < 0)
         {
            ScePfsMgrForKernel_unmount_680bc384(mpd_entry_alloc2->gen_mount_point);
            return mpd_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, check_res3 != 0x80800003, check_res3);
         }
      }
   }
   else
   {
      if (pfs_mount_type == 0x05)
      {
         int check_res4 = ScePfsMgrForKernel_find_pmi_check_auth_id_d8d0fee5(mpd_entry_alloc2->gen_mount_point, 0x2800000000000039); // SceDailyCheckerBg
         if (check_res4 != 0x80010011)
         {
            if (check_res4 < 0)
            {
               ScePfsMgrForKernel_unmount_680bc384(mpd_entry_alloc2->gen_mount_point);
               return mpd_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, check_res4 != 0x80800003, check_res4);
            }
         }
      }
   }

   //===============

   return label_136_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, auth_id);
}

int create_mountpoint_core(SceUID pid, unsigned int mount_id, mount_ctx_t *mctx_alloc1, mount_ctx_holder_t *mount_ctx_holder, const char *physical_path_copy2, const char* mount_drive_input, char *gen_mount_point, mount_point_data_entry *mpd_entry_alloc2, SceUInt64 auth_id,
                           int mount_id0, const char* klicensee, const char *mountpoint, char *gen_pfs_drive0)
{
   char klicensee0[16];
   
   memset(klicensee0, 0, 0x10);

   if (mount_id0 > 0x192)
   {
      #pragma region
      if (mount_id0 >= 0x3EC)
      {
         #pragma region
         if (mount_id0 == 0x3EE)
         {
            return label_135(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, auth_id, klicensee0, 0x15, mountpoint, gen_pfs_drive0);
         }
         else
         {
            #pragma region
            if (mount_id0 <= 0x3EE)
            {
               #pragma region
               if (mount_id0 == 0x3EC)
               {
                  memcpy(klicensee0, klicensee, 0x10);
                  return label_135(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, auth_id, klicensee0, 0x0D, mountpoint, gen_pfs_drive0);
               }
               else
               {
                  if (mount_id0 == 0x3ED)
                  {
                     if (klicensee)
                     {
                        memcpy(klicensee0, klicensee, 0x10);
                        return label_135(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, auth_id, klicensee0, 0x05, mountpoint, gen_pfs_drive0);
                     }
                     else
                     {
                        int sk_read_res = read_sealedkey_23D6EA0(mountpoint, klicensee0);
                        if (!sk_read_res)
                        {
                           return label_135(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, auth_id, klicensee0, 0x05, mountpoint, gen_pfs_drive0);
                        }
                        else
                        {
                           return mpd_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, sk_read_res != 0x80800003, sk_read_res);
                        }
                     }
                  }
                  else
                  {
                     return mpd_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, 1, 0x80800001);
                  }
               }
               #pragma endregion
            }
            else
            {
               if (mount_id0 > 0x3F0)
               {
                  if (mount_id0 != 0x3F1)
                  {
                     return mpd_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, 1, 0x80800001);
                  }
                  else
                  {
                     return label_135(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, auth_id, klicensee0, 0x15, mountpoint, gen_pfs_drive0);
                  }
               }
               else
               {
                  return label_135(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, auth_id, klicensee0, 0x14, mountpoint, gen_pfs_drive0);
               }
            }
            #pragma endregion
         }
         #pragma endregion
      }
      else if (mount_id0 >= 0x3EA)
      {
         int sk_read_res = read_sealedkey_23D6EA0(mountpoint, klicensee0);
         if (!sk_read_res)
         {
            if(strncmp(mountpoint, "gro0:", 5u))
            {
               return label_135(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, auth_id, klicensee0, 0x04, mountpoint, gen_pfs_drive0);
            }
            else
            {
               return label_135(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, auth_id, klicensee0, 0x0C, mountpoint, gen_pfs_drive0);
            }
         }
         else
         {
            return mpd_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, sk_read_res != 0x80800003, sk_read_res);
         }
      }
      else if (mount_id0 >= 0x1FA)
      {
         if (mount_id0 < 0x3E8)
         {
            return mpd_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, 1, 0x80800001);
         }
         else
         {
            if (clearsign_exists_23D9A4C(mountpoint))
            {
               memcpy(klicensee0, klicensee, 0x10);
               return label_135(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, auth_id, klicensee0, 0x02, mountpoint, gen_pfs_drive0);
            }
            else
            {
               return label_135(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, auth_id, klicensee0, 0x14, mountpoint, gen_pfs_drive0);
            }
         }
      }
      else if (mount_id0 < 0x1F8)
      {
         #pragma region
         if (mount_id0 - 0x1F4 <= 1)
         {
            int sk_read_res = read_sealedkey_23D6EA0(mountpoint, klicensee0);
            if (!sk_read_res)
            {
               return label_135(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, auth_id, klicensee0, 0x04, mountpoint, gen_pfs_drive0);
            }
            else
            {
               return mpd_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, sk_read_res != 0x80800003, sk_read_res);
            }
         }
         else
         {
            return mpd_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, 1, 0x80800001);
         }
         #pragma endregion
      }
      else
      {
         int sk_read_res = read_sealedkey_23D6EA0(mountpoint, klicensee0);
         if (!sk_read_res)
         {
            return label_135(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, auth_id, klicensee0, 0x06, mountpoint, gen_pfs_drive0);
         }
         else
         {
            return mpd_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, sk_read_res != 0x80800003, sk_read_res);
         }
      }
      #pragma endregion
   }
   else if (mount_id0 >= 0x190)
   {
      return label_135(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, auth_id, klicensee0, 0x16, mountpoint, gen_pfs_drive0);
   }
   else if (mount_id0 != 0x6E)
   {
      #pragma region
      if (mount_id0 > 0x6E)
      {
         #pragma region
         if (mount_id0 <= 0xCF)
         {
            if (mount_id0 < 0xC8 && mount_id0 > 0x70)
            {
               return mpd_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, 1, 0x80800001);
            }
            else
            {
               return label_135(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, auth_id, klicensee0, 0x15, mountpoint, gen_pfs_drive0);
            }
         }
         else if (mount_id0 - 0x12E > 2)
         {
            return mpd_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, 1, 0x80800001);
         }
         else
         {
            int sk_read_res = read_sealedkey_23D6EA0(mountpoint, klicensee0);
            if (!sk_read_res)
            {
               return label_135(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, auth_id, klicensee0, 0x06, mountpoint, gen_pfs_drive0);
            }
            else
            {
               return mpd_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, sk_read_res != 0x80800003, sk_read_res);
            }
         }
         #pragma endregion
      }
      else if (mount_id0 <= 0x6C)
      {
         if (mount_id0 >= 0x6B)
         {
            return label_135(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, auth_id, klicensee0, 0x15, mountpoint, gen_pfs_drive0);
         }
         else if (mount_id0 < 0x64)
         {
            return mpd_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, 1, 0x80800001);
         }
      }
      else
      {
         return label_135(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, auth_id, klicensee0, 0x16, mountpoint, gen_pfs_drive0);
      }
      #pragma endregion
   }
   else
   {
      #pragma region
      if (klicensee)
      {
         memcpy(klicensee0, klicensee, 0x10);
         return label_135(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, auth_id, klicensee0, 0x05, mountpoint, gen_pfs_drive0);
      }
      else
      {
         int sk_read_res = read_sealedkey_23D6EA0(mountpoint, klicensee0);
         if (!sk_read_res)
         {
            return label_135(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, auth_id, klicensee0, 0x05, mountpoint, gen_pfs_drive0);
         }
         else
         {
            return mpd_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, sk_read_res != 0x80800003, sk_read_res);
         }
      }
      #pragma endregion
   }
}

int create_mountpoint_base_23D9B50(SceUID pid, mount_ctx_holder_t *mount_ctx_holder, unsigned int mount_id, char *title_id, char *physical_path, char *mount_drive, char *klicensee, char *gen_mount_point)
{
   if (!gen_mount_point)
      return 0x80800001;

   char mount_drive_input[16];
   memset(mount_drive_input, 0, 0x10);

   if (mount_drive)
   {
      memcpy(mount_drive_input, mount_drive, 0x10);
   }
   else
   {
      int gen_res = generate_mount_drive(mount_id, mount_drive_input);
      if(gen_res)
         return gen_res;
   }

   //===========================================

   if (mount_ctx_holder->mount)
   {
      int error_code = 0;
      if(!maybe_find_mount(pid, mount_ctx_holder, mount_id, mount_drive, mount_drive_input, gen_mount_point, error_code))
         return error_code;
   }

   //===========================================

   ctx_49D4DD9B alloc_ctx00;
   alloc_ctx00.unk0 = 0x14;
   alloc_ctx00.unk4 = 0;
   alloc_ctx00.unk8 = 0x20;
   alloc_ctx00.unkC = 0;
   alloc_ctx00.unk10 = 0;

   mount_ctx_t * mctx_alloc0 = (mount_ctx_t *)SceSysmemForDriver_sceKernelAllocHeapMemory3ForKernel_49D4DD9B(SceAppMgrMount_pool_22A0008, 0x24u, &alloc_ctx00);
   if (mctx_alloc0 == 0)
      return 0x80801006;

   memset(mctx_alloc0, 0, 0x24u);

   //===========================================

   mount_ctx_t *mctx_alloc1 = mctx_alloc0;
   memcpy(mctx_alloc1->mountDrive, mount_drive_input, 0x10);

   //===========================================
   
   ctx_49D4DD9B alloc_ctx01;
   alloc_ctx01.unk0 = 0x14;
   alloc_ctx01.unk4 = 0;
   alloc_ctx01.unk8 = 0x20;
   alloc_ctx01.unkC = 0;
   alloc_ctx01.unk10 = 0;

   char *physical_path_copy = (char *)SceSysmemForDriver_sceKernelAllocHeapMemory3ForKernel_49D4DD9B(SceAppMgrMount_pool_22A0008, 0x124u, &alloc_ctx01);
   char *physical_path_copy2 = physical_path_copy;
   if (physical_path_copy == 0)
   {
      return label_21_cleanup(pid, mctx_alloc1, physical_path_copy2, 0x80801006);
   }

   memset(physical_path_copy, 0, 0x124u);

   //===========================================

   int res0 = verify_copy_23D5A10(physical_path, physical_path_copy2);
   if (res0 > 0)
   {
      return label_21_cleanup(pid, mctx_alloc1, physical_path_copy2, res0);
   }

   if (strnlen(physical_path_copy2, 0x124) >= 0x124)
   {
      return label_21_cleanup(pid, mctx_alloc1, physical_path_copy2, 0x80800001);
   }

   //===========================================

   SceSelfAuthInfo auth_ctx0;

   int res1 = SceProcessmgrForKernel_sceKernelGetSelfAuthInfoForKernel_e4c83b0d(pid, &auth_ctx0);
   if (res1 < 0)
   {
      if (res1 != 0x80800003)
         return label_21_cleanup(pid, mctx_alloc1, physical_path_copy2, res1);
      else
         return label_113_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point);
   }

   SceUInt64 auth_id = auth_ctx0.auth_id;

   //===========================================

   if (mount_point_entries_22D470C)
   {
      int error_code = 0;
      if(!entries_stuff(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, auth_id, error_code))
         return error_code;
   }
   
   //===========================================

   ctx_49D4DD9B alloc_ctx02;
   alloc_ctx02.unk4 = 0;
   alloc_ctx02.unkC = 0;
   alloc_ctx02.unk10 = 0;
   alloc_ctx02.unk0 = 20;
   alloc_ctx02.unk8 = 32;

   mount_point_data_entry *mpd_entry_alloc0 = (mount_point_data_entry *)SceSysmemForDriver_sceKernelAllocHeapMemory3ForKernel_49D4DD9B(SceAppMgrMount_pool_22A0008, 0x1D0u, &alloc_ctx02);
   mount_point_data_entry *mpd_entry_alloc2 = mpd_entry_alloc0;
   if (!mpd_entry_alloc0)
   {
      mctx_alloc1->mnt_entry = mpd_entry_alloc2;
      return label_21_cleanup(pid, mctx_alloc1, physical_path_copy2, 0x80801006);
   }

   //===========================================

   //init entry

   mount_point_data_entry *mpd_entry_alloc1 = mpd_entry_alloc0;
   memset(mpd_entry_alloc0, 0, 0x1D0u);

   mpd_entry_alloc1->mount_id = mount_id;
   strncpy(mpd_entry_alloc1->path, physical_path_copy2, 0x123u);
   memcpy(mpd_entry_alloc2->title_id, title_id, 0x10);

   //===========================================

   if (mount_id == 0x258)
   {
      return handle_mount_id_258(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, auth_id);
   }
   
   //===========================================

   char * mountpoint = mpd_entry_alloc1->path;

   char *gen_pfs_drive0 = mpd_entry_alloc2->gen_mount_point;
   int result2 = proc_generate_random_path_23D4FBC(PD_str_2404BBC, mpd_entry_alloc2->gen_mount_point);
   if (result2 < 0)
   {
      return mpd_cleanup(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, result2 != 0x80800003, result2);
   }

   if (strncmp(mountpoint, "host0:", 6u) == 0)
      mpd_entry_alloc2->gen_mount_point[0] = 0;

   unsigned int mount_id0 = mpd_entry_alloc2->mount_id;

   //===========================================
  
   return create_mountpoint_core(pid, mount_id, mctx_alloc1, mount_ctx_holder, physical_path_copy2, mount_drive_input, gen_mount_point, mpd_entry_alloc2, auth_id, mount_id0, klicensee, mountpoint, gen_pfs_drive0);
}

//----------------

void * alloc_mem_23DDFF8(SceSize size)
{
   return 0;
}

int get_klicensee_23D642C(char *rif_file_path, rif_info *rif_info_arg)
{
   return 0;
}

int sceAppMgrCheckRifGD_base_23D9704(char *path, char *titleid, void *dest_with_klicensee)
{
   return 0;
}

int check_package_bin_and_clearsign_23D6314(char *physical_path, int *unk1)
{
   return 0;
}

int get_patch_path_23D6A48(char *path, char *titleId, int some_flag, char *prefix, char *result_path)
{
   return 0;
}

int w_unmount_23D8E80(SceUID pid, mount_ctx_holder_t *mount_ctx_holder, char *gen_mount_point, int umountArg)
{
   return 0;
}

ctx_23C2960 global_contexts_22A0500[20];

int w_SceAppMgrForDriver_sceAppMgrGameDataMountForDriver_ce356b2d(char *app_path, char *patch_path, char *rif_file_path, char *mount_point, char* physical_path_copy, char* alloc_buffer, phys_ctx_t *gdat_ctx)
{
   char md_mount_drive[16];
   char md_mount_point[16];

   memset(md_mount_drive, 0, 0x10);
   memset(md_mount_point, 0, 0x10);

   int last_error;

   global_ctx_item *gctxi = get_global_ctx_item_23C2DE0(global_contexts_22A0500, SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a());

   if (!gctxi)
      return 0x80801002;

   //not sure what this lookup is supposed to do

   last_error = verify_copy_23D5A10(app_path, physical_path_copy);
   if(last_error < 0)
   {
      if (last_error != 0x80800002 )
      {
         //weird check - last_error is already < 0
         if (!last_error)
            return 0x80800017;
         else
            return last_error;
      }
   }
   else
   {
      mount_point_data_entry *mpe = mount_point_entries_22D470C;
      if (mpe)
      {
         bool mpe_found = false;

         // lookup first mpe entry that has id not 0x384 and path not equal to physical path
         while (mpe->mount_id != 0x384 || strncmp(mpe->path, physical_path_copy, 0x124u))
         {
            mpe = mpe->next;
            if (!mpe)
            {
               mpe_found = true;
               break;
            }
         }

         if(!mpe_found)
            return 0x80800017;
      }
   }

   // read and parse param sfo first time - ignore overlay

   char* param_sfo_path = alloc_buffer;
   _snprintf(param_sfo_path, 0x124u, "%s/%s", app_path, "sce_sys/param.sfo");
   
   int prev_perm = SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(0x80);
   last_error = proc_parse_param_sfo_23D5028(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), param_sfo_path, 1, gdat_ctx);
   SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(prev_perm);

   if (last_error < 0)
   {
      if (last_error == 0x80010002)
         last_error = 0x8080000D;

      return last_error;
   }

   // check if clearsign exists

   int prev_perm2 = SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(0x80);
   int clearsign_exists = clearsign_exists_23D9A4C(app_path);
   SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(prev_perm2);

   // retrieve klicensee if clearsign exists

   if (clearsign_exists)                       
   {
      if (rif_file_path)
      {
         last_error = get_klicensee_23D642C(rif_file_path, &gdat_ctx->rif);
         if (last_error < 0)
            return last_error;
      }
      else
      {
         last_error = sceAppMgrCheckRifGD_base_23D9704(app_path, gdat_ctx->titleId_378, &gdat_ctx->rif);
         if (last_error < 0)
            return last_error;
      }

      //check package - maybe drm free check? (since zeroes dec_rif_key below)

      int package_check_flag = 1;

      int prev_perm3 = SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(128);
      last_error = check_package_bin_and_clearsign_23D6314(app_path, &package_check_flag);
      SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(prev_perm3);
      
      if(last_error < 0)
         return last_error;

      if(package_check_flag)
      {
         memset(gdat_ctx->rif.dec_rif_key, 0, 0x10u);
      }
   }

   // generate random mount drive

   last_error = proc_generate_random_path_23D4FBC("gp", md_mount_drive);
   if (last_error < 0)
      return last_error;

   // if generation was successful

   md_mount_drive[13] = 'd';
   md_mount_drive[14] = ':';
   md_mount_drive[15] = 0;
       
   // mount physical path (probably XX0:app/ variants)

   last_error = create_mountpoint_base_23D9B50(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), 
                                               &gctxi->unk_558.mctx_hldr_28, 
                                               0x3E8, 
                                               gdat_ctx->titleId_378, 
                                               app_path, 
                                               md_mount_drive, 
                                               gdat_ctx->rif.dec_rif_key, 
                                               md_mount_point);

   if(last_error < 0)
      return last_error;

   // read and parse param sfo second time - do not ignore overlay

   last_error = proc_parse_param_sfo_23D5028(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), param_sfo_path, 0, gdat_ctx);
   if(last_error < 0)
   {
      w_unmount_23D8E80(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), &gctxi->unk_558.mctx_hldr_28, md_mount_point, 0);
      return last_error;
   }

   // finally copy temp mount point to result

   memcpy(mount_point, md_mount_point, 0x10);

   //try to mount patch directory

   char* patch_path_copy = alloc_buffer;

   //if path is provided or not

   if(patch_path)
   {
      strncpy(patch_path_copy, patch_path, 0x124u);
      patch_path_copy[291] = 0;

      // simple check that dir exists

      SceIoStat stat;
      int prev_perm4 = SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(128);
      int stat_res0 = SceIofilemgrForDriver_sceIoGetstatForDriver_75c96d25(patch_path_copy, &stat);
      SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(prev_perm4);
      
      //try to mount if directory exists

      if(stat_res0 >= 0)
      {
         last_error = create_mountpoint_base_23D9B50(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), 
                                                     &gctxi->unk_558.mctx_hldr_28, 
                                                     0x3E9, 
                                                     gdat_ctx->titleId_378, 
                                                     patch_path_copy, 
                                                     md_mount_drive, 
                                                     gdat_ctx->rif.dec_rif_key, 
                                                     md_mount_point);

         if(last_error < 0)
         {
            //unmount previous app_path if patch directory mount has failed - this is an error

            w_unmount_23D8E80(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), &gctxi->unk_558.mctx_hldr_28, md_mount_point, 0);
            return last_error;
         }
         else
         {
            //copy new temp mount point - this is success

            memcpy(mount_point, md_mount_point, 0x10);
            return last_error;
         }
      }
      else
      {
         //not sure what is this check for invalid - maybe you can set an argument as invalid?

         int cmp_res = strncmp(patch_path_copy, "invalid:", 9u);
         if (cmp_res)
         {
            //unmount previous app_path if patch directory was invalid

            w_unmount_23D8E80(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), &gctxi->unk_558.mctx_hldr_28, md_mount_point, 0);
            return 0x8080000F;
         }
         else
         {
            //do not unmount previous mount of app_path if patch directory did not exist - this is still a success

            return 0;
         }
      }
   }
   else
   {
      //if path is not provided - try to constuct it

      int get_patch_res = get_patch_path_23D6A48(app_path, gdat_ctx->titleid_388, gdat_ctx->flag_29C, gdat_ctx->prefix_298, patch_path_copy);
      if (get_patch_res >= 0)
      {
         // simple check that dir exists

         SceIoStat stat;
         int prev_perm5 = SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(128);
         int stat_res1 = SceIofilemgrForDriver_sceIoGetstatForDriver_75c96d25(patch_path_copy, &stat);
         SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(prev_perm5);
         
         if (stat_res1 >= 0)
         {
            last_error = create_mountpoint_base_23D9B50(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), 
                                                        &gctxi->unk_558.mctx_hldr_28, 
                                                        0x3E9, 
                                                        gdat_ctx->titleId_378, 
                                                        patch_path_copy, 
                                                        md_mount_drive, 
                                                        gdat_ctx->rif.dec_rif_key, 
                                                        md_mount_point);
            if (last_error < 0)
            {
               //unmount previous app_path if patch directory mount has failed - this is an error

               w_unmount_23D8E80(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), &gctxi->unk_558.mctx_hldr_28, md_mount_point, 0);
               return last_error;
            }
            else
            {
               //copy new temp mount point - this is success

               memcpy(mount_point, md_mount_point, 0x10);
               return last_error;
            }
         }
         else
         {
            //do not unmount previous mount of app_path if patch directory did not exist - this is still a success

            return 0;
         }
      }
      else
      {
         //do not unmount previous mount of app_path if unable to construct path to patch directory - this is still a success

         return 0;
      }
   }
}

//a user probably have to setup an overlay with fios2 prior to calling this function
//if he wants to use a patch_path argument

int SceAppMgrForDriver_sceAppMgrGameDataMountForDriver_ce356b2d(char *app_path, char *patch_path, char *rif_file_path, char *mount_point)
{ 
   int cookie = var_009EA004;

   //check args

   if (mount_point == 0 || app_path == 0)
      return var_009EA004 == cookie ? 0x80800001 : STACK_CHECK_FAIL;

   //lock mutex

   int lock_res = SceThreadmgrForDriver_ksceKernelLockMutex_16AC80C5(SceAppMgrMount_mutex_22A000C, 1, 0);
   if (lock_res < 0)
      return var_009EA004 == cookie ? lock_res : STACK_CHECK_FAIL;

   //allocate buffer

   ctx_49D4DD9B alloc_ctx0;
   alloc_ctx0.unk0 = 0x14;
   alloc_ctx0.unk4 = 0;
   alloc_ctx0.unkC = 0;
   alloc_ctx0.unk10 = 0;
   alloc_ctx0.unk8 = 0x20;

   char* physical_path_copy = (char*)SceSysmemForDriver_sceKernelAllocHeapMemory3ForDriver_49D4DD9B(SceAppMgrMount_pool_22A0008, 0x124u, &alloc_ctx0);
   if (!physical_path_copy)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return var_009EA004 == cookie ? 0x80801006 : STACK_CHECK_FAIL;
   }

   //allocate buffer

   ctx_49D4DD9B alloc_ctx1;
   alloc_ctx1.unk0 = 20;
   alloc_ctx1.unk4 = 0;
   alloc_ctx1.unk8 = 32;
   alloc_ctx1.unkC = 0;
   alloc_ctx1.unk10 = 0;
   
   char* alloc_buffer = (char *)SceSysmemForDriver_sceKernelAllocHeapMemory3ForDriver_49D4DD9B(SceAppMgrMount_pool_22A0008, 0x124u, &alloc_ctx1);
   if (!alloc_buffer)
   {
      SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, physical_path_copy);

      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return var_009EA004 == cookie ? 0x80801006 : STACK_CHECK_FAIL;
   }

   //allocate object

   phys_ctx_t *gdat_ctx = (phys_ctx_t *)alloc_mem_23DDFF8(0x508u);
   if(!gdat_ctx)
   {
      SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, physical_path_copy);
      SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, alloc_buffer);

      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return var_009EA004 == cookie ? 0x80801006 : STACK_CHECK_FAIL;
   }

   memset(gdat_ctx, 0, 0x508u);

   int result = w_SceAppMgrForDriver_sceAppMgrGameDataMountForDriver_ce356b2d(app_path, patch_path, rif_file_path, mount_point, physical_path_copy, alloc_buffer, gdat_ctx);

   SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, physical_path_copy);
   SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, alloc_buffer);
   SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, gdat_ctx);

   SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
   return var_009EA004 == cookie ? result : STACK_CHECK_FAIL;
}

