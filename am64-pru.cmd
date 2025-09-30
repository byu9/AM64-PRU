/*
 * This linker script is intended for PRU0 or PRU1 on the AM6442.
 *
 * There are 12 PRU cores on the AM6442
 *    PRU_ICSSG0 subsystem:
 *       Slice 0: PRU0, TX_PRU0, RTU_PRU0
 *       Slice 1: PRU1, TX_PRU1, RTU_PRU1
 *
 *    PRU_ICSSG1 subsystem:
 *       Slice 0: PRU0, TX_PRU0, RTU_PRU0
 *       Slice 1: PRU1, TX_PRU1, RTU_PRU1
 *
 *
 * John Yu
 * byu9@ncsu.edu
 * 2/18/2025
 */
MEMORY
{
	PAGE 0:
		IM (RX):   o=0x00000000, l=12K  // Instruction memory of the local PRU

	PAGE 1:
		DM_LOCAL  (RW): o=0x00000000, l=8K   // Data memory of the local PRU
		DM_PEER   (RW): o=0x00002000, l=8K   // Data memory of the peer PRU
		RAT0      (RW): o=0x00008000, l=4K   // Region-based address translation
		RAT1      (RW): o=0x00009000, l=4K   // Region-based address translation
		DM_SHARED (RW): o=0x00010000, l=64K  // Data memory shared between the PRUs
}

SECTIONS
{
	/*
	 * Make sure the enrty point of the C runtime system is placed
	 * at the beginning of the instruction space. By default the PRU cores fetch
	 * instructions at the beginnig of the instruction memory upon reset.
	 *
	 * This is only important when loading program from the debugger, since
	 * Linux can determine the entry point address using information from the
	 * PRU firmware ELF header.
	 */
	.text:_c_int00* > 0x0, PAGE 0

	.text    > IM, PAGE 0
	.cinit   > IM, PAGE 0
	.rodata  > IM, PAGE 0
	.stack fill=0  > DM_LOCAL, PAGE 1
    .bss     > DM_LOCAL, PAGE 1
    .farbss  > DM_LOCAL, PAGE 1
    .data    > DM_LOCAL, PAGE 1
    .fardata > DM_LOCAL, PAGE 1
    .noinit (NOINIT) > DM_LOCAL, PAGE 1
}
