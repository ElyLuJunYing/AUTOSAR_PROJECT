/* ----------------------------------------------------------------------
 *  Vector BRS linker file for platform ARM and compiler GHS
 * ---------------------------------------------------------------------- */

 /* Linker Constants */
DEFAULTS {
}

MEMORY {
    /* Derivative specific section allocation */
  RAM_ETH  : ORIGIN = 0x00000000, LENGTH = 0x0
  VECTORS  : ORIGIN = 0x00000000, LENGTH = 0x400
  RESERVED : ORIGIN = 0x00000400, LENGTH = 0x0C
  OPTBYTES : ORIGIN = 0x0000040C, LENGTH = 0x04
  FLASH    : ORIGIN = 0x00000500, LENGTH = 2048k - 0x500
  RAM      : ORIGIN = 0x1FFE0000, LENGTH = (0x0003F000 - 0x10 - 0x30000)
  HEAP     : ORIGIN = (0x1FFE0000 + 0x0003F000 - 0x30000 - 0x10), LENGTH = 0x10
  STACK    : ORIGIN = (0x1FFE0000 + 0x0003F000 - 0x30000), LENGTH = 0x30000
}

SECTIONS {
  /* ROM OR RAM sections depends on PROGRAM_MEMORY */
  . = ADDR(FLASH);
  __CODE_START = .;
  .STARTUP                       ALIGN(16)
 : > FLASH
 .romdata ROM(.data) : > FLASH

#define OS_LINK_CODE
#define OS_LINK_CALLOUT_CODE
#define OS_LINK_INTVEC_CODE
  #include "./GenData/Os_Link.ld"
#define OS_LINK_CALLOUT_CODE
#define OS_LINK_EXCVEC_CODE
#define OS_LINK_INTVEC_CODE
  #include "./GenData/Os_Link_Core0.ld"

  .text   ALIGN(16)                       : > .
  .ghtws.text                              : > .
  __CODE_END   = .;

  /* Constants ---------------------------------------------------- */
  __CONST_START = .;
  .robase                                  : > .
  .rodata                                  : > .

#define OS_LINK_CONST
  #include "./GenData/Os_Link.ld"
#define OS_LINK_CONST
  #include "./GenData/Os_Link_Core0.ld"


  .picbase                   : > .
  .intercall                 : > . /* Used by Thumb-capable processor variants,       */
  .interfunc                 : > . /* to create correct mixed-mode applications       */
  .fixaddr                   : > . /* enables the Green Hills startup code, to        */
  .fixtype                   : > . /* relocate PIC/PID initializers of data variables */
  .secinfo                   : > . /* Information on section layout of the program    */

  .pidbase                   : > .
  .syscall         ALIGN(16) : > .
  __CONST_END = .;

 .OPTIONBYTES   : > OPTBYTES
  .data                                    : > RAM

  __bss_start = .;
  .bss             ALIGN(16) : > .

#define OS_LINK_SPINLOCKS
  #include "./GenData/Os_Link.ld"
#define OS_LINK_SPINLOCKS
  #include "./GenData/Os_Link_Core0.ld"


#define OS_LINK_VAR_KERNEL
#define OS_LINK_KERNEL_BARRIERS
#define OS_LINK_KERNEL_CORESTATUS
#define OS_LINK_VAR_GLOBALSHARED
  #include "./GenData/Os_Link.ld"
#define OS_LINK_VAR_APP_OSAPPLICATION_NONTRUSTED_CORE0
#define OS_LINK_VAR_APP_OSAPPLICATION_TRUSTED_CORE0
#define OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0
#define OS_LINK_VAR_KERNEL
#define OS_LINK_VAR_TASK
#define OS_LINK_VAR_ISR
#define OS_LINK_KERNEL_BARRIERS
#define OS_LINK_KERNEL_TRACE
#define OS_LINK_KERNEL_CORESTATUS
  #include "./GenData/Os_Link_Core0.ld"


  .dynbss                                  : > .
  COMMON                                   : > .
  .scommon                                 : > .

  __bss_end = .;
  . = ALIGN(0x4);

  _eth_start                               : > RAM_ETH
  .EthDesc align(16)                       : > .
  .EthBuffers align(16)                    : > .
  _eth_end =.;

  _placeholder_start_address_vectortable  : > VECTORS
#define OS_LINK_EXCVEC_CONST
   #include "./GenData/Os_Link_Core0.ld"
#define OS_LINK_INTVEC_CONST
   #include "./GenData/OS_Link.ld"
#define OS_LINK_INTVEC_CONST
   #include "./GenData/Os_Link_Core0.ld"


  /* HEAP */
  .HEAP                                    : > HEAP

  /* STACK */
  _placeholder_start_address_stack         : > STACK
  __STACK_START = .;
  __stack_start = .;

#define OS_LINK_KERNEL_STACKS
  #include "./GenData/Os_Link_Core0_Stacks.ld"


  __STACK_END = .;
  __STACK_INIT = .;
  __stack_top = .;

  RC_SDATA_SRC    = ADDR(.romdata);
  RC_SDATA_DEST   = ADDR(.data);
  RC_SDATA_SIZE   = SIZEOF(.data);
}
