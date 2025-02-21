#ifndef H_422EC606_EE2E_11EF_9F1A_F875A456212A
#define H_422EC606_EE2E_11EF_9F1A_F875A456212A

#include <stdint.h>

/*
 * PRU memory-mapped registers from the point-of-view of PRUs
 * Scraped one-by-one from tables in TI Literature SPRUIM2H.
 *
 * John Yu
 * byu9@ncsu.edu
 * 2/18/2025
 */



#define PRU_INTC         ((volatile struct pru_intc*)    0x00020000U)

#define PRU0_CONTROL     ((volatile struct pru_control*) 0x00022000U)
#define PRU0_DEBUG       ((volatile struct pru_debug*)   0x00022400U)
#define PRU1_CONTROL     ((volatile struct pru_control*) 0x00024000U)
#define PRU1_DEBUG       ((volatile struct pru_debug*)   0x00024400U)

#define PRU_CONFIG       ((volatile struct pru_config*)  0x00026000U)
#define PRU_UART0        ((volatile struct pru_uart*)    0x00028000U)
#define PRU_IEP0         ((volatile struct pru_iep*)     0x0002E000U)
#define PRU_ECAP0        ((volatile struct pru_ecap*)    0x00030000U)
#define PRU_MIIRT_CFG    ((volatile struct pru_miirt*)   0x00032000U)
#define PRU_MDIO         ((volatile struct pru_mdio*)    0x00032400U)



/*
 * __attribute__((packed)):
 *     Prevents the compiler from adding padding between structure members.
 *
 * __attribute__((aligned)):
 *     Tells the compiler to emit load/store instructions matching the size
 *     of the member.
 */



struct __attribute__((aligned, packed)) pru_control
{
    /* Table 6-500 in SPRUIM2H */
    // 0x00 - 0x0C
    uint32_t PRU_CONTROL;    // Offset 0h - Control Register
    uint32_t PRU_STATUS;     // Offset 4h - Status Register
    uint32_t PRU_WAKEUP_EN;  // Offset 8h - Wakeup Enable Register
    uint32_t PRU_CYCLE;      // Offset Ch - Cycle Count

    // 0x10 - 0x1C
    uint32_t PRU_STALL;      // Offset 10h - Stall Count
    uint32_t reserved1[3];

    // 0x20 - 0x2C
    uint32_t PRU_CTBIR0;     // Offset 20h - Constant Table Block Index Register 0
    uint32_t PRU_CTBIR1;     // Offset 24h - Constant Table Block Index Register 1
    uint32_t PRU_CTPPR0;     // Offset 28h - Constant Table Programmable Pointer Register 0
    uint32_t PRU_CTPPR1;     // Offset 2Ch - Constant Table Programmable Pointer Register 1
};



struct __attribute__((aligned, packed)) pru_intc
{
    // 0x00 - 0x0C
    uint32_t REVISION_REG;  // Offset 0h - Revision Register
    uint32_t CONTROL_REG;   // Offset 4h - Control Register
    uint32_t reserved1[2];

    // 0x10 - 0x1C
    uint32_t GLOBAL_ENABLE_HINT_REG; // Offset 10h - Global Host Int Enable Register
    uint32_t reserved2[2];
    uint32_t GLB_NEST_LEVEL_REG;     // Offset 1Ch - Global Nesting Level Register

    // 0x20 - 0x2C
    uint32_t STATUS_SET_INDEX_REG;  // Offset 20h - Status Set Index Register
    uint32_t STATUS_CLR_INDEX_REG;  // Offset 24h - Status Clear Index Register
    uint32_t ENABLE_SET_INDEX_REG;  // Offset 28h - Enable Set Index Register
    uint32_t ENABLE_CLR_INDEX_REG;  // Offset 2Ch - Enable Clear Index Register

    // 0x30 - 0x3C
    uint32_t reserved3[1];
    uint32_t HINT_ENABLE_SET_INDEX_REG; // Offset 34h - Host Int Enable Set Index Register
    uint32_t HINT_ENABLE_CLR_INDEX_REG; // Offset 38h - Host Int Enable Clear Index Register
    uint32_t reserved4[1];

    // 0x40 - 0x7C
    uint32_t reserved5[16];

    // 0x80 - 0x8C
    uint32_t GLB_PRI_INTR_REG; // Offset 80h - Global Prioritized Interrupt Register
    uint32_t reserved6[3];

    // 0x90 - 0x19C
    uint32_t reserved7[92];

    // 0x200 - 0x20C
    uint32_t RAW_STATUS_REG0;  // Offset 200h - Raw Status Register 0
    uint32_t RAW_STATUS_REG1;  // Offset 204h - Raw Status Register 1
    uint32_t RAW_STATUS_REG2;  // Offset 208h - Raw Status Register 2
    uint32_t RAW_STATUS_REG3;  // Offset 20Ch - Raw Status Register 3

    // 0x210 - 0x21C
    uint32_t RAW_STATUS_REG4;  // Offset 210h - Raw Status Register 4
    uint32_t reserved8[3];

    // 0x220 - 0x27C
    uint32_t reserved9[24];

    // 0x280 - 0x28C
    uint32_t ENA_STATUS_REG0;  // Offset 280h - Enabled Status Register 0
    uint32_t ENA_STATUS_REG1;  // Offset 284h - Enabled Status Register 1
    uint32_t ENA_STATUS_REG2;  // Offset 288h - Enabled Status Register 2
    uint32_t ENA_STATUS_REG3;  // Offset 28Ch - Enabled Status Register 3

    // 0x290 - 0x29C
    uint32_t ENA_STATUS_REG4;  // Offset 290h - Enabled Status Register 4
    uint32_t reserved10[3];

    // 0x300 - 0x30C
    uint32_t ENABLE_REG0;  // Offset 300h - Enable Register 0
    uint32_t ENABLE_REG1;  // Offset 304h - Enable Register 1
    uint32_t ENABLE_REG2;  // Offset 308h - Enable Register 2
    uint32_t ENABLE_REG3;  // Offset 30Ch - Enable Register 3

    // 0x310 - 0x31C
    uint32_t ENABLE_REG4;  // Offset 310h - Enable Register 4
    uint32_t reserved11[3];

    // 0x380 - 0x38C
    uint32_t ENABLE_CLR_REG0;  // Offset 380h - Enable Clear Register 0
    uint32_t ENABLE_CLR_REG1;  // Offset 384h - Enable Clear Register 1
    uint32_t ENABLE_CLR_REG2;  // Offset 388h - Enable Clear Register 2
    uint32_t ENABLE_CLR_REG3;  // Offset 38Ch - Enable Clear Register 3

    // 0x390 - 0x39C
    uint32_t ENABLE_CLR_REG4;  // Offset 390h - Enable Clear Register 4
    uint32_t reserved12[3];

    // 0x400 - 0x40C
    uint32_t CH_MAP_REG0;  // Offset  400h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG1;  // Offset  404h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG2;  // Offset  408h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG3;  // Offset  40Ch - Interrupt Channel Map Register

    // 0x410 - 0x41C
    uint32_t CH_MAP_REG4;  // Offset  410h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG5;  // Offset  414h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG6;  // Offset  418h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG7;  // Offset  41Ch - Interrupt Channel Map Register

    // 0x420 - 0x42C
    uint32_t CH_MAP_REG8;  // Offset  420h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG9;  // Offset  424h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG10;  // Offset  428h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG11;  // Offset  42Ch - Interrupt Channel Map Register

    // 0x430 - 0x43C
    uint32_t CH_MAP_REG12;  // Offset  430h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG13;  // Offset  434h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG14;  // Offset  438h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG15;  // Offset  43Ch - Interrupt Channel Map Register

    // 0x440 - 0x44C
    uint32_t CH_MAP_REG16;  // Offset  440h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG17;  // Offset  444h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG18;  // Offset  448h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG19;  // Offset  44Ch - Interrupt Channel Map Register

    // 0x450 - 0x45C
    uint32_t CH_MAP_REG20;  // Offset  450h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG21;  // Offset  454h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG22;  // Offset  458h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG23;  // Offset  45Ch - Interrupt Channel Map Register

    // 0x460 - 0x46C
    uint32_t CH_MAP_REG24;  // Offset 460h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG25;  // Offset 464h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG26;  // Offset 468h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG27;  // Offset 46Ch - Interrupt Channel Map Register

    // 0x470 - 0x47C
    uint32_t CH_MAP_REG28;  // Offset 470h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG29;  // Offset 474h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG30;  // Offset 478h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG31;  // Offset 47Ch - Interrupt Channel Map Register

    // 0x480 - 0x48C
    uint32_t CH_MAP_REG32;  // Offset 480h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG33;  // Offset 484h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG34;  // Offset 488h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG35;  // Offset 48Ch - Interrupt Channel Map Register

    // 0x490 - 0x49C
    uint32_t CH_MAP_REG36;  // Offset 490h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG37;  // Offset 494h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG38;  // Offset 498h - Interrupt Channel Map Register
    uint32_t CH_MAP_REG39;  // Offset 49Ch - Interrupt Channel Map Register

    // 0x4A0 - 0x7FC
    uint32_t reserved13[216];

    // 0x800 - 0x80C
    uint32_t HINT_MAP_REG0;  // Offset 800h - Host Interrupt Map Register
    uint32_t HINT_MAP_REG1;  // Offset 804h - Host Interrupt Map Register
    uint32_t HINT_MAP_REG2;  // Offset 808h - Host Interrupt Map Register
    uint32_t HINT_MAP_REG3;  // Offset 80Ch - Host Interrupt Map Register

    // 0x810 - 0x81C
    uint32_t HINT_MAP_REG4;  // Offset 810h - Host Interrupt Map Register
    uint32_t reserved14[3];

    // 0x820 - 0x8FC
    uint32_t reserved15[56];

    // 0x900 - 0x90C
    uint32_t PRI_HINT_REG0; // Offset 900h - Host Int 0 Prioritized Interrupt Register
    uint32_t PRI_HINT_REG1; // Offset 904h - Host Int 1 Prioritized Interrupt Register
    uint32_t PRI_HINT_REG2; // Offset 908h - Host Int 2 Prioritized Interrupt Register
    uint32_t PRI_HINT_REG3; // Offset 90Ch - Host Int 3 Prioritized Interrupt Register

    // 0x910 - 0x91C
    uint32_t PRI_HINT_REG4; // Offset 910h - Host Int 4 Prioritized Interrupt Register
    uint32_t PRI_HINT_REG5; // Offset 914h - Host Int 5 Prioritized Interrupt Register
    uint32_t PRI_HINT_REG6; // Offset 918h - Host Int 6 Prioritized Interrupt Register
    uint32_t PRI_HINT_REG7; // Offset 91Ch - Host Int 7 Prioritized Interrupt Register

    // 0x920 - 0x92C
    uint32_t PRI_HINT_REG8; // Offset 920h - Host Int 8 Prioritized Interrupt Register
    uint32_t PRI_HINT_REG9; // Offset 924h - Host Int 9 Prioritized Interrupt Register
    uint32_t PRI_HINT_REG10; // Offset 928h - Host Int 10 Prioritized Interrupt Register
    uint32_t PRI_HINT_REG11; // Offset  92Ch - Host Int 11 Prioritized Interrupt Register

    // 0x930 - 0x93C
    uint32_t PRI_HINT_REG12; // Offset  930h - Host Int 12 Prioritized Interrupt Register
    uint32_t PRI_HINT_REG13; // Offset  934h - Host Int 13 Prioritized Interrupt Register
    uint32_t PRI_HINT_REG14; // Offset  938h - Host Int 14 Prioritized Interrupt Register
    uint32_t PRI_HINT_REG15; // Offset  93Ch - Host Int 15 Prioritized Interrupt Register

    // 0x940 - 0x94C
    uint32_t PRI_HINT_REG16; // Offset  940h - Host Int 16 Prioritized Interrupt Register
    uint32_t PRI_HINT_REG17; // Offset  944h - Host Int 17 Prioritized Interrupt Register
    uint32_t PRI_HINT_REG18; // Offset  948h - Host Int 18 Prioritized Interrupt Register
    uint32_t PRI_HINT_REG19; // Offset  94Ch - Host Int 19 Prioritized Interrupt Register

    // 0x950 - 0xCFC
    uint32_t reserved16[236];

    // 0xD00 - 0xD0C
    uint32_t POLARITY_REG0;  // Offset  D00h - Polarity Register 0
    uint32_t POLARITY_REG1;  // Offset  D04h - Polarity Register 1
    uint32_t POLARITY_REG2;  // Offset  D08h - Polarity Register 2
    uint32_t POLARITY_REG3;  // Offset  D0Ch - Polarity Register 3

    // 0xD10 - 0xD1C
    uint32_t POLARITY_REG4;  // Offset  D10h - Polarity Register 4
    uint32_t reserved17[3];

    // 0xD20 - 0xD7C
    uint32_t reserved18[24];

    // 0xD80 - 0xD8C
    uint32_t TYPE_REG0;  // Offset  D80h - Type Register 0
    uint32_t TYPE_REG1;  // Offset  D84h - Type Register 1
    uint32_t TYPE_REG2;  // Offset  D88h - Type Register 2
    uint32_t TYPE_REG3;  // Offset  D8Ch - Type Register 3

    // 0xD90 - 0xD9C
    uint32_t TYPE_REG4;  // Offset  D90h - Type Register 4
    uint32_t reserved19[3];

    // 0xDA0 - 0x100C
    uint32_t reserved20[216];

    // 0x1100 - 0x110C
    uint32_t NEST_LEVEL_REG0; // Offset  1100h - Host Int 0 Nesting Level Register
    uint32_t NEST_LEVEL_REG1; // Offset  1104h - Host Int 1 Nesting Level Register
    uint32_t NEST_LEVEL_REG2; // Offset  1108h - Host Int 2 Nesting Level Register
    uint32_t NEST_LEVEL_REG3; // Offset  110Ch - Host Int 3 Nesting Level Register

    // 0x1110 - 0x111C
    uint32_t NEST_LEVEL_REG4; // Offset  1110h - Host Int 4 Nesting Level Register
    uint32_t NEST_LEVEL_REG5; // Offset  1114h - Host Int 5 Nesting Level Register
    uint32_t NEST_LEVEL_REG6; // Offset  1118h - Host Int 6 Nesting Level Register
    uint32_t NEST_LEVEL_REG7; // Offset  111Ch - Host Int 7 Nesting Level Register

    // 0x1120 - 0x112C
    uint32_t NEST_LEVEL_REG8; // Offset  1120h - Host Int 8 Nesting Level Register
    uint32_t NEST_LEVEL_REG9; // Offset  1124h - Host Int 9 Nesting Level Register
    uint32_t NEST_LEVEL_REG10; // Offset  1128h - Host Int 10 Nesting Level Register
    uint32_t NEST_LEVEL_REG11; // Offset  112Ch - Host Int 11 Nesting Level Register

    // 0x1130 - 0x113C
    uint32_t NEST_LEVEL_REG12; // Offset  1130h - Host Int 12 Nesting Level Register
    uint32_t NEST_LEVEL_REG13; // Offset  1134h - Host Int 13 Nesting Level Register
    uint32_t NEST_LEVEL_REG14; // Offset  1138h - Host Int 14 Nesting Level Register
    uint32_t NEST_LEVEL_REG15; // Offset  113Ch - Host Int 15 Nesting Level Register

    // 0x1140 - 0x114C
    uint32_t NEST_LEVEL_REG16; // Offset  1140h - Host Int 16 Nesting Level Register
    uint32_t NEST_LEVEL_REG17; // Offset  1144h - Host Int 17 Nesting Level Register
    uint32_t NEST_LEVEL_REG18; // Offset  1148h - Host Int 18 Nesting Level Register
    uint32_t NEST_LEVEL_REG19; // Offset  114Ch - Host Int 19 Nesting Level Register

    // 0x1500
    uint32_t ENABLE_HINT_REG0;  // Offset  1500h - Host Int Enable Register 0
};



struct __attribute__((aligned, packed)) pru_uart
{
    // 0x00 - 0x0C
    uint32_t UART_RBR_TBR;   // Offset 0h - Receive and Transmit Buffer Registers
    uint32_t UART_INT_EN;    // Offset 4h - UART Interrupt Enable Register
    uint32_t UART_INT_FIFO;  // Offset 8h - Interrupt Identification Register / FIFO Control Register
    uint32_t UART_LCTR;      // Offset Ch - Line Control Register

    // 0x10 - 0x1C
    uint32_t UART_MCTR;     // Offset 10h - Modem Control Register
    uint32_t UART_LSR1;     // Offset 14h - Line Status Register1
    uint32_t UART_MSR;      // Offset 18h - Modem Status Register
    uint32_t UART_SCRATCH;  // Offset 1Ch - UART Scratch Register

    // 0x20 - 0x2C
    uint32_t UART_DIVLSB;  // Offset 20h - UART Divisor Register
    uint32_t UART_DIVMSB;  // Offset 24h - UART Divisor Register
    uint32_t UART_PID;     // Offset 28h - Peripheral ID Register
    uint32_t reserved1[1];

    // 0x30 - 0x34
    uint32_t UART_PWR;   // Offset 30h - UART Power Management and Emulation Register
    uint32_t UART_MODE;  // Offset 34h - UART Mode Definition Register
};



struct __attribute__((aligned, packed)) pru_config
{
    // 0x00 - 0x0C
    uint32_t PID_REG;     // Offset 0h - PID Register
    uint32_t HWDIS_REG;   // Offset 4h - HW Disable Register
    uint32_t GPCFG0_REG;  // Offset 8h - GP Configuration 0 Register
    uint32_t GPCFG1_REG;  // Offset Ch - GP Configuration 1 Register

    // 0x10 - 0x1C
    uint32_t CGR_REG;      // Offset 10h - Clock Gating Register
    uint32_t GPECFG0_REG;  // Offset 14h - GP Enc Configuration 0 Register
    uint32_t GPECFG1_REG;  // Offset 18h - GP Enc Configuration 1 Register
    uint32_t RSTISO_REG;   // Offset 1Ch - Reset Isolation Register

    // 0x20 - 0x2C
    uint32_t MII_RT_REG;   // Offset 2Ch - MII_RT Event Enable Register
    uint32_t reserved1[3];

    // 0x30 - 0x3C
    uint32_t IEPCLK_REG;    // Offset 30h - IEP Configuration Register
    uint32_t SPP_REG;       // Offset 34h - Scratchpad Priority and Shift Register
    uint32_t CORE_SYNC_REG; // Offset 3Ch - CoreSync Configuration Register
    uint32_t reserved2[1];

    // 0x40 - 0x4C
    uint32_t SA_MX_REG;                // Offset 40h - SA Mux Selection Register
    uint32_t PRU0_SD_CFG_REG;          // Offset 44h - SD Config Register
    uint32_t PRU0_SD_CLK_SEL_REG0;     // Offset 48h - PRU0 FD, ACC and Clock Selection Register 0
    uint32_t PRU0_SD_SAMPLE_SIZE_REG0; // Offset 4Ch - PRU0 FD and Over Sample Size Register 0

    // 0x50 - 0x5C
    uint32_t PRU0_SD_CLK_SEL_REG1;     // Offset 50h - PRU0 FD, ACC and Clock Selection Register 1
    uint32_t PRU0_SD_SAMPLE_SIZE_REG1; // Offset 54h - PRU0 FD and Over Sample Size Register 1
    uint32_t PRU0_SD_CLK_SEL_REG2;     // Offset 58h - PRU0 FD, ACC and Clock Selection Register 2
    uint32_t PRU0_SD_SAMPLE_SIZE_REG2; // Offset 5Ch - PRU0 FD and Over Sample Size Register 2

    // 0x60 - 0x6C
    uint32_t PRU0_SD_CLK_SEL_REG3;     // Offset 60h - PRU0 FD, ACC and Clock Selection Register 3
    uint32_t PRU0_SD_SAMPLE_SIZE_REG3; // Offset 64h - PRU0 FD and Over Sample Size Register 3
    uint32_t PRU0_SD_CLK_SEL_REG4;     // Offset 68h - PRU0 FD, ACC and Clock Selection Register 4
    uint32_t PRU0_SD_SAMPLE_SIZE_REG4; // Offset 6Ch - PRU0 FD and Over Sample Size Register 4

    // 0x70 - 0x7C
    uint32_t PRU0_SD_CLK_SEL_REG5;            // Offset 70h - PRU0 FD, ACC and Clock Selection Register 5
    uint32_t ICSSG_PRU0_SD_SAMPLE_SIZE_REG5;  // Offset 74h - PRU0 FD and Over Sample Size Register 5
    uint32_t ICSSG_PRU0_SD_CLK_SEL_REG6;      // Offset 78h - PRU0 FD, ACC and Clock Selection Register 6
    uint32_t ICSSG_PRU0_SD_SAMPLE_SIZE_REG6;  // Offset 7Ch - PRU0 FD and Over Sample Size Register 6

    // 0x80 - 0x8C
    uint32_t ICSSG_PRU0_SD_CLK_SEL_REG7;      // Offset 80h - PRU0 FD, ACC and Clock  Selection Register 7
    uint32_t ICSSG_PRU0_SD_SAMPLE_SIZE_REG7;  // Offset 84h - PRU0 FD and Over Sample Size Register 7
    uint32_t ICSSG_PRU0_SD_CLK_SEL_REG8;      // Offset 88h - PRU0 FD, ACC and Clock Selection Register 8
    uint32_t ICSSG_PRU0_SD_SAMPLE_SIZE_REG8;  // Offset 8Ch - PRU0 FD and Over Sample Size Register 8

    // 0x90 - 0x9C
    uint32_t ICSSG_PRU1_SD_CFG_REG;           // Offset 90h - SD Config Register
    uint32_t ICSSG_PRU1_SD_CLK_SEL_REG0;      // Offset 94h - PRU1 FD, ACC and Clock Selection Register 0
    uint32_t ICSSG_PRU1_SD_SAMPLE_SIZE_REG0;  // Offset 98h - PRU1 FD and Over Sample Size Register 0
    uint32_t ICSSG_PRU1_SD_CLK_SEL_REG1;      // Offset 9Ch - PRU1 FD, ACC and Clock Selection Register 1

    // 0xA0 - 0xAC
    uint32_t ICSSG_PRU1_SD_SAMPLE_SIZE_REG1;  // Offset A0h - PRU1 FD and Over Sample Size Register 1
    uint32_t ICSSG_PRU1_SD_CLK_SEL_REG2;      // Offset A4h - PRU1 FD, ACC and Clock Selection Register 2
    uint32_t ICSSG_PRU1_SD_SAMPLE_SIZE_REG2;  // Offset A8h - PRU1 FD and Over Sample Size Register 2
    uint32_t ICSSG_PRU1_SD_CLK_SEL_REG3;      // Offset ACh - PRU1 FD, ACC and Clock Selection Register 3

    // 0xB0 - 0xBC
    uint32_t ICSSG_PRU1_SD_SAMPLE_SIZE_REG3;  // Offset B0h - PRU1 FD and Over Sample Size Register 3
    uint32_t ICSSG_PRU1_SD_CLK_SEL_REG4;      // Offset B4h - PRU1 FD, ACC and Clock Selection Register 4
    uint32_t ICSSG_PRU1_SD_SAMPLE_SIZE_REG4;  // Offset B8h - PRU1 FD and Over Sample Size Register 4
    uint32_t ICSSG_PRU1_SD_CLK_SEL_REG5;      // Offset BCh - PRU1 FD, ACC and Clock Selection Register 5

    // 0xC0 - 0xCC
    uint32_t ICSSG_PRU1_SD_SAMPLE_SIZE_REG5;  // Offset C0h - PRU1 FD and Over Sample Size Register 5
    uint32_t ICSSG_PRU1_SD_CLK_SEL_REG6;      // Offset C4h - PRU1 FD, ACC and Clock Selection Register 6
    uint32_t ICSSG_PRU1_SD_SAMPLE_SIZE_REG6;  // Offset C8h - PRU1 FD and Over Sample Size Register 6
    uint32_t ICSSG_PRU1_SD_CLK_SEL_REG7;      // Offset CCh - PRU1 FD, ACC and Clock Selection Register 7

    // 0xD0 - 0xDC
    uint32_t ICSSG_PRU1_SD_SAMPLE_SIZE_REG7;  // Offset D0h - PRU1 FD and Over Sample Size Register 7
    uint32_t ICSSG_PRU1_SD_CLK_SEL_REG8;      // Offset D4h - PRU1 FD, ACC and Clock Selection Register 8
    uint32_t ICSSG_PRU1_SD_SAMPLE_SIZE_REG8;  // Offset D8h - PRU1 FD and Over Sample Size Register 8
    uint32_t reserved3[1];

    // 0xE0 - 0xEC
    uint32_t ICSSG_PRU0_ED_RX_CFG_REG;    // Offset E0h - PRU0 ED Receive Global Configuration
    uint32_t ICSSG_PRU0_ED_TX_CFG_REG;    // Offset E4h - PRU0 ED Transmit Global Configuration
    uint32_t ICSSG_PRU0_ED_CH0_CFG0_REG;  // Offset E8h - PRU0 ED Channel 0 Configuration 0
    uint32_t ICSSG_PRU0_ED_CH0_CFG1_REG;  // Offset ECh - PRU0 ED Channel 0 Configuration 1

    // 0xF0 - 0xFC
    uint32_t ICSSG_PRU0_ED_CH1_CFG0_REG;  // Offset F0h - PRU0 ED Channel 1 Configuration 0
    uint32_t ICSSG_PRU0_ED_CH1_CFG1_REG;  // Offset F4h - PRU0 ED Channel 1 Configuration 1
    uint32_t ICSSG_PRU0_ED_CH2_CFG0_REG;  // Offset F8h - PRU0 ED Channel 2 Configuration 0
    uint32_t ICSSG_PRU0_ED_CH2_CFG1_REG;  // Offset FCh - PRU0 ED Channel 2 Configuration 1

    // 0x100 - 0x10C
    uint32_t ICSSG_PRU1_ED_RX_CFG_REG;    // Offset 100h - PRU1 ED Receive Global Configuration
    uint32_t ICSSG_PRU1_ED_TX_CFG_REG;    // Offset 104h - PRU1 ED Transmit Global Configuration
    uint32_t ICSSG_PRU1_ED_CH0_CFG0_REG;  // Offset 108h - PRU1 ED Channel 0 Configuration 0
    uint32_t ICSSG_PRU1_ED_CH0_CFG1_REG;  // Offset 10Ch - PRU1 ED Channel 0 Configuration 1

    // 0x110 - 0x11C
    uint32_t ICSSG_PRU1_ED_CH1_CFG0_REG;  // Offset 110h - PRU1 ED Channel 1 Configuration 0
    uint32_t ICSSG_PRU1_ED_CH1_CFG1_REG;  // Offset 114h - PRU1 ED Channel 1 Configuration 1
    uint32_t ICSSG_PRU1_ED_CH2_CFG0_REG;  // Offset 118h - PRU1 ED Channel 2 Configuration 0
    uint32_t ICSSG_PRU1_ED_CH2_CFG1_REG;  // Offset 11Ch - PRU1 ED Channel 2 Configuration 1

    // 0x120 - 0x12C
    uint32_t reserved4[2];
    uint32_t ICSSG_RTU0_POKE_EN0_REG;  // Offset 124h - RTU0 Poke Enable 0 Register
    uint32_t ICSSG_RTU1_POKE_EN0_REG;  // Offset 12Ch - RTU1 Poke Enable 0 Register

    // 0x130 - 0x13C
    uint32_t ICSSG_PWM0;  // Offset 130h - PWM0 Trip Configuration Register
    uint32_t ICSSG_PWM1;  // Offset 134h - PWM1 Trip Configuration Register
    uint32_t ICSSG_PWM2;  // Offset 138h - PWM2 Trip Configuration Register
    uint32_t ICSSG_PWM3;  // Offset 13Ch - PWM3 Trip Configuration Register

    // 0x140 - 0x14C
    uint32_t ICSSG_PWM0_0;  // Offset 140h - PWM0 State Configuration 0
    uint32_t ICSSG_PWM0_1;  // Offset 144h - PWM0 State Configuration 1
    uint32_t ICSSG_PWM0_2;  // Offset 148h - PWM0 State Configuration 2
    uint32_t ICSSG_PWM1_0;  // Offset 14Ch - PWM1 State Configuration 0

    // 0x150 - 0x15C
    uint32_t ICSSG_PWM1_1;  // Offset 150h - PWM1 State Configuration 1
    uint32_t ICSSG_PWM1_2;  // Offset 154h - PWM1 State Configuration 2
    uint32_t ICSSG_PWM2_0;  // Offset 158h - PWM2 State Configuration 0
    uint32_t ICSSG_PWM2_1;  // Offset 15Ch - PWM2 State Configuration 1

    // 0x160 - 0x16C
    uint32_t ICSSG_PWM2_2;  // Offset 160h - PWM2 State Configuration 2
    uint32_t ICSSG_PWM3_0;  // Offset 164h - PWM3 State Configuration 0
    uint32_t ICSSG_PWM3_1;  // Offset 168h - PWM3 State Configuration 1
    uint32_t ICSSG_PWM3_2;  // Offset 16Ch - PWM3 State Configuration 2

    // 0x170 - 0x17C
    uint32_t ICSSG_SPIN_LOCK0;          // Offset 170h - Spin Lock 0 Register
    uint32_t ICSSG_SPIN_LOCK1;          // Offset 174h - Spin Lock 1 Register
    uint32_t ICSSG_PA_STAT_PDSP_CFG0;   // Offset 178h - PA STATS PDSP0 Vector 0
    uint32_t ICSSG_PA_STAT_PDSP_STAT0;  // Offset 17Ch - PA STATS PDSP0 Status 0

    // 0x180 - 0x18C
    uint32_t ICSSG_PA_STAT_PDSP_CFG1;   // Offset 180h - PA STATS PDSP0 Vector 1
    uint32_t ICSSG_PA_STAT_PDSP_STAT1;  // Offset 184h - PA STATS PDSP0 Status 1
    uint32_t ICSSG_PA_STAT_PDSP_CFG2;   // Offset 188h - PA STATS PDSP0 Vector 2
    uint32_t ICSSG_PA_STAT_PDSP_STAT2;  // Offset 18Ch - PA STATS PDSP0 Status 2

    // 0x190 - 0x194
    uint32_t ICSSG_PA_STAT_PDSP_CFG3;   // Offset 190h - PA STATS PDSP0 Vector 3
    uint32_t ICSSG_PA_STAT_PDSP_STAT3;  // Offset 194h - PA STATS PDSP0 Status 3
};



struct __attribute__((aligned, packed)) pru_ecap
{
    // 0x00 - 0x0C
    uint32_t TSCNT;   // Offset 0h - Time Stamp Counter Register
    uint32_t CNTPHS;  // Offset 4h - Counter Phase Control Register
    uint32_t CAP1;    // Offset 8h - Capture-1 Register
    uint32_t CAP2;    // Offset Ch - Capture-2 Register

    // 0x10 - 0x1C
    uint32_t CAP3;  // Offset 10h - Capture-3 Register
    uint32_t CAP4;  // Offset 14h - Capture-4 Register
    uint32_t reserved1[2];

    // 0x20 - 0x2C
    uint32_t reserved2[2];
    uint32_t ECCTL2_ECCTL1;  // Offset 28h - ECAP Control Register 1
    uint32_t ECFLG_ECEINT;   // Offset 2Ch - ECAP Interrupt Enable Register

    // 0x30 - 0x3C
    uint32_t ECCLR;  // Offset 30h - ECAP Interrupt Clear Register
    uint32_t ECFRC;  // Offset 34h - ECAP Interrupt Forcing Register
    uint32_t reserved3[2];

    // 0x40 - 0x4C
    uint32_t reserved4[4];

    // 0x50 - 0x5C
    uint32_t reserved5[3];
    uint32_t PID;  // Offset 5Ch - ECAP Peripheral Id Register
};



struct __attribute__((aligned, packed)) pru_iep
{
    // 0x00 - 0x0C
    uint32_t GLOBAL_CFG_REG;     // Offset 0h - Global Configuration Register
    uint32_t GLOBAL_STATUS_REG;  // Offset 4h - Status Register
    uint32_t COMPEN_REG;         // Offset 8h - Compensation Register
    uint32_t SLOW_COMPEN_REG;    // Offset Ch - Slow Compensation Register

    // 0x10 - 0x1C
    uint32_t COUNT_REG0;      // Offset 10h - 64-bit Count Value Low Register
    uint32_t COUNT_REG1;      // Offset 14h - 64-bit Count Value High Register
    uint32_t CAP_CFG_REG;     // Offset 18h - Capture Configuration Register
    uint32_t CAP_STATUS_REG;  // Offset 1Ch - Capture Status Register

    // 0x20 - 0x2C
    uint32_t CAPR0_REG0;  // Offset 20h - Capture Rise 0 Low Register
    uint32_t CAPR0_REG1;  // Offset 24h - Capture Rise 0 High Register
    uint32_t CAPR1_REG0;  // Offset 28h - Capture Rise 1 Low Register
    uint32_t CAPR1_REG1;  // Offset 2Ch - Capture Rise 1 High Register

    // 0x30 - 0x3C
    uint32_t CAPR2_REG0;  // Offset 30h - Capture Rise 2 Low Register
    uint32_t CAPR2_REG1;  // Offset 34h - Capture Rise 2 High Register
    uint32_t CAPR3_REG0;  // Offset 38h - Capture Rise 3 Low Register
    uint32_t CAPR3_REG1;  // Offset 3Ch - Capture Rise 3 High Register

    // 0x40 - 0x4C
    uint32_t CAPR4_REG0;  // Offset 40h - Capture Rise 4 Low Register
    uint32_t CAPR4_REG1;  // Offset 44h - Capture Rise 4 High Register
    uint32_t CAPR5_REG0;  // Offset 48h - Capture Rise 5 Low Register
    uint32_t CAPR5_REG1;  // Offset 4Ch - Capture Rise 5 High Register

    // 0x50 - 0x5C
    uint32_t CAPR6_REG0;  // Offset 50h - Capture Rise 6 Low Register
    uint32_t CAPR6_REG1;  // Offset 54h - Capture Rise 6 High Register
    uint32_t CAPF6_REG0;  // Offset 58h - Capture Fall 6 Low Register
    uint32_t CAPF6_REG1;  // Offset 5Ch - Capture Fall 6 High Register

    // 0x60 - 0x6C
    uint32_t CAPR7_REG0;  // Offset 60h - Capture Rise 7 Low Register
    uint32_t CAPR7_REG1;  // Offset 64h - Capture Rise 7 High Register
    uint32_t CAPF7_REG0;  // Offset 68h - Capture Fall 7 Low Register
    uint32_t CAPF7_REG1;  // Offset 6Ch - Capture Fall 7 High Register

    // 0x70 - 0x7C
    uint32_t CMP_CFG_REG;     // Offset 70h - Compare Configuration Register
    uint32_t CMP_STATUS_REG;  // Offset 74h - Compare Status Register
    uint32_t CMP0_REG0;       // Offset 78h - Compare 0 Low Register
    uint32_t CMP0_REG1;       // Offset 7Ch - Compare 0 High Register

    // 0x80 - 0x8C
    uint32_t CMP1_REG0;  // Offset 80h - Compare 1 Low Register
    uint32_t CMP1_REG1;  // Offset 84h - Compare 1 High Register
    uint32_t CMP2_REG0;  // Offset 88h - Compare 2 Low Register
    uint32_t CMP2_REG1;  // Offset 8Ch - Compare 2 High Register

    // 0x90 - 0x9C
    uint32_t CMP3_REG0;  // Offset 90h - Compare 3 Low Register
    uint32_t CMP3_REG1;  // Offset 94h - Compare 3 High Register
    uint32_t CMP4_REG0;  // Offset 98h - Compare 4 Low Register
    uint32_t CMP4_REG1;  // Offset 9Ch - Compare 4 High Register

    // 0xA0 - 0xAC
    uint32_t CMP5_REG0;  // Offset A0h - Compare 5 Low Register
    uint32_t CMP5_REG1;  // Offset A4h - Compare 5 High Register
    uint32_t CMP6_REG0;  // Offset A8h - Compare 6 Low Register
    uint32_t CMP6_REG1;  // Offset ACh - Compare 6 High Register

    // 0xB0 - 0xBC
    uint32_t CMP7_REG0;  // Offset B0h - Compare 7 Low Register
    uint32_t CMP7_REG1;  // Offset B4h - Compare 7 High Register
    uint32_t RXIPG0_REG; // Offset B8h - Status for the RX port attached to PRU0
    uint32_t RXIPG1_REG; // Offset BCh - Status for the RX port attached to PRU1

    // 0xC0 - 0xCC
    uint32_t CMP8_REG0;  // Offset C0h - Compare 8 Low Register
    uint32_t CMP8_REG1;  // Offset C4h - Compare 8 High Register
    uint32_t CMP9_REG0;  // Offset C8h - Compare 9 Low Register
    uint32_t CMP9_REG1;  // Offset CCh - Compare 9 High Register

    // 0xD0 - 0xDC
    uint32_t CMP10_REG0;  // Offset D0h - Compare 10 Low Register
    uint32_t CMP10_REG1;  // Offset D4h - Compare 10 High Register
    uint32_t CMP11_REG0;  // Offset D8h - Compare 11 Low Register
    uint32_t CMP11_REG1;  // Offset DCh - Compare 11 High Register

    // 0xE0 - 0xEC
    uint32_t CMP12_REG0;  // Offset E0h - Compare 12 Low Register
    uint32_t CMP12_REG1;  // Offset E4h - Compare 12 High Register
    uint32_t CMP13_REG0;  // Offset E8h - Compare 13 Low Register
    uint32_t CMP13_REG1;  // Offset ECh - Compare 13 High Register

    // 0xF0 - 0xFC
    uint32_t CMP14_REG0;  // Offset F0h - Compare 14 Low Register
    uint32_t CMP14_REG1;  // Offset F4h - Compare 14 High Register
    uint32_t CMP15_REG0;  // Offset F8h - Compare 15 Low Register
    uint32_t CMP15_REG1;  // Offset FCh - Compare 15 High Register

    // 0x100 - 0x10C
    uint32_t COUNT_RESET_VAL_REG0; // Offset 100h - Reset value of the Controller Counter Register
    uint32_t COUNT_RESET_VAL_REG1; // Offset 104h - Reset value of the Controller Counter Register
    uint32_t PWM_REG;              // Offset 108h - PWM Sync Out Register
    uint32_t CAPR0_BI_REG0;        // Offset 10Ch - Capture Big Endian Rise00 Register

    // 0x110 - 0x11C
    uint32_t CAPR0_BI_REG1; // Offset 110h - Capture Big Endian Rise10 Register
    uint32_t CAPR1_BI_REG0; // Offset 114h - Capture Big Endian Rise01 Register
    uint32_t CAPR1_BI_REG1; // Offset 118h - Capture Big Endian Rise11 Register
    uint32_t CAPR2_BI_REG0; // Offset 11Ch - Capture Big Endian Rise02 Register

    // 0x120 - 0x12C
    uint32_t CAPR2_BI_REG1; // Offset 120h - Capture Big Endian Rise12 Register
    uint32_t CAPR3_BI_REG0; // Offset 124h - Capture Big Endian Rise03 Register
    uint32_t CAPR3_BI_REG1; // Offset 128h - Capture Big Endian Rise13 Register
    uint32_t CAPR4_BI_REG0; // Offset 12Ch - Capture Big Endian Rise04 Register

    // 0x130 - 0x13C
    uint32_t CAPR4_BI_REG1; // Offset 130h - Capture Big Endian Rise14 Register
    uint32_t CAPR5_BI_REG0; // Offset 134h - Capture Big Endian Rise05 Register
    uint32_t CAPR5_BI_REG1; // Offset 138h - Capture Big Endian Rise15 Register
    uint32_t CAPR6_BI_REG0; // Offset 13Ch - Capture Big Endian Rise06 Register

    // 0x140 - 0x14C
    uint32_t CAPR6_BI_REG1; // Offset 140h - Capture Big Endian Rise16 Register
    uint32_t CAPF6_BI_REG0; // Offset 144h - Capture Big Endian Fall06 Register
    uint32_t CAPF6_BI_REG1; // Offset 148h - Capture Big Endian Fall16 Register
    uint32_t CAPR7_BI_REG0; // Offset 14Ch - Capture Big Endian Rise07 Register

    // 0x150 - 0x15C
    uint32_t CAPR7_BI_REG1; // Offset 150h - Capture Big Endian Rise17 Register
    uint32_t CAPF7_BI_REG0; // Offset 154h - Capture Big Endian Fall07 Register
    uint32_t CAPF7_BI_REG1; // Offset 158h - Capture Big Endian Fall17 Register
    uint32_t reserved1[1];

    // 0x160 - 0x17C
    uint32_t reserved2[8];

    // 0x180 - 0x18C
    uint32_t SYNC_CTRL_REG;       // Offset 180h - Sync Generation Control Register
    uint32_t SYNC_FIRST_STAT_REG; // Offset 184h - Sync Generation First Event Status Register
    uint32_t SYNC0_STAT_REG;      // Offset 188h - Sync 0 Status Register
    uint32_t SYNC1_STAT_REG;      // Offset 18Ch - Sync 1 Status Register

    // 0x190 - 0x19C
    uint32_t SYNC_PWIDTH_REG;  // Offset 190h - Sync Pulse Width Configure Register
    uint32_t SYNC0_PERIOD_REG; // Offset 194h - Sync 0 Period Configure Register
    uint32_t SYNC1_DELAY_REG;  // Offset 198h - Sync 1 Delay Register
    uint32_t SYNC_START_REG;   // Offset 19Ch - Sync Start Configure Register

    // 0x200 - 0x20C
    uint32_t WD_PREDIV_REG;  // Offset 200h - Watchdog Pre-Divider Register
    uint32_t PDI_WD_TIM_REG; // Offset 204h - PDI Watchdog Timer Configure Register
    uint32_t PD_WD_TIM_REG;  // Offset 208h - PD Watchdog Timer Configure Register
    uint32_t WD_STATUS_REG;  // Offset 20Ch - Watchdog Status Register

    // 0x210 - 0x21C
    uint32_t WD_EXP_CNT_REG; // Offset 210h - Watchdog Timer Expiration Counter Register
    uint32_t WD_CTRL_REG;    // Offset 214h - Watchdog Control Register
    uint32_t reserved3[2];

    // 0x220 - 0x2FC
    uint32_t reserved4[56];

    // 0x300 - 0x30C
    uint32_t DIGIO_CTRL_REG;        // Offset 300h - DIGIO Control Register
    uint32_t DIGIO_STATUS_REG;      // Offset 304h - DIGIO Status Register
    uint32_t DIGIO_DATA_IN_REG;     // Offset 308h - DIGIO Data Input Register
    uint32_t DIGIO_DATA_IN_RAW_REG; // Offset 30Ch - DIGIO Data Input Direct Sample Register

    // 0x310 - 0x318
    uint32_t DIGIO_DATA_OUT_REG;    // Offset 310h - DIGIO Data Output Register
    uint32_t DIGIO_DATA_OUT_EN_REG; // Offset 314h - DIGIO Data Input which controls tri-state
    uint32_t DIGIO_EXP_REG;         // Offset 318h - DIGIO, Defines which RX_EOF is used Register
};



struct __attribute__((aligned, packed)) pru_task_mgr
{
    // 0x00 - 0x0C
    uint32_t GLOBAL_CFG;     // Offset 0h - Global Configuration
    uint32_t GLOBAL_STATUS;  // Offset 4h - Global Status
    uint32_t TS1_PC_S0;      // Offset 8h - Task1 Subroutine0 PC
    uint32_t TS1_PC_S1;      // Offset Ch - Task1 Subroutine1 PC

    // 0x10 - 0x1C
    uint32_t TS1_PC_S2;  // Offset 10h - Task1 Subroutine2 PC
    uint32_t TS1_PC_S3;  // Offset 14h - Task1 Subroutine3 PC
    uint32_t TS1_PC_S4;  // Offset 18h - Task1 Subroutine4 PC
    uint32_t TS2_PC_S0;  // Offset 1Ch - Task2 Subroutine0 PC

    // 0x20 - 0x2C
    uint32_t TS2_PC_S1;  // Offset 20h - Task2 Subroutine1 PC
    uint32_t TS2_PC_S2;  // Offset 24h - Task2 Subroutine2 PC
    uint32_t TS2_PC_S3;  // Offset 28h - Task2 Subroutine3 PC
    uint32_t TS2_PC_S4;  // Offset 2Ch - Task2 Subroutine4 PC

    // 0x30 - 0x3C
    uint32_t RX_CFG;        // Offset 30h - RX Configuration
    uint32_t TX_CFG;        // Offset 34h - TX Configuration
    uint32_t TS1_GEN_CFG1;  // Offset 38h - Generic TS1 Configuration1
    uint32_t TS1_GEN_CFG2;  // Offset 3Ch - Generic TS1 Configuration2

    // 0x40 - 0x48
    uint32_t TS2_GEN_CFG1;  // Offset 40h - Generic TS2 Configuration1
    uint32_t TS2_GEN_CFG2;  // Offset 44h - Generic TS2 Configuration2
    uint32_t CAP_EN_CFG;    // Offset 48h - Enable Capture new Event Configuration
};

#endif /* H_422EC606_EE2E_11EF_9F1A_F875A456212A */
