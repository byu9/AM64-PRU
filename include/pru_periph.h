#ifndef H0ED7EF92_7C94_4491_8307_5267FE19B99C
#define H0ED7EF92_7C94_4491_8307_5267FE19B99C

#include <stdint.h>

/*
 * PRU memory-mapped registers from the point-of-view of PRUs
 * Also see Reference Manual (SPRUIM2H).
 *
 * John Yu
 * byu9@ncsu.edu
 * 2/18/2025
 * Original version
 * https://git.ti.com/cgit/pru-software-support-package
 */

struct pru_cfg
{
    /* PRU_CFG_PID_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PID_REG;

        volatile struct
        {
            uint32_t ICSS_IDVER :32; // 31:0
        } PID_REG_bit;
    }; // 0x0

    /* PRU_CFG_HWDIS_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t HWDIS_REG;

        volatile struct
        {
            uint32_t HWDIS :8; // 7:0
            uint32_t RSVD8 :24; // 31:8
        } HWDIS_REG_bit;
    }; // 0x4

    /* PRU_CFG_GPCFG0_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t GPCFG0_REG;

        volatile struct
        {
            uint32_t PRU0_GPI_MODE :2; // 1:0
            uint32_t PRU0_GPI_CLK_MODE :1; // 2
            uint32_t PRU0_GPI_DIV0 :5; // 7:3
            uint32_t PRU0_GPI_DIV1 :5; // 12:8
            uint32_t PRU0_GPI_SB :1; // 13
            uint32_t PRU0_GPO_MODE :1; // 14
            uint32_t PRU0_GPO_DIV0 :5; // 19:15
            uint32_t PRU0_GPO_DIV1 :5; // 24:20
            uint32_t PRU0_GPO_SH1_SEL :1; // 25
            uint32_t PR1_PRU0_GP_MUX_SEL :4; // 29:26
            uint32_t RSVD30 :2; // 31:30
        } GPCFG0_REG_bit;
    }; // 0x8

    /* PRU_CFG_GPCFG1_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t GPCFG1_REG;

        volatile struct
        {
            uint32_t PRU1_GPI_MODE :2; // 1:0
            uint32_t PRU1_GPI_CLK_MODE :1; // 2
            uint32_t PRU1_GPI_DIV0 :5; // 7:3
            uint32_t PRU1_GPI_DIV1 :5; // 12:8
            uint32_t PRU1_GPI_SB :1; // 13
            uint32_t PRU1_GPO_MODE :1; // 14
            uint32_t PRU1_GPO_DIV0 :5; // 19:15
            uint32_t PRU1_GPO_DIV1 :5; // 24:20
            uint32_t PRU1_GPO_SH1_SEL :1; // 25
            uint32_t PR1_PRU1_GP_MUX_SEL :4; // 29:26
            uint32_t RSVD30 :2; // 31:30
        } GPCFG1_REG_bit;
    }; // 0xC

    /* PRU_CFG_CGR_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CGR_REG;

        volatile struct
        {
            uint32_t RSVD0 :6; // 5:0
            uint32_t INTC_CLK_STOP_REQ :1; // 6
            uint32_t INTC_CLK_STOP_ACK :1; // 7
            uint32_t INTC_CLK_EN :1; // 8
            uint32_t UART_CLK_STOP_REQ :1; // 9
            uint32_t UART_CLK_STOP_ACK :1; // 10
            uint32_t UART_CLK_EN :1; // 11
            uint32_t ECAP_CLK_STOP_REQ :1; // 12
            uint32_t ECAP_CLK_STOP_ACK :1; // 13
            uint32_t ECAP_CLK_EN :1; // 14
            uint32_t IEP_CLK_STOP_REQ :1; // 15
            uint32_t IEP_CLK_STOP_ACK :1; // 16
            uint32_t IEP_CLK_EN :1; // 17
            uint32_t AUTO_SLICE0_CLK_GATE_EN :1; // 18
            uint32_t AUTO_SLICE1_CLK_GATE_EN :1; // 19
            uint32_t TOP_HALF_CLK_GATE_EN :1; // 20
            uint32_t BOTTOM_HALF_CLK_GATE_EN :1; // 21
            uint32_t RSVD22 :7; // 28:22
            uint32_t ICSS_PWR_IDLE :1; // 29
            uint32_t ICSS_STOP_REQ :1; // 30
            uint32_t ICSS_STOP_ACK :1; // 31
        } CGR_REG_bit;
    }; // 0x10

    /* PRU_CFG_GPECFG0_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t GPECFG0_REG;

        volatile struct
        {
            uint32_t PRU0_GPI_SB_P :1; // 0
            uint32_t PRU0_GPI_SHIFT_EN :1; // 1
            uint32_t RSVD2 :2; // 3:2
            uint32_t PRU0_GPO_SHIFT_SWAP :1; // 4
            uint32_t PRU0_GPO_SHIFT_CLK_FREE :1; // 5
            uint32_t PRU0_GPO_SHIFT_GP_EN :1; // 6
            uint32_t RSVD7 :1; // 7
            uint32_t PRU0_GPO_SHIFT_CNT :8; // 15:8
            uint32_t PRU0_GPO_SHIFT_CLK_HIGH :1; // 16
            uint32_t PRU0_GPO_SHIFT_CLK_DONE :1; // 17
            uint32_t RSVD18 :14; // 31:18
        } GPECFG0_REG_bit;
    }; // 0x14

    /* PRU_CFG_GPECFG1_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t GPECFG1_REG;

        volatile struct
        {
            uint32_t PRU1_GPI_SB_P :1; // 0
            uint32_t PRU1_GPI_SHIFT_EN :1; // 1
            uint32_t RSVD2 :2; // 3:2
            uint32_t PRU1_GPO_SHIFT_SWAP :1; // 4
            uint32_t PRU1_GPO_SHIFT_CLK_FREE :1; // 5
            uint32_t PRU1_GPO_SHIFT_GP_EN :1; // 6
            uint32_t RSVD7 :1; // 7
            uint32_t PRU1_GPO_SHIFT_CNT :8; // 15:8
            uint32_t PRU1_GPO_SHIFT_CLK_HIGH :1; // 16
            uint32_t PRU1_GPO_SHIFT_CLK_DONE :1; // 17
            uint32_t RSVD18 :14; // 31:18
        } GPECFG1_REG_bit;
    }; // 0x18

    /* PRU_CFG_RESET_ISO_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t RESET_ISO_REG;

        volatile struct
        {
            uint32_t RESET_ISO_REQ :1; // 0
            uint32_t RESET_ISO_ACK :1; // 1
            uint32_t RESET_ISO_EDGE :1; // 2
            uint32_t RSVD3 :29; // 31:3
        } RESET_ISO_REG_bit;
    }; // 0x1C

    uint8_t RSVD20[12]; // 0x20 - 0x2B

    /* PRU_CFG_MII_RT_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t MII_RT_REG;

        volatile struct
        {
            uint32_t MII_RT_EVENT_EN :1; // 0
            uint32_t RSVD1 :31; // 31:1
        } MII_RT_REG_bit;
    }; // 0x2C

    /* PRU_CFG_IEPCLK_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t IEPCLK_REG;

        volatile struct
        {
            uint32_t IEP_OCP_CLK_EN :1; // 0
            uint32_t IEP1_SLV_EN :1; // 1
            uint32_t RSVD2 :30; // 31:2
        } IEPCLK_REG_bit;
    }; // 0x30

    /* PRU_CFG_SPP_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t SPP_REG;

        volatile struct
        {
            uint32_t PRU1_PAD_HP_EN :1; // 0
            uint32_t XFR_SHIFT_EN :1; // 1
            uint32_t XFR_BYTE_SHIFT_EN :1; // 2
            uint32_t RTU_XFR_SHIFT_EN :1; // 3
            uint32_t RSVD4 :28; // 31:4
        } SPP_REG_bit;
    }; // 0x34

    /* PRU_CFG_SPIN_CFG_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t SPIN_CFG_REG;

        volatile struct
        {
            uint32_t SPIN_CLOCK_TX_PRU_EN :1; // 0
            uint32_t RSVD1 :31; // 31:1
        } SPIN_CFG_REG_bit;
    }; // 0x38

    /* PRU_CFG_CORE_SYNC_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CORE_SYNC_REG;

        volatile struct
        {
            uint32_t CORE_VBUSP_SYNC_EN :1; // 0
            uint32_t RSVD1 :31; // 31:1
        } CORE_SYNC_REG_bit;
    }; // 0x3C

    /* PRU_CFG_SA_MX_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t SA_MX_REG;

        volatile struct
        {
            uint32_t SA_MUX_SEL :8; // 7:0
            uint32_t PWM0_REMAP_EN :2; // 9:8
            uint32_t PWM3_REMAP_EN :2; // 11:10
            uint32_t RSVD12 :4; // 15:12
            uint32_t PWM_EFC_EN :1; // 16
            uint32_t RSVD17 :15; // 31:17
        } SA_MX_REG_bit;
    }; // 0x40

    /* PRU_CFG_PRU0_SD_CLK_DIV_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU0_SD_CLK_DIV_REG;

        volatile struct
        {
            uint32_t RSVD0 :8; // 7:0
            uint32_t PRU0_SD_SHARE_EN :1; // 8
            uint32_t PRU0_SD_MAN_EN :1; // 9
            uint32_t PRU0_SD_MAN_NV_DATA_EN :1; // 10
            uint32_t PRU0_SD_CH_SEL :4; // 14:11
            uint32_t PRU0_SD_MAN_STATUS :1; // 15
            uint32_t PRU0_SD_MAN_CLK_CAL_DONE :1; // 16
            uint32_t RSVD17 :7; // 23:17
            uint32_t PRU0_SD_MAN_REC_CLK_PERIOD :8; // 31:24
        } PRU0_SD_CLK_DIV_REG_bit;
    }; // 0x44

    /* PRU_CFG_PRU0_SD_CLK_SEL_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU0_SD_CLK_SEL_REG0;

        volatile struct
        {
            uint32_t PRU0_SD_CLK_SEL0 :2; // 1:0
            uint32_t PRU0_SD_CLK_INV0 :1; // 2
            uint32_t RSVD3 :1; // 3
            uint32_t PRU0_SD_ACC_SEL0 :2; // 5:4
            uint32_t RSVD6 :5; // 10:6
            uint32_t PRU0_FD_ZERO_MIN_LIMIT_0 :5; // 15:11
            uint32_t PRU0_FD_ZERO_MIN_0 :1; // 16
            uint32_t PRU0_FD_ZERO_MAX_LIMIT_0 :5; // 21:17
            uint32_t PRU0_FD_ZERO_MAX_0 :1; // 22
            uint32_t RSVD23 :9; // 31:23
        } PRU0_SD_CLK_SEL_REG0_bit;
    }; // 0x48

    /* PRU_CFG_PRU0_SD_SAMPLE_SIZE_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU0_SD_SAMPLE_SIZE_REG0;

        volatile struct
        {
            uint32_t PRU0_SD_SAMPLE_SIZE0 :8; // 7:0
            uint32_t PRU0_FD_WINDOW_SIZE_0 :3; // 10:8
            uint32_t PRU0_FD_ONE_MIN_LIMIT_0 :5; // 15:11
            uint32_t PRU0_FD_ONE_MIN_0 :1; // 16
            uint32_t PRU0_FD_ONE_MAX_LIMIT_0 :5; // 21:17
            uint32_t PRU0_FD_ONE_MAX_0 :1; // 22
            uint32_t PRU0_FD_EN_0 :1; // 23
            uint32_t RSVD24 :8; // 31:24
        } PRU0_SD_SAMPLE_SIZE_REG0_bit;
    }; // 0x4C

    /* PRU_CFG_PRU0_SD_CLK_SEL_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU0_SD_CLK_SEL_REG1;

        volatile struct
        {
            uint32_t PRU0_SD_CLK_SEL1 :2; // 1:0
            uint32_t PRU0_SD_CLK_INV1 :1; // 2
            uint32_t RSVD3 :1; // 3
            uint32_t PRU0_SD_ACC_SEL1 :2; // 5:4
            uint32_t RSVD6 :5; // 10:6
            uint32_t PRU0_FD_ZERO_MIN_LIMIT_1 :5; // 15:11
            uint32_t PRU0_FD_ZERO_MIN_1 :1; // 16
            uint32_t PRU0_FD_ZERO_MAX_LIMIT_1 :5; // 21:17
            uint32_t PRU0_FD_ZERO_MAX_1 :1; // 22
            uint32_t RSVD23 :9; // 31:23
        } PRU0_SD_CLK_SEL_REG1_bit;
    }; // 0x50

    /* PRU_CFG_PRU0_SD_SAMPLE_SIZE_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU0_SD_SAMPLE_SIZE_REG1;

        volatile struct
        {
            uint32_t PRU0_SD_SAMPLE_SIZE1 :8; // 7:0
            uint32_t PRU0_FD_WINDOW_SIZE_1 :3; // 10:8
            uint32_t PRU0_FD_ONE_MIN_LIMIT_1 :5; // 15:11
            uint32_t PRU0_FD_ONE_MIN_1 :1; // 16
            uint32_t PRU0_FD_ONE_MAX_LIMIT_1 :5; // 21:17
            uint32_t PRU0_FD_ONE_MAX_1 :1; // 22
            uint32_t PRU0_FD_EN_1 :1; // 23
            uint32_t RSVD24 :8; // 31:24
        } PRU0_SD_SAMPLE_SIZE_REG1_bit;
    }; // 0x54

    /* PRU_CFG_PRU0_SD_CLK_SEL_REG2 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU0_SD_CLK_SEL_REG2;

        volatile struct
        {
            uint32_t PRU0_SD_CLK_SEL2 :2; // 1:0
            uint32_t PRU0_SD_CLK_INV2 :1; // 2
            uint32_t RSVD3 :1; // 3
            uint32_t PRU0_SD_ACC_SEL2 :2; // 5:4
            uint32_t RSVD6 :5; // 10:6
            uint32_t PRU0_FD_ZERO_MIN_LIMIT_2 :5; // 15:11
            uint32_t PRU0_FD_ZERO_MIN_2 :1; // 16
            uint32_t PRU0_FD_ZERO_MAX_LIMIT_2 :5; // 21:17
            uint32_t PRU0_FD_ZERO_MAX_2 :1; // 22
            uint32_t RSVD23 :9; // 31:23
        } PRU0_SD_CLK_SEL_REG2_bit;
    }; // 0x58

    /* PRU_CFG_PRU0_SD_SAMPLE_SIZE_REG2 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU0_SD_SAMPLE_SIZE_REG2;

        volatile struct
        {
            uint32_t PRU0_SD_SAMPLE_SIZE2 :8; // 7:0
            uint32_t PRU0_FD_WINDOW_SIZE_2 :3; // 10:8
            uint32_t PRU0_FD_ONE_MIN_LIMIT_2 :5; // 15:11
            uint32_t PRU0_FD_ONE_MIN_2 :1; // 16
            uint32_t PRU0_FD_ONE_MAX_LIMIT_2 :5; // 21:17
            uint32_t PRU0_FD_ONE_MAX_2 :1; // 22
            uint32_t PRU0_FD_EN_2 :1; // 23
            uint32_t RSVD24 :8; // 31:24
        } PRU0_SD_SAMPLE_SIZE_REG2_bit;
    }; // 0x5C

    /* PRU_CFG_PRU0_SD_CLK_SEL_REG3 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU0_SD_CLK_SEL_REG3;

        volatile struct
        {
            uint32_t PRU0_SD_CLK_SEL3 :2; // 1:0
            uint32_t PRU0_SD_CLK_INV3 :1; // 2
            uint32_t RSVD3 :1; // 3
            uint32_t PRU0_SD_ACC_SEL3 :2; // 5:4
            uint32_t RSVD6 :5; // 10:6
            uint32_t PRU0_FD_ZERO_MIN_LIMIT_3 :5; // 15:11
            uint32_t PRU0_FD_ZERO_MIN_3 :1; // 16
            uint32_t PRU0_FD_ZERO_MAX_LIMIT_3 :5; // 21:17
            uint32_t PRU0_FD_ZERO_MAX_3 :1; // 22
            uint32_t RSVD23 :9; // 31:23
        } PRU0_SD_CLK_SEL_REG3_bit;
    }; // 0x60

    /* PRU_CFG_PRU0_SD_SAMPLE_SIZE_REG3 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU0_SD_SAMPLE_SIZE_REG3;

        volatile struct
        {
            uint32_t PRU0_SD_SAMPLE_SIZE3 :8; // 7:0
            uint32_t PRU0_FD_WINDOW_SIZE_3 :3; // 10:8
            uint32_t PRU0_FD_ONE_MIN_LIMIT_3 :5; // 15:11
            uint32_t PRU0_FD_ONE_MIN_3 :1; // 16
            uint32_t PRU0_FD_ONE_MAX_LIMIT_3 :5; // 21:17
            uint32_t PRU0_FD_ONE_MAX_3 :1; // 22
            uint32_t PRU0_FD_EN_3 :1; // 23
            uint32_t RSVD24 :8; // 31:24
        } PRU0_SD_SAMPLE_SIZE_REG3_bit;
    }; // 0x64

    /* PRU_CFG_PRU0_SD_CLK_SEL_REG4 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU0_SD_CLK_SEL_REG4;

        volatile struct
        {
            uint32_t PRU0_SD_CLK_SEL4 :2; // 1:0
            uint32_t PRU0_SD_CLK_INV4 :1; // 2
            uint32_t RSVD3 :1; // 3
            uint32_t PRU0_SD_ACC_SEL4 :2; // 5:4
            uint32_t RSVD6 :5; // 10:6
            uint32_t PRU0_FD_ZERO_MIN_LIMIT_4 :5; // 15:11
            uint32_t PRU0_FD_ZERO_MIN_4 :1; // 16
            uint32_t PRU0_FD_ZERO_MAX_LIMIT_4 :5; // 21:17
            uint32_t PRU0_FD_ZERO_MAX_4 :1; // 22
            uint32_t RSVD23 :9; // 31:23
        } PRU0_SD_CLK_SEL_REG4_bit;
    }; // 0x68

    /* PRU_CFG_PRU0_SD_SAMPLE_SIZE_REG4 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU0_SD_SAMPLE_SIZE_REG4;

        volatile struct
        {
            uint32_t PRU0_SD_SAMPLE_SIZE4 :8; // 7:0
            uint32_t PRU0_FD_WINDOW_SIZE_4 :3; // 10:8
            uint32_t PRU0_FD_ONE_MIN_LIMIT_4 :5; // 15:11
            uint32_t PRU0_FD_ONE_MIN_4 :1; // 16
            uint32_t PRU0_FD_ONE_MAX_LIMIT_4 :5; // 21:17
            uint32_t PRU0_FD_ONE_MAX_4 :1; // 22
            uint32_t PRU0_FD_EN_4 :1; // 23
            uint32_t RSVD24 :8; // 31:24
        } PRU0_SD_SAMPLE_SIZE_REG4_bit;
    }; // 0x6C

    /* PRU_CFG_PRU0_SD_CLK_SEL_REG5 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU0_SD_CLK_SEL_REG5;

        volatile struct
        {
            uint32_t PRU0_SD_CLK_SEL5 :2; // 1:0
            uint32_t PRU0_SD_CLK_INV5 :1; // 2
            uint32_t RSVD3 :1; // 3
            uint32_t PRU0_SD_ACC_SEL5 :2; // 5:4
            uint32_t RSVD6 :5; // 10:6
            uint32_t PRU0_FD_ZERO_MIN_LIMIT_5 :5; // 15:11
            uint32_t PRU0_FD_ZERO_MIN_5 :1; // 16
            uint32_t PRU0_FD_ZERO_MAX_LIMIT_5 :5; // 21:17
            uint32_t PRU0_FD_ZERO_MAX_5 :1; // 22
            uint32_t RSVD23 :9; // 31:23
        } PRU0_SD_CLK_SEL_REG5_bit;
    }; // 0x70

    /* PRU_CFG_PRU0_SD_SAMPLE_SIZE_REG5 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU0_SD_SAMPLE_SIZE_REG5;

        volatile struct
        {
            uint32_t PRU0_SD_SAMPLE_SIZE5 :8; // 7:0
            uint32_t PRU0_FD_WINDOW_SIZE_5 :3; // 10:8
            uint32_t PRU0_FD_ONE_MIN_LIMIT_5 :5; // 15:11
            uint32_t PRU0_FD_ONE_MIN_5 :1; // 16
            uint32_t PRU0_FD_ONE_MAX_LIMIT_5 :5; // 21:17
            uint32_t PRU0_FD_ONE_MAX_5 :1; // 22
            uint32_t PRU0_FD_EN_5 :1; // 23
            uint32_t RSVD24 :8; // 31:24
        } PRU0_SD_SAMPLE_SIZE_REG5_bit;
    }; // 0x74

    /* PRU_CFG_PRU0_SD_CLK_SEL_REG6 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU0_SD_CLK_SEL_REG6;

        volatile struct
        {
            uint32_t PRU0_SD_CLK_SEL6 :2; // 1:0
            uint32_t PRU0_SD_CLK_INV6 :1; // 2
            uint32_t RSVD3 :1; // 3
            uint32_t PRU0_SD_ACC_SEL6 :2; // 5:4
            uint32_t RSVD6 :5; // 10:6
            uint32_t PRU0_FD_ZERO_MIN_LIMIT_6 :5; // 15:11
            uint32_t PRU0_FD_ZERO_MIN_6 :1; // 16
            uint32_t PRU0_FD_ZERO_MAX_LIMIT_6 :5; // 21:17
            uint32_t PRU0_FD_ZERO_MAX_6 :1; // 22
            uint32_t RSVD23 :9; // 31:23
        } PRU0_SD_CLK_SEL_REG6_bit;
    }; // 0x78

    /* PRU_CFG_PRU0_SD_SAMPLE_SIZE_REG6 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU0_SD_SAMPLE_SIZE_REG6;

        volatile struct
        {
            uint32_t PRU0_SD_SAMPLE_SIZE6 :8; // 7:0
            uint32_t PRU0_FD_WINDOW_SIZE_6 :3; // 10:8
            uint32_t PRU0_FD_ONE_MIN_LIMIT_6 :5; // 15:11
            uint32_t PRU0_FD_ONE_MIN_6 :1; // 16
            uint32_t PRU0_FD_ONE_MAX_LIMIT_6 :5; // 21:17
            uint32_t PRU0_FD_ONE_MAX_6 :1; // 22
            uint32_t PRU0_FD_EN_6 :1; // 23
            uint32_t RSVD24 :8; // 31:24
        } PRU0_SD_SAMPLE_SIZE_REG6_bit;
    }; // 0x7C

    /* PRU_CFG_PRU0_SD_CLK_SEL_REG7 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU0_SD_CLK_SEL_REG7;

        volatile struct
        {
            uint32_t PRU0_SD_CLK_SEL7 :2; // 1:0
            uint32_t PRU0_SD_CLK_INV7 :1; // 2
            uint32_t RSVD3 :1; // 3
            uint32_t PRU0_SD_ACC_SEL7 :2; // 5:4
            uint32_t RSVD6 :5; // 10:6
            uint32_t PRU0_FD_ZERO_MIN_LIMIT_7 :5; // 15:11
            uint32_t PRU0_FD_ZERO_MIN_7 :1; // 16
            uint32_t PRU0_FD_ZERO_MAX_LIMIT_7 :5; // 21:17
            uint32_t PRU0_FD_ZERO_MAX_7 :1; // 22
            uint32_t RSVD23 :9; // 31:23
        } PRU0_SD_CLK_SEL_REG7_bit;
    }; // 0x80

    /* PRU_CFG_PRU0_SD_SAMPLE_SIZE_REG7 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU0_SD_SAMPLE_SIZE_REG7;

        volatile struct
        {
            uint32_t PRU0_SD_SAMPLE_SIZE7 :8; // 7:0
            uint32_t PRU0_FD_WINDOW_SIZE_7 :3; // 10:8
            uint32_t PRU0_FD_ONE_MIN_LIMIT_7 :5; // 15:11
            uint32_t PRU0_FD_ONE_MIN_7 :1; // 16
            uint32_t PRU0_FD_ONE_MAX_LIMIT_7 :5; // 21:17
            uint32_t PRU0_FD_ONE_MAX_7 :1; // 22
            uint32_t PRU0_FD_EN_7 :1; // 23
            uint32_t RSVD24 :8; // 31:24
        } PRU0_SD_SAMPLE_SIZE_REG7_bit;
    }; // 0x84

    /* PRU_CFG_PRU0_SD_CLK_SEL_REG8 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU0_SD_CLK_SEL_REG8;

        volatile struct
        {
            uint32_t PRU0_SD_CLK_SEL8 :2; // 1:0
            uint32_t PRU0_SD_CLK_INV8 :1; // 2
            uint32_t RSVD3 :1; // 3
            uint32_t PRU0_SD_ACC_SEL8 :2; // 5:4
            uint32_t RSVD6 :5; // 10:6
            uint32_t PRU0_FD_ZERO_MIN_LIMIT_8 :5; // 15:11
            uint32_t PRU0_FD_ZERO_MIN_8 :1; // 16
            uint32_t PRU0_FD_ZERO_MAX_LIMIT_8 :5; // 21:17
            uint32_t PRU0_FD_ZERO_MAX_8 :1; // 22
            uint32_t RSVD23 :9; // 31:23
        } PRU0_SD_CLK_SEL_REG8_bit;
    }; // 0x88

    /* PRU_CFG_PRU0_SD_SAMPLE_SIZE_REG8 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU0_SD_SAMPLE_SIZE_REG8;

        volatile struct
        {
            uint32_t PRU0_SD_SAMPLE_SIZE8 :8; // 7:0
            uint32_t PRU0_FD_WINDOW_SIZE_8 :3; // 10:8
            uint32_t PRU0_FD_ONE_MIN_LIMIT_8 :5; // 15:11
            uint32_t PRU0_FD_ONE_MIN_8 :1; // 16
            uint32_t PRU0_FD_ONE_MAX_LIMIT_8 :5; // 21:17
            uint32_t PRU0_FD_ONE_MAX_8 :1; // 22
            uint32_t PRU0_FD_EN_8 :1; // 23
            uint32_t RSVD24 :8; // 31:24
        } PRU0_SD_SAMPLE_SIZE_REG8_bit;
    }; // 0x8C

    /* PRU_CFG_PRU1_SD_CLK_DIV_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU1_SD_CLK_DIV_REG;

        volatile struct
        {
            uint32_t RSVD0 :8; // 7:0
            uint32_t PRU1_SD_SHARE_EN :1; // 8
            uint32_t PRU1_SD_MAN_EN :1; // 9
            uint32_t PRU1_SD_MAN_NV_DATA_EN :1; // 10
            uint32_t PRU1_SD_CH_SEL :4; // 14:11
            uint32_t PRU1_SD_MAN_STATUS :1; // 15
            uint32_t PRU1_SD_MAN_CLK_CAL_DONE :1; // 16
            uint32_t RSVD17 :7; // 23:17
            uint32_t PRU1_SD_MAN_REC_CLK_PERIOD :8; // 31:24
        } PRU1_SD_CLK_DIV_REG_bit;
    }; // 0x90

    /* PRU_CFG_PRU1_SD_CLK_SEL_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU1_SD_CLK_SEL_REG0;

        volatile struct
        {
            uint32_t PRU1_SD_CLK_SEL0 :2; // 1:0
            uint32_t PRU1_SD_CLK_INV0 :1; // 2
            uint32_t RSVD3 :1; // 3
            uint32_t PRU1_SD_ACC_SEL0 :2; // 5:4
            uint32_t RSVD6 :5; // 10:6
            uint32_t PRU1_FD_ZERO_MIN_LIMIT_0 :5; // 15:11
            uint32_t PRU1_FD_ZERO_MIN_0 :1; // 16
            uint32_t PRU1_FD_ZERO_MAX_LIMIT_0 :5; // 21:17
            uint32_t PRU1_FD_ZERO_MAX_0 :1; // 22
            uint32_t RSVD23 :9; // 31:23
        } PRU1_SD_CLK_SEL_REG0_bit;
    }; // 0x94

    /* PRU_CFG_PRU1_SD_SAMPLE_SIZE_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU1_SD_SAMPLE_SIZE_REG0;

        volatile struct
        {
            uint32_t PRU1_SD_SAMPLE_SIZE0 :8; // 7:0
            uint32_t PRU1_FD_WINDOW_SIZE_0 :3; // 10:8
            uint32_t PRU1_FD_ONE_MIN_LIMIT_0 :5; // 15:11
            uint32_t PRU1_FD_ONE_MIN_0 :1; // 16
            uint32_t PRU1_FD_ONE_MAX_LIMIT_0 :5; // 21:17
            uint32_t PRU1_FD_ONE_MAX_0 :1; // 22
            uint32_t PRU1_FD_EN_0 :1; // 23
            uint32_t RSVD24 :8; // 31:24
        } PRU1_SD_SAMPLE_SIZE_REG0_bit;
    }; // 0x98

    /* PRU_CFG_PRU1_SD_CLK_SEL_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU1_SD_CLK_SEL_REG1;

        volatile struct
        {
            uint32_t PRU1_SD_CLK_SEL1 :2; // 1:0
            uint32_t PRU1_SD_CLK_INV1 :1; // 2
            uint32_t RSVD3 :1; // 3
            uint32_t PRU1_SD_ACC_SEL1 :2; // 5:4
            uint32_t RSVD6 :5; // 10:6
            uint32_t PRU1_FD_ZERO_MIN_LIMIT_1 :5; // 15:11
            uint32_t PRU1_FD_ZERO_MIN_1 :1; // 16
            uint32_t PRU1_FD_ZERO_MAX_LIMIT_1 :5; // 21:17
            uint32_t PRU1_FD_ZERO_MAX_1 :1; // 22
            uint32_t RSVD23 :9; // 31:23
        } PRU1_SD_CLK_SEL_REG1_bit;
    }; // 0x9C

    /* PRU_CFG_PRU1_SD_SAMPLE_SIZE_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU1_SD_SAMPLE_SIZE_REG1;

        volatile struct
        {
            uint32_t PRU1_SD_SAMPLE_SIZE1 :8; // 7:0
            uint32_t PRU1_FD_WINDOW_SIZE_1 :3; // 10:8
            uint32_t PRU1_FD_ONE_MIN_LIMIT_1 :5; // 15:11
            uint32_t PRU1_FD_ONE_MIN_1 :1; // 16
            uint32_t PRU1_FD_ONE_MAX_LIMIT_1 :5; // 21:17
            uint32_t PRU1_FD_ONE_MAX_1 :1; // 22
            uint32_t PRU1_FD_EN_1 :1; // 23
            uint32_t RSVD24 :8; // 31:24
        } PRU1_SD_SAMPLE_SIZE_REG1_bit;
    }; // 0xA0

    /* PRU_CFG_PRU1_SD_CLK_SEL_REG2 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU1_SD_CLK_SEL_REG2;

        volatile struct
        {
            uint32_t PRU1_SD_CLK_SEL2 :2; // 1:0
            uint32_t PRU1_SD_CLK_INV2 :1; // 2
            uint32_t RSVD3 :1; // 3
            uint32_t PRU1_SD_ACC_SEL2 :2; // 5:4
            uint32_t RSVD6 :5; // 10:6
            uint32_t PRU1_FD_ZERO_MIN_LIMIT_2 :5; // 15:11
            uint32_t PRU1_FD_ZERO_MIN_2 :1; // 16
            uint32_t PRU1_FD_ZERO_MAX_LIMIT_2 :5; // 21:17
            uint32_t PRU1_FD_ZERO_MAX_2 :1; // 22
            uint32_t RSVD23 :9; // 31:23
        } PRU1_SD_CLK_SEL_REG2_bit;
    }; // 0xA4

    /* PRU_CFG_PRU1_SD_SAMPLE_SIZE_REG2 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU1_SD_SAMPLE_SIZE_REG2;

        volatile struct
        {
            uint32_t PRU1_SD_SAMPLE_SIZE2 :8; // 7:0
            uint32_t PRU1_FD_WINDOW_SIZE_2 :3; // 10:8
            uint32_t PRU1_FD_ONE_MIN_LIMIT_2 :5; // 15:11
            uint32_t PRU1_FD_ONE_MIN_2 :1; // 16
            uint32_t PRU1_FD_ONE_MAX_LIMIT_2 :5; // 21:17
            uint32_t PRU1_FD_ONE_MAX_2 :1; // 22
            uint32_t PRU1_FD_EN_2 :1; // 23
            uint32_t RSVD24 :8; // 31:24
        } PRU1_SD_SAMPLE_SIZE_REG2_bit;
    }; // 0xA8

    /* PRU_CFG_PRU1_SD_CLK_SEL_REG3 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU1_SD_CLK_SEL_REG3;

        volatile struct
        {
            uint32_t PRU1_SD_CLK_SEL3 :2; // 1:0
            uint32_t PRU1_SD_CLK_INV3 :1; // 2
            uint32_t RSVD3 :1; // 3
            uint32_t PRU1_SD_ACC_SEL3 :2; // 5:4
            uint32_t RSVD6 :5; // 10:6
            uint32_t PRU1_FD_ZERO_MIN_LIMIT_3 :5; // 15:11
            uint32_t PRU1_FD_ZERO_MIN_3 :1; // 16
            uint32_t PRU1_FD_ZERO_MAX_LIMIT_3 :5; // 21:17
            uint32_t PRU1_FD_ZERO_MAX_3 :1; // 22
            uint32_t RSVD23 :9; // 31:23
        } PRU1_SD_CLK_SEL_REG3_bit;
    }; // 0xAC

    /* PRU_CFG_PRU1_SD_SAMPLE_SIZE_REG3 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU1_SD_SAMPLE_SIZE_REG3;

        volatile struct
        {
            uint32_t PRU1_SD_SAMPLE_SIZE3 :8; // 7:0
            uint32_t PRU1_FD_WINDOW_SIZE_3 :3; // 10:8
            uint32_t PRU1_FD_ONE_MIN_LIMIT_3 :5; // 15:11
            uint32_t PRU1_FD_ONE_MIN_3 :1; // 16
            uint32_t PRU1_FD_ONE_MAX_LIMIT_3 :5; // 21:17
            uint32_t PRU1_FD_ONE_MAX_3 :1; // 22
            uint32_t PRU1_FD_EN_3 :1; // 23
            uint32_t RSVD24 :8; // 31:24
        } PRU1_SD_SAMPLE_SIZE_REG3_bit;
    }; // 0xB0

    /* PRU_CFG_PRU1_SD_CLK_SEL_REG4 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU1_SD_CLK_SEL_REG4;

        volatile struct
        {
            uint32_t PRU1_SD_CLK_SEL4 :2; // 1:0
            uint32_t PRU1_SD_CLK_INV4 :1; // 2
            uint32_t RSVD3 :1; // 3
            uint32_t PRU1_SD_ACC_SEL4 :2; // 5:4
            uint32_t RSVD6 :5; // 10:6
            uint32_t PRU1_FD_ZERO_MIN_LIMIT_4 :5; // 15:11
            uint32_t PRU1_FD_ZERO_MIN_4 :1; // 16
            uint32_t PRU1_FD_ZERO_MAX_LIMIT_4 :5; // 21:17
            uint32_t PRU1_FD_ZERO_MAX_4 :1; // 22
            uint32_t RSVD23 :9; // 31:23
        } PRU1_SD_CLK_SEL_REG4_bit;
    }; // 0xB4

    /* PRU_CFG_PRU1_SD_SAMPLE_SIZE_REG4 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU1_SD_SAMPLE_SIZE_REG4;

        volatile struct
        {
            uint32_t PRU1_SD_SAMPLE_SIZE4 :8; // 7:0
            uint32_t PRU1_FD_WINDOW_SIZE_4 :3; // 10:8
            uint32_t PRU1_FD_ONE_MIN_LIMIT_4 :5; // 15:11
            uint32_t PRU1_FD_ONE_MIN_4 :1; // 16
            uint32_t PRU1_FD_ONE_MAX_LIMIT_4 :5; // 21:17
            uint32_t PRU1_FD_ONE_MAX_4 :1; // 22
            uint32_t PRU1_FD_EN_4 :1; // 23
            uint32_t RSVD24 :8; // 31:24
        } PRU1_SD_SAMPLE_SIZE_REG4_bit;
    }; // 0xB8

    /* PRU_CFG_PRU1_SD_CLK_SEL_REG5 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU1_SD_CLK_SEL_REG5;

        volatile struct
        {
            uint32_t PRU1_SD_CLK_SEL5 :2; // 1:0
            uint32_t PRU1_SD_CLK_INV5 :1; // 2
            uint32_t RSVD3 :1; // 3
            uint32_t PRU1_SD_ACC_SEL5 :2; // 5:4
            uint32_t RSVD6 :5; // 10:6
            uint32_t PRU1_FD_ZERO_MIN_LIMIT_5 :5; // 15:11
            uint32_t PRU1_FD_ZERO_MIN_5 :1; // 16
            uint32_t PRU1_FD_ZERO_MAX_LIMIT_5 :5; // 21:17
            uint32_t PRU1_FD_ZERO_MAX_5 :1; // 22
            uint32_t RSVD23 :9; // 31:23
        } PRU1_SD_CLK_SEL_REG5_bit;
    }; // 0xBC

    /* PRU_CFG_PRU1_SD_SAMPLE_SIZE_REG5 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU1_SD_SAMPLE_SIZE_REG5;

        volatile struct
        {
            uint32_t PRU1_SD_SAMPLE_SIZE5 :8; // 7:0
            uint32_t PRU1_FD_WINDOW_SIZE_5 :3; // 10:8
            uint32_t PRU1_FD_ONE_MIN_LIMIT_5 :5; // 15:11
            uint32_t PRU1_FD_ONE_MIN_5 :1; // 16
            uint32_t PRU1_FD_ONE_MAX_LIMIT_5 :5; // 21:17
            uint32_t PRU1_FD_ONE_MAX_5 :1; // 22
            uint32_t PRU1_FD_EN_5 :1; // 23
            uint32_t RSVD24 :8; // 31:24
        } PRU1_SD_SAMPLE_SIZE_REG5_bit;
    }; // 0xC0

    /* PRU_CFG_PRU1_SD_CLK_SEL_REG6 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU1_SD_CLK_SEL_REG6;

        volatile struct
        {
            uint32_t PRU1_SD_CLK_SEL6 :2; // 1:0
            uint32_t PRU1_SD_CLK_INV6 :1; // 2
            uint32_t RSVD3 :1; // 3
            uint32_t PRU1_SD_ACC_SEL6 :2; // 5:4
            uint32_t RSVD6 :5; // 10:6
            uint32_t PRU1_FD_ZERO_MIN_LIMIT_6 :5; // 15:11
            uint32_t PRU1_FD_ZERO_MIN_6 :1; // 16
            uint32_t PRU1_FD_ZERO_MAX_LIMIT_6 :5; // 21:17
            uint32_t PRU1_FD_ZERO_MAX_6 :1; // 22
            uint32_t RSVD23 :9; // 31:23
        } PRU1_SD_CLK_SEL_REG6_bit;
    }; // 0xC4

    /* PRU_CFG_PRU1_SD_SAMPLE_SIZE_REG6 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU1_SD_SAMPLE_SIZE_REG6;

        volatile struct
        {
            uint32_t PRU1_SD_SAMPLE_SIZE6 :8; // 7:0
            uint32_t PRU1_FD_WINDOW_SIZE_6 :3; // 10:8
            uint32_t PRU1_FD_ONE_MIN_LIMIT_6 :5; // 15:11
            uint32_t PRU1_FD_ONE_MIN_6 :1; // 16
            uint32_t PRU1_FD_ONE_MAX_LIMIT_6 :5; // 21:17
            uint32_t PRU1_FD_ONE_MAX_6 :1; // 22
            uint32_t PRU1_FD_EN_6 :1; // 23
            uint32_t RSVD24 :8; // 31:24
        } PRU1_SD_SAMPLE_SIZE_REG6_bit;
    }; // 0xC8

    /* PRU_CFG_PRU1_SD_CLK_SEL_REG7 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU1_SD_CLK_SEL_REG7;

        volatile struct
        {
            uint32_t PRU1_SD_CLK_SEL7 :2; // 1:0
            uint32_t PRU1_SD_CLK_INV7 :1; // 2
            uint32_t RSVD3 :1; // 3
            uint32_t PRU1_SD_ACC_SEL7 :2; // 5:4
            uint32_t RSVD6 :5; // 10:6
            uint32_t PRU1_FD_ZERO_MIN_LIMIT_7 :5; // 15:11
            uint32_t PRU1_FD_ZERO_MIN_7 :1; // 16
            uint32_t PRU1_FD_ZERO_MAX_LIMIT_7 :5; // 21:17
            uint32_t PRU1_FD_ZERO_MAX_7 :1; // 22
            uint32_t RSVD23 :9; // 31:23
        } PRU1_SD_CLK_SEL_REG7_bit;
    }; // 0xCC

    /* PRU_CFG_PRU1_SD_SAMPLE_SIZE_REG7 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU1_SD_SAMPLE_SIZE_REG7;

        volatile struct
        {
            uint32_t PRU1_SD_SAMPLE_SIZE7 :8; // 7:0
            uint32_t PRU1_FD_WINDOW_SIZE_7 :3; // 10:8
            uint32_t PRU1_FD_ONE_MIN_LIMIT_7 :5; // 15:11
            uint32_t PRU1_FD_ONE_MIN_7 :1; // 16
            uint32_t PRU1_FD_ONE_MAX_LIMIT_7 :5; // 21:17
            uint32_t PRU1_FD_ONE_MAX_7 :1; // 22
            uint32_t PRU1_FD_EN_7 :1; // 23
            uint32_t RSVD24 :8; // 31:24
        } PRU1_SD_SAMPLE_SIZE_REG7_bit;
    }; // 0xD0

    /* PRU_CFG_PRU1_SD_CLK_SEL_REG8 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU1_SD_CLK_SEL_REG8;

        volatile struct
        {
            uint32_t PRU1_SD_CLK_SEL8 :2; // 1:0
            uint32_t PRU1_SD_CLK_INV8 :1; // 2
            uint32_t RSVD3 :1; // 3
            uint32_t PRU1_SD_ACC_SEL8 :2; // 5:4
            uint32_t RSVD6 :5; // 10:6
            uint32_t PRU1_FD_ZERO_MIN_LIMIT_8 :5; // 15:11
            uint32_t PRU1_FD_ZERO_MIN_8 :1; // 16
            uint32_t PRU1_FD_ZERO_MAX_LIMIT_8 :5; // 21:17
            uint32_t PRU1_FD_ZERO_MAX_8 :1; // 22
            uint32_t RSVD23 :9; // 31:23
        } PRU1_SD_CLK_SEL_REG8_bit;
    }; // 0xD4

    /* PRU_CFG_PRU1_SD_SAMPLE_SIZE_REG8 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU1_SD_SAMPLE_SIZE_REG8;

        volatile struct
        {
            uint32_t PRU1_SD_SAMPLE_SIZE8 :8; // 7:0
            uint32_t PRU1_FD_WINDOW_SIZE_8 :3; // 10:8
            uint32_t PRU1_FD_ONE_MIN_LIMIT_8 :5; // 15:11
            uint32_t PRU1_FD_ONE_MIN_8 :1; // 16
            uint32_t PRU1_FD_ONE_MAX_LIMIT_8 :5; // 21:17
            uint32_t PRU1_FD_ONE_MAX_8 :1; // 22
            uint32_t PRU1_FD_EN_8 :1; // 23
            uint32_t RSVD24 :8; // 31:24
        } PRU1_SD_SAMPLE_SIZE_REG8_bit;
    }; // 0xD8

    uint8_t RSVDDC[4]; // 0xDC - 0xDF

    /* PRU_CFG_PRU0_ED_RX_CFG_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU0_ED_RX_CFG_REG;

        volatile struct
        {
            uint32_t PRU0_ED_RX_SAMPLE_SIZE :3; // 2:0
            uint32_t PRU0_ED_RX_SB_POL :1; // 3
            uint32_t PRU0_ED_RX_CLK_SEL :1; // 4
            uint32_t RSVD5 :10; // 14:5
            uint32_t PRU0_ED_RX_DIV_FACTOR_FRAC :1; // 15
            uint32_t PRU0_ED_RX_DIV_FACTOR :16; // 31:16
        } PRU0_ED_RX_CFG_REG_bit;
    }; // 0xE0

    /* PRU_CFG_PRU0_ED_TX_CFG_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU0_ED_TX_CFG_REG;

        volatile struct
        {
            uint32_t RSVD0 :4; // 3:0
            uint32_t PRU0_ED_TX_CLK_SEL :1; // 4
            uint32_t PRU0_ED_BUSY_0 :1; // 5
            uint32_t PRU0_ED_BUSY_1 :1; // 6
            uint32_t PRU0_ED_BUSY_2 :1; // 7
            uint32_t PRU0_ENDAT0_CLK_SYNC :1; // 8
            uint32_t PRU0_ENDAT1_CLK_SYNC :1; // 9
            uint32_t PRU0_ENDAT2_CLK_SYNC :1; // 10
            uint32_t PRU0_ENDAT_SHARE_EN :1; // 11
            uint32_t RSVD12 :3; // 14:12
            uint32_t PRU0_ED_TX_DIV_FACTOR_FRAC :1; // 15
            uint32_t PRU0_ED_TX_DIV_FACTOR :16; // 31:16
        } PRU0_ED_TX_CFG_REG_bit;
    }; // 0xE4

    /* PRU_CFG_PRU0_ED_CH0_CFG0_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU0_ED_CH0_CFG0_REG;

        volatile struct
        {
            uint32_t PRU0_ED_TX_WDLY0 :11; // 10:0
            uint32_t PRU0_ED_TX_FRAME_SIZE0 :5; // 15:11
            uint32_t PRU0_ED_RX_FRAME_SIZE0 :12; // 27:16
            uint32_t PRU0_ED_RX_SNOOP0 :1; // 28
            uint32_t PRU0_ED_CLK_OUT_OVR_EN0 :1; // 29
            uint32_t PRU0_ED_SW_CLK_OUT0 :1; // 30
            uint32_t PRU0_ED_TX_FIFO_SWAP_BITS0 :1; // 31
        } PRU0_ED_CH0_CFG0_REG_bit;
    }; // 0xE8

    /* PRU_CFG_PRU0_ED_CH0_CFG1_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU0_ED_CH0_CFG1_REG;

        volatile struct
        {
            uint32_t PRU0_ED_TST_DELAY_COUNTER0 :16; // 15:0
            uint32_t PRU0_ED_RX_EN_COUNTER0 :16; // 31:16
        } PRU0_ED_CH0_CFG1_REG_bit;
    }; // 0xEC

    /* PRU_CFG_PRU0_ED_CH1_CFG0_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU0_ED_CH1_CFG0_REG;

        volatile struct
        {
            uint32_t PRU0_ED_TX_WDLY1 :11; // 10:0
            uint32_t PRU0_ED_TX_FRAME_SIZE1 :5; // 15:11
            uint32_t PRU0_ED_RX_FRAME_SIZE1 :12; // 27:16
            uint32_t PRU0_ED_RX_SNOOP1 :1; // 28
            uint32_t PRU0_ED_CLK_OUT_OVR_EN1 :1; // 29
            uint32_t PRU0_ED_SW_CLK_OUT1 :1; // 30
            uint32_t PRU0_ED_TX_FIFO_SWAP_BITS1 :1; // 31
        } PRU0_ED_CH1_CFG0_REG_bit;
    }; // 0xF0

    /* PRU_CFG_PRU0_ED_CH1_CFG1_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU0_ED_CH1_CFG1_REG;

        volatile struct
        {
            uint32_t PRU0_ED_TST_DELAY_COUNTER1 :16; // 15:0
            uint32_t PRU0_ED_RX_EN_COUNTER1 :16; // 31:16
        } PRU0_ED_CH1_CFG1_REG_bit;
    }; // 0xF4

    /* PRU_CFG_PRU0_ED_CH2_CFG0_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU0_ED_CH2_CFG0_REG;

        volatile struct
        {
            uint32_t PRU0_ED_TX_WDLY2 :11; // 10:0
            uint32_t PRU0_ED_TX_FRAME_SIZE2 :5; // 15:11
            uint32_t PRU0_ED_RX_FRAME_SIZE2 :12; // 27:16
            uint32_t PRU0_ED_RX_SNOOP2 :1; // 28
            uint32_t PRU0_ED_CLK_OUT_OVR_EN2 :1; // 29
            uint32_t PRU0_ED_SW_CLK_OUT2 :1; // 30
            uint32_t PRU0_ED_TX_FIFO_SWAP_BITS2 :1; // 31
        } PRU0_ED_CH2_CFG0_REG_bit;
    }; // 0xF8

    /* PRU_CFG_PRU0_ED_CH2_CFG1_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU0_ED_CH2_CFG1_REG;

        volatile struct
        {
            uint32_t PRU0_ED_TST_DELAY_COUNTER2 :16; // 15:0
            uint32_t PRU0_ED_RX_EN_COUNTER2 :16; // 31:16
        } PRU0_ED_CH2_CFG1_REG_bit;
    };
    // 0xFC

    /* PRU_CFG_PRU1_ED_RX_CFG_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU1_ED_RX_CFG_REG;

        volatile struct
        {
            uint32_t PRU1_ED_RX_SAMPLE_SIZE :3; // 2:0
            uint32_t PRU1_ED_RX_SB_POL :1; // 3
            uint32_t PRU1_ED_RX_CLK_SEL :1; // 4
            uint32_t RSVD5 :10; // 14:5
            uint32_t PRU1_ED_RX_DIV_FACTOR_FRAC :1; // 15
            uint32_t PRU1_ED_RX_DIV_FACTOR :16; // 31:16
        } PRU1_ED_RX_CFG_REG_bit;
    }; // 0x100

    /* PRU_CFG_PRU1_ED_TX_CFG_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU1_ED_TX_CFG_REG;

        volatile struct
        {
            uint32_t RSVD0 :4; // 3:0
            uint32_t PRU1_ED_TX_CLK_SEL :1; // 4
            uint32_t PRU1_ED_BUSY_0 :1; // 5
            uint32_t PRU1_ED_BUSY_1 :1; // 6
            uint32_t PRU1_ED_BUSY_2 :1; // 7
            uint32_t PRU1_ENDAT0_CLK_SYNC :1; // 8
            uint32_t PRU1_ENDAT1_CLK_SYNC :1; // 9
            uint32_t PRU1_ENDAT2_CLK_SYNC :1; // 10
            uint32_t PRU1_ENDAT_SHARE_EN :1; // 11
            uint32_t RSVD12 :3; // 14:12
            uint32_t PRU1_ED_TX_DIV_FACTOR_FRAC :1; // 15
            uint32_t PRU1_ED_TX_DIV_FACTOR :16; // 31:16
        } PRU1_ED_TX_CFG_REG_bit;
    }; // 0x104

    /* PRU_CFG_PRU1_ED_CH0_CFG0_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU1_ED_CH0_CFG0_REG;

        volatile struct
        {
            uint32_t PRU1_ED_TX_WDLY0 :11; // 10:0
            uint32_t PRU1_ED_TX_FRAME_SIZE0 :5; // 15:11
            uint32_t PRU1_ED_RX_FRAME_SIZE0 :12; // 27:16
            uint32_t PRU1_ED_RX_SNOOP0 :1; // 28
            uint32_t PRU1_ED_CLK_OUT_OVR_EN0 :1; // 29
            uint32_t PRU1_ED_SW_CLK_OUT0 :1; // 30
            uint32_t PRU1_ED_TX_FIFO_SWAP_BITS0 :1; // 31
        } PRU1_ED_CH0_CFG0_REG_bit;
    }; // 0x108

    /* PRU_CFG_PRU1_ED_CH0_CFG1_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU1_ED_CH0_CFG1_REG;

        volatile struct
        {
            uint32_t PRU1_ED_TST_DELAY_COUNTER0 :16; // 15:0
            uint32_t PRU1_ED_RX_EN_COUNTER0 :16; // 31:16
        } PRU1_ED_CH0_CFG1_REG_bit;
    }; // 0x10C

    /* PRU_CFG_PRU1_ED_CH1_CFG0_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU1_ED_CH1_CFG0_REG;

        volatile struct
        {
            uint32_t PRU1_ED_TX_WDLY1 :11; // 10:0
            uint32_t PRU1_ED_TX_FRAME_SIZE1 :5; // 15:11
            uint32_t PRU1_ED_RX_FRAME_SIZE1 :12; // 27:16
            uint32_t PRU1_ED_RX_SNOOP1 :1; // 28
            uint32_t PRU1_ED_CLK_OUT_OVR_EN1 :1; // 29
            uint32_t PRU1_ED_SW_CLK_OUT1 :1; // 30
            uint32_t PRU1_ED_TX_FIFO_SWAP_BITS1 :1; // 31
        } PRU1_ED_CH1_CFG0_REG_bit;
    }; // 0x110

    /* PRU_CFG_PRU1_ED_CH1_CFG1_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU1_ED_CH1_CFG1_REG;

        volatile struct
        {
            uint32_t PRU1_ED_TST_DELAY_COUNTER1 :16; // 15:0
            uint32_t PRU1_ED_RX_EN_COUNTER1 :16; // 31:16
        } PRU1_ED_CH1_CFG1_REG_bit;
    }; // 0x114

    /* PRU_CFG_PRU1_ED_CH2_CFG0_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU1_ED_CH2_CFG0_REG;

        volatile struct
        {
            uint32_t PRU1_ED_TX_WDLY2 :11; // 10:0
            uint32_t PRU1_ED_TX_FRAME_SIZE2 :5; // 15:11
            uint32_t PRU1_ED_RX_FRAME_SIZE2 :12; // 27:16
            uint32_t PRU1_ED_RX_SNOOP2 :1; // 28
            uint32_t PRU1_ED_CLK_OUT_OVR_EN2 :1; // 29
            uint32_t PRU1_ED_SW_CLK_OUT2 :1; // 30
            uint32_t PRU1_ED_TX_FIFO_SWAP_BITS2 :1; // 31
        } PRU1_ED_CH2_CFG0_REG_bit;
    }; // 0x118

    /* PRU_CFG_PRU1_ED_CH2_CFG1_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRU1_ED_CH2_CFG1_REG;

        volatile struct
        {
            uint32_t PRU1_ED_TST_DELAY_COUNTER2 :16; // 15:0
            uint32_t PRU1_ED_RX_EN_COUNTER2 :16; // 31:16
        } PRU1_ED_CH2_CFG1_REG_bit;
    }; // 0x11C

    uint8_t RSVD120[4]; // 0x120 - 0x123

    /* PRU_CFG_RTU0_POKE_EN0_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t RTU0_POKE_EN0_REG;

        volatile struct
        {
            uint32_t RTU0_POKE_R20_EN :4; // 3:0
            uint32_t RTU0_POKE_R21_EN :4; // 7:4
            uint32_t RTU0_POKE_R22_EN :4; // 11:8
            uint32_t RTU0_POKE_R23_EN :4; // 15:12
            uint32_t RTU0_POKE_R24_EN :4; // 19:16
            uint32_t RTU0_POKE_R25_EN :4; // 23:20
            uint32_t RTU0_POKE_R26_EN :4; // 27:24
            uint32_t RTU0_POKE_R27_EN :4; // 31:28
        } RTU0_POKE_EN0_REG_bit;
    }; // 0x124

    uint8_t RSVD128[4]; // 0x128 - 0x12B

    /* PRU_CFG_RTU1_POKE_EN0_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t RTU1_POKE_EN0_REG;

        volatile struct
        {
            uint32_t RTU1_POKE_R20_EN :4; // 3:0
            uint32_t RTU1_POKE_R21_EN :4; // 7:4
            uint32_t RTU1_POKE_R22_EN :4; // 11:8
            uint32_t RTU1_POKE_R23_EN :4; // 15:12
            uint32_t RTU1_POKE_R24_EN :4; // 19:16
            uint32_t RTU1_POKE_R25_EN :4; // 23:20
            uint32_t RTU1_POKE_R26_EN :4; // 27:24
            uint32_t RTU1_POKE_R27_EN :4; // 31:28
        } RTU1_POKE_EN0_REG_bit;
    }; // 0x12C

    /* PRU_CFG_PWM0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PWM0;

        volatile struct
        {
            uint32_t PWM0_DEBOUNCE_VALUE :8; // 7:0
            uint32_t PWM0_TRIP_MASK :9; // 16:8
            uint32_t PWM0_TRIP_CMP0_EN :1; // 17
            uint32_t PWM0_TRIP_RESET :1; // 18
            uint32_t PWM0_OVER_ERR_TRIP :1; // 19
            uint32_t PWM0_POS_ERR_TRIP :1; // 20
            uint32_t PWM0_TRIP_VEC :9; // 29:21
            uint32_t PWM0_TRIP_S :1; // 30
            uint32_t RSVD31 :1; // 31
        } PWM0_bit;
    }; // 0x130

    /* PRU_CFG_PWM1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PWM1;

        volatile struct
        {
            uint32_t PWM1_DEBOUNCE_VALUE :8; // 7:0
            uint32_t PWM1_TRIP_MASK :9; // 16:8
            uint32_t PWM1_TRIP_CMP0_EN :1; // 17
            uint32_t PWM1_TRIP_RESET :1; // 18
            uint32_t PWM1_OVER_ERR_TRIP :1; // 19
            uint32_t PWM1_POS_ERR_TRIP :1; // 20
            uint32_t PWM1_TRIP_VEC :9; // 29:21
            uint32_t PWM1_TRIP_S :1; // 30
            uint32_t RSVD31 :1; // 31
        } PWM1_bit;
    }; // 0x134

    /* PRU_CFG_PWM2 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PWM2;

        volatile struct
        {
            uint32_t PWM2_DEBOUNCE_VALUE :8; // 7:0
            uint32_t PWM2_TRIP_MASK :9; // 16:8
            uint32_t PWM2_TRIP_CMP0_EN :1; // 17
            uint32_t PWM2_TRIP_RESET :1; // 18
            uint32_t PWM2_OVER_ERR_TRIP :1; // 19
            uint32_t PWM2_POS_ERR_TRIP :1; // 20
            uint32_t PWM2_TRIP_VEC :9; // 29:21
            uint32_t PWM2_TRIP_S :1; // 30
            uint32_t RSVD31 :1; // 31
        } PWM2_bit;
    }; // 0x138

    /* PRU_CFG_PWM3 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PWM3;

        volatile struct
        {
            uint32_t PWM3_DEBOUNCE_VALUE :8; // 7:0
            uint32_t PWM3_TRIP_MASK :9; // 16:8
            uint32_t PWM3_TRIP_CMP0_EN :1; // 17
            uint32_t PWM3_TRIP_RESET :1; // 18
            uint32_t PWM3_OVER_ERR_TRIP :1; // 19
            uint32_t PWM3_POS_ERR_TRIP :1; // 20
            uint32_t PWM3_TRIP_VEC :9; // 29:21
            uint32_t PWM3_TRIP_S :1; // 30
            uint32_t RSVD31 :1; // 31
        } PWM3_bit;
    }; // 0x13C

    /* PRU_CFG_PWM0_0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PWM0_0;

        volatile struct
        {
            uint32_t PWM0_0_POS_INIT :2; // 1:0
            uint32_t PWM0_0_NEG_INIT :2; // 3:2
            uint32_t PWM0_0_POS_TRIP :2; // 5:4
            uint32_t PWM0_0_NEG_TRIP :2; // 7:6
            uint32_t PWM0_0_POS_ACT :2; // 9:8
            uint32_t PWM0_0_NEG_ACT :2; // 11:10
            uint32_t RSVD12 :20; // 31:12
        } PWM0_0_bit;
    }; // 0x140

    /* PRU_CFG_PWM0_1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PWM0_1;

        volatile struct
        {
            uint32_t PWM0_1_POS_INIT :2; // 1:0
            uint32_t PWM0_1_NEG_INIT :2; // 3:2
            uint32_t PWM0_1_POS_TRIP :2; // 5:4
            uint32_t PWM0_1_NEG_TRIP :2; // 7:6
            uint32_t PWM0_1_POS_ACT :2; // 9:8
            uint32_t PWM0_1_NEG_ACT :2; // 11:10
            uint32_t RSVD12 :20; // 31:12
        } PWM0_1_bit;
    }; // 0x144

    /* PRU_CFG_PWM0_2 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PWM0_2;

        volatile struct
        {
            uint32_t PWM0_2_POS_INIT :2; // 1:0
            uint32_t PWM0_2_NEG_INIT :2; // 3:2
            uint32_t PWM0_2_POS_TRIP :2; // 5:4
            uint32_t PWM0_2_NEG_TRIP :2; // 7:6
            uint32_t PWM0_2_POS_ACT :2; // 9:8
            uint32_t PWM0_2_NEG_ACT :2; // 11:10
            uint32_t RSVD12 :20; // 31:12
        } PWM0_2_bit;
    }; // 0x148

    /* PRU_CFG_PWM1_0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PWM1_0;

        volatile struct
        {
            uint32_t PWM1_0_POS_INIT :2; // 1:0
            uint32_t PWM1_0_NEG_INIT :2; // 3:2
            uint32_t PWM1_0_POS_TRIP :2; // 5:4
            uint32_t PWM1_0_NEG_TRIP :2; // 7:6
            uint32_t PWM1_0_POS_ACT :2; // 9:8
            uint32_t PWM1_0_NEG_ACT :2; // 11:10
            uint32_t RSVD12 :20; // 31:12
        } PWM1_0_bit;
    }; // 0x14C

    /* PRU_CFG_PWM1_1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PWM1_1;

        volatile struct
        {
            uint32_t PWM1_1_POS_INIT :2; // 1:0
            uint32_t PWM1_1_NEG_INIT :2; // 3:2
            uint32_t PWM1_1_POS_TRIP :2; // 5:4
            uint32_t PWM1_1_NEG_TRIP :2; // 7:6
            uint32_t PWM1_1_POS_ACT :2; // 9:8
            uint32_t PWM1_1_NEG_ACT :2; // 11:10
            uint32_t RSVD12 :20; // 31:12
        } PWM1_1_bit;
    }; // 0x150

    /* PRU_CFG_PWM1_2 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PWM1_2;

        volatile struct
        {
            uint32_t PWM1_2_POS_INIT :2; // 1:0
            uint32_t PWM1_2_NEG_INIT :2; // 3:2
            uint32_t PWM1_2_POS_TRIP :2; // 5:4
            uint32_t PWM1_2_NEG_TRIP :2; // 7:6
            uint32_t PWM1_2_POS_ACT :2; // 9:8
            uint32_t PWM1_2_NEG_ACT :2; // 11:10
            uint32_t RSVD12 :20; // 31:12
        } PWM1_2_bit;
    }; // 0x154

    /* PRU_CFG_PWM2_0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PWM2_0;

        volatile struct
        {
            uint32_t PWM2_0_POS_INIT :2; // 1:0
            uint32_t PWM2_0_NEG_INIT :2; // 3:2
            uint32_t PWM2_0_POS_TRIP :2; // 5:4
            uint32_t PWM2_0_NEG_TRIP :2; // 7:6
            uint32_t PWM2_0_POS_ACT :2; // 9:8
            uint32_t PWM2_0_NEG_ACT :2; // 11:10
            uint32_t RSVD12 :20; // 31:12
        } PWM2_0_bit;
    }; // 0x158

    /* PRU_CFG_PWM2_1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PWM2_1;

        volatile struct
        {
            uint32_t PWM2_1_POS_INIT :2; // 1:0
            uint32_t PWM2_1_NEG_INIT :2; // 3:2
            uint32_t PWM2_1_POS_TRIP :2; // 5:4
            uint32_t PWM2_1_NEG_TRIP :2; // 7:6
            uint32_t PWM2_1_POS_ACT :2; // 9:8
            uint32_t PWM2_1_NEG_ACT :2; // 11:10
            uint32_t RSVD12 :20; // 31:12
        } PWM2_1_bit;
    }; // 0x15C

    /* PRU_CFG_PWM2_2 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PWM2_2;

        volatile struct
        {
            uint32_t PWM2_2_POS_INIT :2; // 1:0
            uint32_t PWM2_2_NEG_INIT :2; // 3:2
            uint32_t PWM2_2_POS_TRIP :2; // 5:4
            uint32_t PWM2_2_NEG_TRIP :2; // 7:6
            uint32_t PWM2_2_POS_ACT :2; // 9:8
            uint32_t PWM2_2_NEG_ACT :2; // 11:10
            uint32_t RSVD12 :20; // 31:12
        } PWM2_2_bit;
    }; // 0x160

    /* PRU_CFG_PWM3_0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PWM3_0;

        volatile struct
        {
            uint32_t PWM3_0_POS_INIT :2; // 1:0
            uint32_t PWM3_0_NEG_INIT :2; // 3:2
            uint32_t PWM3_0_POS_TRIP :2; // 5:4
            uint32_t PWM3_0_NEG_TRIP :2; // 7:6
            uint32_t PWM3_0_POS_ACT :2; // 9:8
            uint32_t PWM3_0_NEG_ACT :2; // 11:10
            uint32_t RSVD12 :20; // 31:12
        } PWM3_0_bit;
    }; // 0x164

    /* PRU_CFG_PWM3_1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PWM3_1;

        volatile struct
        {
            uint32_t PWM3_1_POS_INIT :2; // 1:0
            uint32_t PWM3_1_NEG_INIT :2; // 3:2
            uint32_t PWM3_1_POS_TRIP :2; // 5:4
            uint32_t PWM3_1_NEG_TRIP :2; // 7:6
            uint32_t PWM3_1_POS_ACT :2; // 9:8
            uint32_t PWM3_1_NEG_ACT :2; // 11:10
            uint32_t RSVD12 :20; // 31:12
        } PWM3_1_bit;
    }; // 0x168

    /* PRU_CFG_PWM3_2 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PWM3_2;

        volatile struct
        {
            uint32_t PWM3_2_POS_INIT :2; // 1:0
            uint32_t PWM3_2_NEG_INIT :2; // 3:2
            uint32_t PWM3_2_POS_TRIP :2; // 5:4
            uint32_t PWM3_2_NEG_TRIP :2; // 7:6
            uint32_t PWM3_2_POS_ACT :2; // 9:8
            uint32_t PWM3_2_NEG_ACT :2; // 11:10
            uint32_t RSVD12 :20; // 31:12
        } PWM3_2_bit;
    }; // 0x16C

    /* PRU_CFG_SPIN_LOCK0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t SPIN_LOCK0;

        volatile struct
        {
            uint32_t MMR_OWN_REQ_STATUS_0 :1; // 0
            uint32_t MMR_OWN_REQ_CLR_0 :1; // 1
            uint32_t RSVD2 :6; // 7:2
            uint32_t MMR_OWN_REQ_VECTOR_0 :6; // 13:8
            uint32_t RSVD14 :18; // 31:14
        } SPIN_LOCK0_bit;
    }; // 0x170

    /* PRU_CFG_SPIN_LOCK1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t SPIN_LOCK1;

        volatile struct
        {
            uint32_t MMR_OWN_REQ_STATUS_1 :1; // 0
            uint32_t MMR_OWN_REQ_CLR_1 :1; // 1
            uint32_t RSVD2 :6; // 7:2
            uint32_t MMR_OWN_REQ_VECTOR_1 :6; // 13:8
            uint32_t RSVD14 :18; // 31:14
        } SPIN_LOCK1_bit;
    }; // 0x174

    /* PRU_CFG_PA_STAT_PDSP_CFG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PA_STAT_PDSP_CFG0;

        volatile struct
        {
            uint32_t PA_PDSP0_INDEX :14; // 13:0
            uint32_t PA_PDSP0_INC_VAL :17; // 30:14
            uint32_t PA_PDSP0_INC_TYPE :1; // 31
        } PA_STAT_PDSP_CFG0_bit;
    }; // 0x178

    /* PRU_CFG_PA_STAT_PDSP_STAT0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PA_STAT_PDSP_STAT0;

        volatile struct
        {
            uint32_t PA_PDSP0_READY :1; // 0
            uint32_t PA_PDSP0_STATUS :3; // 3:1
            uint32_t RSVD4 :28; // 31:4
        } PA_STAT_PDSP_STAT0_bit;
    }; // 0x17C

    /* PRU_CFG_PA_STAT_PDSP_CFG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PA_STAT_PDSP_CFG1;

        volatile struct
        {
            uint32_t PA_PDSP1_INDEX :14; // 13:0
            uint32_t PA_PDSP1_INC_VAL :17; // 30:14
            uint32_t PA_PDSP1_INC_TYPE :1; // 31
        } PA_STAT_PDSP_CFG1_bit;
    }; // 0x180

    /* PRU_CFG_PA_STAT_PDSP_STAT1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PA_STAT_PDSP_STAT1;

        volatile struct
        {
            uint32_t PA_PDSP1_READY :1; // 0
            uint32_t PA_PDSP1_STATUS :3; // 3:1
            uint32_t RSVD4 :28; // 31:4
        } PA_STAT_PDSP_STAT1_bit;
    }; // 0x184

    /* PRU_CFG_PA_STAT_PDSP_CFG2 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PA_STAT_PDSP_CFG2;

        volatile struct
        {
            uint32_t PA_PDSP2_INDEX :14; // 13:0
            uint32_t PA_PDSP2_INC_VAL :17; // 30:14
            uint32_t PA_PDSP2_INC_TYPE :1; // 31
        } PA_STAT_PDSP_CFG2_bit;
    }; // 0x188

    /* PRU_CFG_PA_STAT_PDSP_STAT2 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PA_STAT_PDSP_STAT2;

        volatile struct
        {
            uint32_t PA_PDSP2_READY :1; // 0
            uint32_t PA_PDSP2_STATUS :3; // 3:1
            uint32_t RSVD4 :28; // 31:4
        } PA_STAT_PDSP_STAT2_bit;
    }; // 0x18C

    /* PRU_CFG_PA_STAT_PDSP_CFG3 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PA_STAT_PDSP_CFG3;

        volatile struct
        {
            uint32_t PA_PDSP3_INDEX :14; // 13:0
            uint32_t PA_PDSP3_INC_VAL :17; // 30:14
            uint32_t PA_PDSP3_INC_TYPE :1; // 31
        } PA_STAT_PDSP_CFG3_bit;
    }; // 0x190

    /* PRU_CFG_PA_STAT_PDSP_STAT3 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PA_STAT_PDSP_STAT3;

        volatile struct
        {
            uint32_t PA_PDSP3_READY :1; // 0
            uint32_t PA_PDSP3_STATUS :3; // 3:1
            uint32_t RSVD4 :28; // 31:4
        } PA_STAT_PDSP_STAT3_bit;
    };
    // 0x194
};

struct pru_iep
{
    /* PRU_IEP_GLOBAL_CFG_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t GLOBAL_CFG_REG;

        volatile struct
        {
            uint32_t CNT_ENABLE :1; // 0
            uint32_t RSVD1 :3; // 3:1
            uint32_t DEFAULT_INC :4; // 7:4
            uint32_t CMP_INC :12; // 19:8
            uint32_t RSVD20 :12; // 31:20
        } GLOBAL_CFG_REG_bit;
    }; // 0x0

    /* PRU_IEP_GLOBAL_STATUS_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t GLOBAL_STATUS_REG;

        volatile struct
        {
            uint32_t CNT_OVF :1; // 0
            uint32_t RSVD1 :31; // 31:1
        } GLOBAL_STATUS_REG_bit;
    }; // 0x4

    /* PRU_IEP_COMPEN_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t COMPEN_REG;

        volatile struct
        {
            uint32_t COMPEN_CNT :23; // 22:0
            uint32_t RSVD23 :9; // 31:23
        } COMPEN_REG_bit;
    }; // 0x8

    /* PRU_IEP_SLOW_COMPEN_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t SLOW_COMPEN_REG;

        volatile struct
        {
            uint32_t SLOW_COMPEN_CNT :32; // 31:0
        } SLOW_COMPEN_REG_bit;
    }; // 0xC

    /* PRU_IEP_COUNT_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t COUNT_REG0;

        volatile struct
        {
            uint32_t COUNT_LO :32; // 31:0
        } COUNT_REG0_bit;
    }; // 0x10

    /* PRU_IEP_COUNT_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t COUNT_REG1;

        volatile struct
        {
            uint32_t COUNT_HI :32; // 31:0
        } COUNT_REG1_bit;
    }; // 0x14

    /* PRU_IEP_CAP_CFG_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAP_CFG_REG;

        volatile struct
        {
            uint32_t CAP_EN :10; // 9:0
            uint32_t CAP_ASYNC_EN :8; // 17:10
            uint32_t EXT_CAP_EN :6; // 23:18
            uint32_t RSVD24 :8; // 31:24
        } CAP_CFG_REG_bit;
    }; // 0x18

    /* PRU_IEP_CAP_STATUS_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAP_STATUS_REG;

        volatile struct
        {
            uint32_t CAP_VALID :11; // 10:0
            uint32_t RSVD11 :5; // 15:11
            uint32_t CAP_RAW :8; // 23:16
            uint32_t RSVD24 :8; // 31:24
        } CAP_STATUS_REG_bit;
    }; // 0x1C

    /* PRU_IEP_CAPR0_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR0_REG0;

        volatile struct
        {
            uint32_t CAPR0_0 :32; // 31:0
        } CAPR0_REG0_bit;
    }; // 0x20

    /* PRU_IEP_CAPR0_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR0_REG1;

        volatile struct
        {
            uint32_t CAPR0_1 :32; // 31:0
        } CAPR0_REG1_bit;
    }; // 0x24

    /* PRU_IEP_CAPR1_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR1_REG0;

        volatile struct
        {
            uint32_t CAPR1_0 :32; // 31:0
        } CAPR1_REG0_bit;
    }; // 0x28

    /* PRU_IEP_CAPR1_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR1_REG1;

        volatile struct
        {
            uint32_t CAPR1_1 :32; // 31:0
        } CAPR1_REG1_bit;
    }; // 0x2C

    /* PRU_IEP_CAPR2_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR2_REG0;

        volatile struct
        {
            uint32_t CAPR2_0 :32; // 31:0
        } CAPR2_REG0_bit;
    }; // 0x30

    /* PRU_IEP_CAPR2_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR2_REG1;

        volatile struct
        {
            uint32_t CAPR2_1 :32; // 31:0
        } CAPR2_REG1_bit;
    }; // 0x34

    /* PRU_IEP_CAPR3_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR3_REG0;

        volatile struct
        {
            uint32_t CAPR3_0 :32; // 31:0
        } CAPR3_REG0_bit;
    }; // 0x38

    /* PRU_IEP_CAPR3_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR3_REG1;

        volatile struct
        {
            uint32_t CAPR3_1 :32; // 31:0
        } CAPR3_REG1_bit;
    }; // 0x3C

    /* PRU_IEP_CAPR4_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR4_REG0;

        volatile struct
        {
            uint32_t CAPR4_0 :32; // 31:0
        } CAPR4_REG0_bit;
    }; // 0x40

    /* PRU_IEP_CAPR4_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR4_REG1;

        volatile struct
        {
            uint32_t CAPR4_1 :32; // 31:0
        } CAPR4_REG1_bit;
    }; // 0x44

    /* PRU_IEP_CAPR5_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR5_REG0;

        volatile struct
        {
            uint32_t CAPR5_0 :32; // 31:0
        } CAPR5_REG0_bit;
    }; // 0x48

    /* PRU_IEP_CAPR5_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR5_REG1;

        volatile struct
        {
            uint32_t CAPR5_1 :32; // 31:0
        } CAPR5_REG1_bit;
    }; // 0x4C

    /* PRU_IEP_CAPR6_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR6_REG0;

        volatile struct
        {
            uint32_t CAPR6_0 :32; // 31:0
        } CAPR6_REG0_bit;
    }; // 0x50

    /* PRU_IEP_CAPR6_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR6_REG1;

        volatile struct
        {
            uint32_t CAPR6_1 :32; // 31:0
        } CAPR6_REG1_bit;
    }; // 0x54

    /* PRU_IEP_CAPF6_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPF6_REG0;

        volatile struct
        {
            uint32_t CAPF6_0 :32; // 31:0
        } CAPF6_REG0_bit;
    }; // 0x58

    /* PRU_IEP_CAPF6_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPF6_REG1;

        volatile struct
        {
            uint32_t CAPF6_1 :32; // 31:0
        } CAPF6_REG1_bit;
    }; // 0x5C

    /* PRU_IEP_CAPR7_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR7_REG0;

        volatile struct
        {
            uint32_t CAPR7_0 :32; // 31:0
        } CAPR7_REG0_bit;
    }; // 0x60

    /* PRU_IEP_CAPR7_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR7_REG1;

        volatile struct
        {
            uint32_t CAPR7_1 :32; // 31:0
        } CAPR7_REG1_bit;
    }; // 0x64

    /* PRU_IEP_CAPF7_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPF7_REG0;

        volatile struct
        {
            uint32_t CAPF7_0 :32; // 31:0
        } CAPF7_REG0_bit;
    }; // 0x68

    /* PRU_IEP_CAPF7_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPF7_REG1;

        volatile struct
        {
            uint32_t CAPF7_1 :32; // 31:0
        } CAPF7_REG1_bit;
    }; // 0x6C

    /* PRU_IEP_CMP_CFG_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP_CFG_REG;

        volatile struct
        {
            uint32_t CMP0_RST_CNT_EN :1; // 0
            uint32_t CMP_EN :16; // 16:1
            uint32_t SHADOW_EN :1; // 17
            uint32_t RSVD18 :14; // 31:18
        } CMP_CFG_REG_bit;
    }; // 0x70

    /* PRU_IEP_CMP_STATUS_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP_STATUS_REG;

        volatile struct
        {
            uint32_t CMP_STATUS :16; // 15:0
            uint32_t RSVD16 :16; // 31:16
        } CMP_STATUS_REG_bit;
    }; // 0x74

    /* PRU_IEP_CMP0_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP0_REG0;

        volatile struct
        {
            uint32_t CMP0_0 :32; // 31:0
        } CMP0_REG0_bit;
    }; // 0x78

    /* PRU_IEP_CMP0_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP0_REG1;

        volatile struct
        {
            uint32_t CMP0_1 :32; // 31:0
        } CMP0_REG1_bit;
    }; // 0x7C

    /* PRU_IEP_CMP1_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP1_REG0;

        volatile struct
        {
            uint32_t CMP1_0 :32; // 31:0
        } CMP1_REG0_bit;
    }; // 0x80

    /* PRU_IEP_CMP1_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP1_REG1;

        volatile struct
        {
            uint32_t CMP1_1 :32; // 31:0
        } CMP1_REG1_bit;
    }; // 0x84

    /* PRU_IEP_CMP2_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP2_REG0;

        volatile struct
        {
            uint32_t CMP2_0 :32; // 31:0
        } CMP2_REG0_bit;
    }; // 0x88

    /* PRU_IEP_CMP2_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP2_REG1;

        volatile struct
        {
            uint32_t CMP2_1 :32; // 31:0
        } CMP2_REG1_bit;
    }; // 0x8C

    /* PRU_IEP_CMP3_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP3_REG0;

        volatile struct
        {
            uint32_t CMP3_0 :32; // 31:0
        } CMP3_REG0_bit;
    }; // 0x90

    /* PRU_IEP_CMP3_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP3_REG1;

        volatile struct
        {
            uint32_t CMP3_1 :32; // 31:0
        } CMP3_REG1_bit;
    }; // 0x94

    /* PRU_IEP_CMP4_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP4_REG0;

        volatile struct
        {
            uint32_t CMP4_0 :32; // 31:0
        } CMP4_REG0_bit;
    }; // 0x98

    /* PRU_IEP_CMP4_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP4_REG1;

        volatile struct
        {
            uint32_t CMP4_1 :32; // 31:0
        } CMP4_REG1_bit;
    }; // 0x9C

    /* PRU_IEP_CMP5_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP5_REG0;

        volatile struct
        {
            uint32_t CMP5_0 :32; // 31:0
        } CMP5_REG0_bit;
    }; // 0xA0

    /* PRU_IEP_CMP5_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP5_REG1;

        volatile struct
        {
            uint32_t CMP5_1 :32; // 31:0
        } CMP5_REG1_bit;
    }; // 0xA4

    /* PRU_IEP_CMP6_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP6_REG0;

        volatile struct
        {
            uint32_t CMP6_0 :32; // 31:0
        } CMP6_REG0_bit;
    }; // 0xA8

    /* PRU_IEP_CMP6_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP6_REG1;

        volatile struct
        {
            uint32_t CMP6_1 :32; // 31:0
        } CMP6_REG1_bit;
    }; // 0xAC

    /* PRU_IEP_CMP7_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP7_REG0;

        volatile struct
        {
            uint32_t CMP7_0 :32; // 31:0
        } CMP7_REG0_bit;
    }; // 0xB0

    /* PRU_IEP_CMP7_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP7_REG1;

        volatile struct
        {
            uint32_t CMP7_1 :32; // 31:0
        } CMP7_REG1_bit;
    }; // 0xB4

    /* PRU_IEP_RXIPG0_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t RXIPG0_REG;

        volatile struct
        {
            uint32_t RX_IPG0 :16; // 15:0
            uint32_t RX_MIN_IPG0 :16; // 31:16
        } RXIPG0_REG_bit;
    }; // 0xB8

    /* PRU_IEP_RXIPG1_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t RXIPG1_REG;

        volatile struct
        {
            uint32_t RX_IPG1 :16; // 15:0
            uint32_t RX_MIN_IPG1 :16; // 31:16
        } RXIPG1_REG_bit;
    }; // 0xBC

    /* PRU_IEP_CMP8_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP8_REG0;

        volatile struct
        {
            uint32_t CMP8_0 :32; // 31:0
        } CMP8_REG0_bit;
    }; // 0xC0

    /* PRU_IEP_CMP8_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP8_REG1;

        volatile struct
        {
            uint32_t CMP8_1 :32; // 31:0
        } CMP8_REG1_bit;
    }; // 0xC4

    /* PRU_IEP_CMP9_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP9_REG0;

        volatile struct
        {
            uint32_t CMP9_0 :32; // 31:0
        } CMP9_REG0_bit;
    }; // 0xC8

    /* PRU_IEP_CMP9_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP9_REG1;

        volatile struct
        {
            uint32_t CMP9_1 :32; // 31:0
        } CMP9_REG1_bit;
    }; // 0xCC

    /* PRU_IEP_CMP10_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP10_REG0;

        volatile struct
        {
            uint32_t CMP10_0 :32; // 31:0
        } CMP10_REG0_bit;
    }; // 0xD0

    /* PRU_IEP_CMP10_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP10_REG1;

        volatile struct
        {
            uint32_t CMP10_1 :32; // 31:0
        } CMP10_REG1_bit;
    }; // 0xD4

    /* PRU_IEP_CMP11_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP11_REG0;

        volatile struct
        {
            uint32_t CMP11_0 :32; // 31:0
        } CMP11_REG0_bit;
    }; // 0xD8

    /* PRU_IEP_CMP11_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP11_REG1;

        volatile struct
        {
            uint32_t CMP11_1 :32; // 31:0
        } CMP11_REG1_bit;
    }; // 0xDC

    /* PRU_IEP_CMP12_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP12_REG0;

        volatile struct
        {
            uint32_t CMP12_0 :32; // 31:0
        } CMP12_REG0_bit;
    }; // 0xE0

    /* PRU_IEP_CMP12_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP12_REG1;

        volatile struct
        {
            uint32_t CMP12_1 :32; // 31:0
        } CMP12_REG1_bit;
    }; // 0xE4

    /* PRU_IEP_CMP13_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP13_REG0;

        volatile struct
        {
            uint32_t CMP13_0 :32; // 31:0
        } CMP13_REG0_bit;
    }; // 0xE8

    /* PRU_IEP_CMP13_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP13_REG1;

        volatile struct
        {
            uint32_t CMP13_1 :32; // 31:0
        } CMP13_REG1_bit;
    }; // 0xEC

    /* PRU_IEP_CMP14_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP14_REG0;

        volatile struct
        {
            uint32_t CMP14_0 :32; // 31:0
        } CMP14_REG0_bit;
    }; // 0xF0

    /* PRU_IEP_CMP14_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP14_REG1;

        volatile struct
        {
            uint32_t CMP14_1 :32; // 31:0
        } CMP14_REG1_bit;
    }; // 0xF4

    /* PRU_IEP_CMP15_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP15_REG0;

        volatile struct
        {
            uint32_t CMP15_0 :32; // 31:0
        } CMP15_REG0_bit;
    }; // 0xF8

    /* PRU_IEP_CMP15_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CMP15_REG1;

        volatile struct
        {
            uint32_t CMP15_1 :32; // 31:0
        } CMP15_REG1_bit;
    }; // 0xFC

    /* PRU_IEP_COUNT_RESET_VAL_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t COUNT_RESET_VAL_REG0;

        volatile struct
        {
            uint32_t RESET_VAL_0 :32; // 31:0
        } COUNT_RESET_VAL_REG0_bit;
    }; // 0x100

    /* PRU_IEP_COUNT_RESET_VAL_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t COUNT_RESET_VAL_REG1;

        volatile struct
        {
            uint32_t RESET_VAL_1 :32; // 31:0
        } COUNT_RESET_VAL_REG1_bit;
    }; // 0x104

    /* PRU_IEP_PWM_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PWM_REG;

        volatile struct
        {
            uint32_t PWM0_RST_CNT_EN :1; // 0
            uint32_t PWM0_HIT :1; // 1
            uint32_t PWM3_RST_CNT_EN :1; // 2
            uint32_t PWM3_HIT :1; // 3
            uint32_t RSVD4 :28; // 31:4
        } PWM_REG_bit;
    }; // 0x108

    /* PRU_IEP_CAPR0_BI_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR0_BI_REG0;

        volatile struct
        {
            uint32_t CAPR0_0 :32; // 31:0
        } CAPR0_BI_REG0_bit;
    }; // 0x10C

    /* PRU_IEP_CAPR0_BI_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR0_BI_REG1;

        volatile struct
        {
            uint32_t CAPR0_1 :32; // 31:0
        } CAPR0_BI_REG1_bit;
    }; // 0x110

    /* PRU_IEP_CAPR1_BI_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR1_BI_REG0;

        volatile struct
        {
            uint32_t CAPR1_0 :32; // 31:0
        } CAPR1_BI_REG0_bit;
    }; // 0x114

    /* PRU_IEP_CAPR1_BI_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR1_BI_REG1;

        volatile struct
        {
            uint32_t CAPR1_1 :32; // 31:0
        } CAPR1_BI_REG1_bit;
    }; // 0x118

    /* PRU_IEP_CAPR2_BI_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR2_BI_REG0;

        volatile struct
        {
            uint32_t CAPR2_0 :32; // 31:0
        } CAPR2_BI_REG0_bit;
    }; // 0x11C

    /* PRU_IEP_CAPR2_BI_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR2_BI_REG1;

        volatile struct
        {
            uint32_t CAPR2_1 :32; // 31:0
        } CAPR2_BI_REG1_bit;
    }; // 0x120

    /* PRU_IEP_CAPR3_BI_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR3_BI_REG0;

        volatile struct
        {
            uint32_t CAPR3_0 :32; // 31:0
        } CAPR3_BI_REG0_bit;
    }; // 0x124

    /* PRU_IEP_CAPR3_BI_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR3_BI_REG1;

        volatile struct
        {
            uint32_t CAPR3_1 :32; // 31:0
        } CAPR3_BI_REG1_bit;
    }; // 0x128

    /* PRU_IEP_CAPR4_BI_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR4_BI_REG0;

        volatile struct
        {
            uint32_t CAPR4_0 :32; // 31:0
        } CAPR4_BI_REG0_bit;
    }; // 0x12C

    /* PRU_IEP_CAPR4_BI_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR4_BI_REG1;

        volatile struct
        {
            uint32_t CAPR4_1 :32; // 31:0
        } CAPR4_BI_REG1_bit;
    }; // 0x130

    /* PRU_IEP_CAPR5_BI_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR5_BI_REG0;

        volatile struct
        {
            uint32_t CAPR5_0 :32; // 31:0
        } CAPR5_BI_REG0_bit;
    }; // 0x134

    /* PRU_IEP_CAPR5_BI_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR5_BI_REG1;

        volatile struct
        {
            uint32_t CAPR5_1 :32; // 31:0
        } CAPR5_BI_REG1_bit;
    }; // 0x138

    /* PRU_IEP_CAPR6_BI_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR6_BI_REG0;

        volatile struct
        {
            uint32_t CAPR6_0 :32; // 31:0
        } CAPR6_BI_REG0_bit;
    }; // 0x13C

    /* PRU_IEP_CAPR6_BI_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR6_BI_REG1;

        volatile struct
        {
            uint32_t CAPR6_1 :32; // 31:0
        } CAPR6_BI_REG1_bit;
    }; // 0x140

    /* PRU_IEP_CAPF6_BI_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPF6_BI_REG0;

        volatile struct
        {
            uint32_t CAPF6_0 :32; // 31:0
        } CAPF6_BI_REG0_bit;
    }; // 0x144

    /* PRU_IEP_CAPF6_BI_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPF6_BI_REG1;

        volatile struct
        {
            uint32_t CAPF6_1 :32; // 31:0
        } CAPF6_BI_REG1_bit;
    }; // 0x148

    /* PRU_IEP_CAPR7_BI_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR7_BI_REG0;

        volatile struct
        {
            uint32_t CAPR7_0 :32; // 31:0
        } CAPR7_BI_REG0_bit;
    }; // 0x14C

    /* PRU_IEP_CAPR7_BI_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPR7_BI_REG1;

        volatile struct
        {
            uint32_t CAPR7_1 :32; // 31:0
        } CAPR7_BI_REG1_bit;
    }; // 0x150

    /* PRU_IEP_CAPF7_BI_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPF7_BI_REG0;

        volatile struct
        {
            uint32_t CAPF7_0 :32; // 31:0
        } CAPF7_BI_REG0_bit;
    }; // 0x154

    /* PRU_IEP_CAPF7_BI_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAPF7_BI_REG1;

        volatile struct
        {
            uint32_t CAPF7_1 :32; // 31:0
        } CAPF7_BI_REG1_bit;
    }; // 0x158

    uint8_t RSVD15C[36]; // 0x15C - 0x17F

    /* PRU_IEP_SYNC_CTRL_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t SYNC_CTRL_REG;

        volatile struct
        {
            uint32_t SYNC_EN :1; // 0
            uint32_t SYNC0_EN :1; // 1
            uint32_t SYNC1_EN :1; // 2
            uint32_t RSVD3 :1; // 3
            uint32_t SYNC0_ACK_EN :1; // 4
            uint32_t SYNC0_CYCLIC_EN :1; // 5
            uint32_t SYNC1_ACK_EN :1; // 6
            uint32_t SYNC1_CYCLIC_EN :1; // 7
            uint32_t SYNC1_IND_EN :1; // 8
            uint32_t SYNC0_OUT_NV_EN :1; // 9
            uint32_t SYNC1_OUT_NV_EN :1; // 10
            uint32_t RSVD11 :21; // 31:11
        } SYNC_CTRL_REG_bit;
    }; // 0x180

    /* PRU_IEP_SYNC_FIRST_STAT_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t SYNC_FIRST_STAT_REG;

        volatile struct
        {
            uint32_t FIRST_SYNC0 :1; // 0
            uint32_t FIRST_SYNC1 :1; // 1
            uint32_t RSVD2 :30; // 31:2
        } SYNC_FIRST_STAT_REG_bit;
    }; // 0x184

    /* PRU_IEP_SYNC0_STAT_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t SYNC0_STAT_REG;

        volatile struct
        {
            uint32_t SYNC0_PEND :1; // 0
            uint32_t RSVD1 :31; // 31:1
        } SYNC0_STAT_REG_bit;
    }; // 0x188

    /* PRU_IEP_SYNC1_STAT_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t SYNC1_STAT_REG;

        volatile struct
        {
            uint32_t SYNC1_PEND :1; // 0
            uint32_t RSVD1 :31; // 31:1
        } SYNC1_STAT_REG_bit;
    }; // 0x18C

    /* PRU_IEP_SYNC_PWIDTH_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t SYNC_PWIDTH_REG;

        volatile struct
        {
            uint32_t SYNC_HPW :32; // 31:0
        } SYNC_PWIDTH_REG_bit;
    }; // 0x190

    /* PRU_IEP_SYNC0_PERIOD_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t SYNC0_PERIOD_REG;

        volatile struct
        {
            uint32_t SYNC0_PERIOD :32; // 31:0
        } SYNC0_PERIOD_REG_bit;
    }; // 0x194

    /* PRU_IEP_SYNC1_DELAY_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t SYNC1_DELAY_REG;

        volatile struct
        {
            uint32_t SYNC1_DELAY :32; // 31:0
        } SYNC1_DELAY_REG_bit;
    }; // 0x198

    /* PRU_IEP_SYNC_START_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t SYNC_START_REG;

        volatile struct
        {
            uint32_t SYNC_START :32; // 31:0
        } SYNC_START_REG_bit;
    }; // 0x19C

    uint8_t RSVD1A0[96]; // 0x1A0 - 0x1FF

    /* PRU_IEP_WD_PREDIV_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t WD_PREDIV_REG;

        volatile struct
        {
            uint32_t PRE_DIV :16; // 15:0
            uint32_t RSVD16 :16; // 31:16
        } WD_PREDIV_REG_bit;
    }; // 0x200

    /* PRU_IEP_PDI_WD_TIM_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PDI_WD_TIM_REG;

        volatile struct
        {
            uint32_t PDI_WD_TIME :16; // 15:0
            uint32_t RSVD16 :16; // 31:16
        } PDI_WD_TIM_REG_bit;
    }; // 0x204

    /* PRU_IEP_PD_WD_TIM_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PD_WD_TIM_REG;

        volatile struct
        {
            uint32_t PD_WD_TIME :16; // 15:0
            uint32_t RSVD16 :16; // 31:16
        } PD_WD_TIM_REG_bit;
    }; // 0x208

    /* PRU_IEP_WD_STATUS_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t WD_STATUS_REG;

        volatile struct
        {
            uint32_t PD_WD_STAT :1; // 0
            uint32_t RSVD1 :15; // 15:1
            uint32_t PDI_WD_STAT :1; // 16
            uint32_t RSVD17 :15; // 31:17
        } WD_STATUS_REG_bit;
    }; // 0x20C

    /* PRU_IEP_WD_EXP_CNT_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t WD_EXP_CNT_REG;

        volatile struct
        {
            uint32_t PDI_EXP_CNT :8; // 7:0
            uint32_t PD_EXP_CNT :8; // 15:8
            uint32_t RSVD16 :16; // 31:16
        } WD_EXP_CNT_REG_bit;
    }; // 0x210

    /* PRU_IEP_WD_CTRL_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t WD_CTRL_REG;

        volatile struct
        {
            uint32_t PD_WD_EN :1; // 0
            uint32_t RSVD1 :15; // 15:1
            uint32_t PDI_WD_EN :1; // 16
            uint32_t RSVD17 :15; // 31:17
        } WD_CTRL_REG_bit;
    }; // 0x214

    uint8_t RSVD218[232]; // 0x218 - 0x2FF

    /* PRU_IEP_DIGIO_CTRL_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t DIGIO_CTRL_REG;

        volatile struct
        {
            uint32_t OUTVALID_POL :1; // 0
            uint32_t OUTVALID_MODE :1; // 1
            uint32_t BIDI_MODE :1; // 2
            uint32_t WD_MODE :1; // 3
            uint32_t IN_MODE :2; // 5:4
            uint32_t OUT_MODE :2; // 7:6
            uint32_t RSVD8 :24; // 31:8
        } DIGIO_CTRL_REG_bit;
    }; // 0x300

    /* PRU_IEP_DIGIO_STATUS_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t DIGIO_STATUS_REG;

        volatile struct
        {
            uint32_t DIGIO_STAT :32; // 31:0
        } DIGIO_STATUS_REG_bit;
    }; // 0x304

    /* PRU_IEP_DIGIO_DATA_IN_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t DIGIO_DATA_IN_REG;

        volatile struct
        {
            uint32_t DATA_IN :32; // 31:0
        } DIGIO_DATA_IN_REG_bit;
    }; // 0x308

    /* PRU_IEP_DIGIO_DATA_IN_RAW_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t DIGIO_DATA_IN_RAW_REG;

        volatile struct
        {
            uint32_t DATA_IN_RAW :32; // 31:0
        } DIGIO_DATA_IN_RAW_REG_bit;
    }; // 0x30C

    /* PRU_IEP_DIGIO_DATA_OUT_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t DIGIO_DATA_OUT_REG;

        volatile struct
        {
            uint32_t DATA_OUT :32; // 31:0
        } DIGIO_DATA_OUT_REG_bit;
    }; // 0x310

    /* PRU_IEP_DIGIO_DATA_OUT_EN_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t DIGIO_DATA_OUT_EN_REG;

        volatile struct
        {
            uint32_t DATA_OUT_EN :32; // 31:0
        } DIGIO_DATA_OUT_EN_REG_bit;
    }; // 0x314

    /* PRU_IEP_DIGIO_EXP_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t DIGIO_EXP_REG;

        volatile struct
        {
            uint32_t SW_DATA_OUT_UP :1; // 0
            uint32_t OUTVALID_OVR_EN :1; // 1
            uint32_t SW_OUTVALID :1; // 2
            uint32_t RSVD3 :1; // 3
            uint32_t OUTVALID_DLY :4; // 7:4
            uint32_t SOF_DLY :4; // 11:8
            uint32_t SOF_SEL :1; // 12
            uint32_t EOF_SEL :1; // 13
            uint32_t RSVD14 :18; // 31:14
        } DIGIO_EXP_REG_bit;
    };
    // 0x318
};

struct pru_ecap
{
    /* PRU_ECAP_TSCNT REGISTER BIT FIELD */
    union
    {
        volatile uint32_t TSCNT;

        volatile struct
        {
            uint32_t TSCNT :32; // 31:0
        } TSCNT_bit;
    }; // 0x0

    /* PRU_ECAP_CNTPHS REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CNTPHS;

        volatile struct
        {
            uint32_t CNTPHS :32; // 31:0
        } CNTPHS_bit;
    }; // 0x4

    /* PRU_ECAP_CAP1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAP1;

        volatile struct
        {
            uint32_t CAP1 :32; // 31:0
        } CAP1_bit;
    }; // 0x8

    /* PRU_ECAP_CAP2 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAP2;

        volatile struct
        {
            uint32_t CAP2 :32; // 31:0
        } CAP2_bit;
    }; // 0xC

    /* PRU_ECAP_CAP3 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAP3;

        volatile struct
        {
            uint32_t CAP3 :32; // 31:0
        } CAP3_bit;
    }; // 0x10

    /* PRU_ECAP_CAP4 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAP4;

        volatile struct
        {
            uint32_t CAP4 :32; // 31:0
        } CAP4_bit;
    }; // 0x14

    uint8_t RSVD18[16]; // 0x18 - 0x27

    /* PRU_ECAP_ECCTL2_ECCTL1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t ECCTL2_ECCTL1;

        volatile struct
        {
            uint32_t CAP1POL :1; // 0
            uint32_t CTRRST1 :1; // 1
            uint32_t CAP2POL :1; // 2
            uint32_t CTRRST2 :1; // 3
            uint32_t CAP3POL :1; // 4
            uint32_t CTRRST3 :1; // 5
            uint32_t CAP4POL :1; // 6
            uint32_t CTRRST4 :1; // 7
            uint32_t CAPLDEN :1; // 8
            uint32_t EVTFLTPS :5; // 13:9
            uint32_t SOFT :1; // 14
            uint32_t FREE :1; // 15
            uint32_t CONT_ONESHT :1; // 16
            uint32_t STOPVALUE :2; // 18:17
            uint32_t REARM_RESET :1; // 19
            uint32_t TSCNTSTP :1; // 20
            uint32_t SYNCI_EN :1; // 21
            uint32_t SYNCO_SEL :2; // 23:22
            uint32_t SWSYNC :1; // 24
            uint32_t CAP_APWM :1; // 25
            uint32_t APWMPOL :1; // 26
            uint32_t FILTER :5; // 31:27
        } ECCTL2_ECCTL1_bit;
    }; // 0x28

    /* PRU_ECAP_ECFLG_ECEINT REGISTER BIT FIELD */
    union
    {
        volatile uint32_t ECFLG_ECEINT;

        volatile struct
        {
            uint32_t EN_RESV0 :1; // 0
            uint32_t EN_CEVT1 :1; // 1
            uint32_t EN_CEVT2 :1; // 2
            uint32_t EN_CEVT3 :1; // 3
            uint32_t EN_CEVT4 :1; // 4
            uint32_t EN_CNTOVF :1; // 5
            uint32_t EN_PRDEQ :1; // 6
            uint32_t EN_CMPEQ :1; // 7
            uint32_t EN__RESV1 :8; // 15:8
            uint32_t FLAG_INT :1; // 16
            uint32_t FLAG_CEVT1 :1; // 17
            uint32_t FLAG_CEVT2 :1; // 18
            uint32_t FLAG_CEVT3 :1; // 19
            uint32_t FLAG_CEVT4 :1; // 20
            uint32_t FLAG_CNTOVF :1; // 21
            uint32_t FLAG_PRDEQ :1; // 22
            uint32_t FLAG_CMPEQ :1; // 23
            uint32_t FLAG_RESV0 :8; // 31:24
        } ECFLG_ECEINT_bit;
    }; // 0x2C

    /* PRU_ECAP_ECCLR REGISTER BIT FIELD */
    union
    {
        volatile uint32_t ECCLR;

        volatile struct
        {
            uint32_t INT :1; // 0
            uint32_t CEVT1 :1; // 1
            uint32_t CEVT2 :1; // 2
            uint32_t CEVT3 :1; // 3
            uint32_t CEVT4 :1; // 4
            uint32_t CNTOVF :1; // 5
            uint32_t PRDEQ :1; // 6
            uint32_t CMPEQ :1; // 7
            uint32_t _RESV0 :8; // 15:8
            uint32_t RSVD16 :16; // 31:16
        } ECCLR_bit;
    }; // 0x30

    /* PRU_ECAP_ECFRC REGISTER BIT FIELD */
    union
    {
        volatile uint32_t ECFRC;

        volatile struct
        {
            uint32_t _RESV0 :1; // 0
            uint32_t CEVT1 :1; // 1
            uint32_t CEVT2 :1; // 2
            uint32_t CEVT3 :1; // 3
            uint32_t CEVT4 :1; // 4
            uint32_t CNTOVF :1; // 5
            uint32_t PRDEQ :1; // 6
            uint32_t CMPEQ :1; // 7
            uint32_t _RESV1 :8; // 15:8
            uint32_t RSVD16 :16; // 31:16
        } ECFRC_bit;
    }; // 0x34

    uint8_t RSVD38[36]; // 0x38 - 0x5B

    /* PRU_ECAP_PID REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PID;

        volatile struct
        {
            uint32_t REVID :32; // 31:0
        } PID_bit;
    };
    // 0x5C
};

struct pru_intc
{
    /* PRU_INTC_REVISION_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t REVISION_REG;

        volatile struct
        {
            uint32_t REV_MINOR :6; // 5:0
            uint32_t REV_CUSTOM :2; // 7:6
            uint32_t REV_MAJOR :3; // 10:8
            uint32_t REV_RTL :5; // 15:11
            uint32_t REV_MODULE :12; // 27:16
            uint32_t RSVD28 :2; // 29:28
            uint32_t REV_SCHEME :2; // 31:30
        } REVISION_REG_bit;
    }; // 0x0

    /* PRU_INTC_CONTROL_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CONTROL_REG;

        volatile struct
        {
            uint32_t RSVD0 :1; // 0
            uint32_t WAKEUP_MODE :1; // 1
            uint32_t NEST_MODE :2; // 3:2
            uint32_t PRIORITY_HOLD_MODE :1; // 4
            uint32_t RSVD5 :27; // 31:5
        } CONTROL_REG_bit;
    }; // 0x4

    uint8_t RSVD8[8]; // 0x8 - 0xF

    /* PRU_INTC_GLOBAL_ENABLE_HINT_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t GLOBAL_ENABLE_HINT_REG;

        volatile struct
        {
            uint32_t ENABLE_HINT_ANY :1; // 0
            uint32_t RSVD1 :31; // 31:1
        } GLOBAL_ENABLE_HINT_REG_bit;
    }; // 0x10

    uint8_t RSVD14[8]; // 0x14 - 0x1B

    /* PRU_INTC_GLB_NEST_LEVEL_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t GLB_NEST_LEVEL_REG;

        volatile struct
        {
            uint32_t GLB_NEST_LEVEL :9; // 8:0
            uint32_t RSVD9 :22; // 30:9
            uint32_t GLB_NEST_AUTO_OVR :1; // 31
        } GLB_NEST_LEVEL_REG_bit;
    }; // 0x1C

    /* PRU_INTC_STATUS_SET_INDEX_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t STATUS_SET_INDEX_REG;

        volatile struct
        {
            uint32_t STATUS_SET_INDEX :10; // 9:0
            uint32_t RSVD10 :22; // 31:10
        } STATUS_SET_INDEX_REG_bit;
    }; // 0x20

    /* PRU_INTC_STATUS_CLR_INDEX_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t STATUS_CLR_INDEX_REG;

        volatile struct
        {
            uint32_t STATUS_CLR_INDEX :10; // 9:0
            uint32_t RSVD10 :22; // 31:10
        } STATUS_CLR_INDEX_REG_bit;
    }; // 0x24

    /* PRU_INTC_ENABLE_SET_INDEX_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t ENABLE_SET_INDEX_REG;

        volatile struct
        {
            uint32_t ENABLE_SET_INDEX :10; // 9:0
            uint32_t RSVD10 :22; // 31:10
        } ENABLE_SET_INDEX_REG_bit;
    }; // 0x28

    /* PRU_INTC_ENABLE_CLR_INDEX_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t ENABLE_CLR_INDEX_REG;

        volatile struct
        {
            uint32_t ENABLE_CLR_INDEX :10; // 9:0
            uint32_t RSVD10 :22; // 31:10
        } ENABLE_CLR_INDEX_REG_bit;
    }; // 0x2C

    uint8_t RSVD30[4]; // 0x30 - 0x33

    /* PRU_INTC_HINT_ENABLE_SET_INDEX_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t HINT_ENABLE_SET_INDEX_REG;

        volatile struct
        {
            uint32_t HINT_ENABLE_SET_INDEX :10; // 9:0
            uint32_t RSVD10 :22; // 31:10
        } HINT_ENABLE_SET_INDEX_REG_bit;
    }; // 0x34

    /* PRU_INTC_HINT_ENABLE_CLR_INDEX_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t HINT_ENABLE_CLR_INDEX_REG;

        volatile struct
        {
            uint32_t HINT_ENABLE_CLR_INDEX :10; // 9:0
            uint32_t RSVD10 :22; // 31:10
        } HINT_ENABLE_CLR_INDEX_REG_bit;
    }; // 0x38

    uint8_t RSVD3C[68]; // 0x3C - 0x7F

    /* PRU_INTC_GLB_PRI_INTR_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t GLB_PRI_INTR_REG;

        volatile struct
        {
            uint32_t GLB_PRI_INTR :10; // 9:0
            uint32_t RSVD10 :21; // 30:10
            uint32_t GLB_NONE :1; // 31
        } GLB_PRI_INTR_REG_bit;
    }; // 0x80

    uint8_t RSVD84[380]; // 0x84 - 0x1FF

    /* PRU_INTC_RAW_STATUS_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t RAW_STATUS_REG0;

        volatile struct
        {
            uint32_t RAW_STATUS_0 :1; // 0
            uint32_t RAW_STATUS_1 :1; // 1
            uint32_t RAW_STATUS_2 :1; // 2
            uint32_t RAW_STATUS_3 :1; // 3
            uint32_t RAW_STATUS_4 :1; // 4
            uint32_t RAW_STATUS_5 :1; // 5
            uint32_t RAW_STATUS_6 :1; // 6
            uint32_t RAW_STATUS_7 :1; // 7
            uint32_t RAW_STATUS_8 :1; // 8
            uint32_t RAW_STATUS_9 :1; // 9
            uint32_t RAW_STATUS_10 :1; // 10
            uint32_t RAW_STATUS_11 :1; // 11
            uint32_t RAW_STATUS_12 :1; // 12
            uint32_t RAW_STATUS_13 :1; // 13
            uint32_t RAW_STATUS_14 :1; // 14
            uint32_t RAW_STATUS_15 :1; // 15
            uint32_t RAW_STATUS_16 :1; // 16
            uint32_t RAW_STATUS_17 :1; // 17
            uint32_t RAW_STATUS_18 :1; // 18
            uint32_t RAW_STATUS_19 :1; // 19
            uint32_t RAW_STATUS_20 :1; // 20
            uint32_t RAW_STATUS_21 :1; // 21
            uint32_t RAW_STATUS_22 :1; // 22
            uint32_t RAW_STATUS_23 :1; // 23
            uint32_t RAW_STATUS_24 :1; // 24
            uint32_t RAW_STATUS_25 :1; // 25
            uint32_t RAW_STATUS_26 :1; // 26
            uint32_t RAW_STATUS_27 :1; // 27
            uint32_t RAW_STATUS_28 :1; // 28
            uint32_t RAW_STATUS_29 :1; // 29
            uint32_t RAW_STATUS_30 :1; // 30
            uint32_t RAW_STATUS_31 :1; // 31
        } RAW_STATUS_REG0_bit;
    }; // 0x200

    /* PRU_INTC_RAW_STATUS_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t RAW_STATUS_REG1;

        volatile struct
        {
            uint32_t RAW_STATUS_32 :1; // 0
            uint32_t RAW_STATUS_33 :1; // 1
            uint32_t RAW_STATUS_34 :1; // 2
            uint32_t RAW_STATUS_35 :1; // 3
            uint32_t RAW_STATUS_36 :1; // 4
            uint32_t RAW_STATUS_37 :1; // 5
            uint32_t RAW_STATUS_38 :1; // 6
            uint32_t RAW_STATUS_39 :1; // 7
            uint32_t RAW_STATUS_40 :1; // 8
            uint32_t RAW_STATUS_41 :1; // 9
            uint32_t RAW_STATUS_42 :1; // 10
            uint32_t RAW_STATUS_43 :1; // 11
            uint32_t RAW_STATUS_44 :1; // 12
            uint32_t RAW_STATUS_45 :1; // 13
            uint32_t RAW_STATUS_46 :1; // 14
            uint32_t RAW_STATUS_47 :1; // 15
            uint32_t RAW_STATUS_48 :1; // 16
            uint32_t RAW_STATUS_49 :1; // 17
            uint32_t RAW_STATUS_50 :1; // 18
            uint32_t RAW_STATUS_51 :1; // 19
            uint32_t RAW_STATUS_52 :1; // 20
            uint32_t RAW_STATUS_53 :1; // 21
            uint32_t RAW_STATUS_54 :1; // 22
            uint32_t RAW_STATUS_55 :1; // 23
            uint32_t RAW_STATUS_56 :1; // 24
            uint32_t RAW_STATUS_57 :1; // 25
            uint32_t RAW_STATUS_58 :1; // 26
            uint32_t RAW_STATUS_59 :1; // 27
            uint32_t RAW_STATUS_60 :1; // 28
            uint32_t RAW_STATUS_61 :1; // 29
            uint32_t RAW_STATUS_62 :1; // 30
            uint32_t RAW_STATUS_63 :1; // 31
        } RAW_STATUS_REG1_bit;
    }; // 0x204

    /* PRU_INTC_RAW_STATUS_REG2 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t RAW_STATUS_REG2;

        volatile struct
        {
            uint32_t RAW_STATUS_64 :1; // 0
            uint32_t RAW_STATUS_65 :1; // 1
            uint32_t RAW_STATUS_66 :1; // 2
            uint32_t RAW_STATUS_67 :1; // 3
            uint32_t RAW_STATUS_68 :1; // 4
            uint32_t RAW_STATUS_69 :1; // 5
            uint32_t RAW_STATUS_70 :1; // 6
            uint32_t RAW_STATUS_71 :1; // 7
            uint32_t RAW_STATUS_72 :1; // 8
            uint32_t RAW_STATUS_73 :1; // 9
            uint32_t RAW_STATUS_74 :1; // 10
            uint32_t RAW_STATUS_75 :1; // 11
            uint32_t RAW_STATUS_76 :1; // 12
            uint32_t RAW_STATUS_77 :1; // 13
            uint32_t RAW_STATUS_78 :1; // 14
            uint32_t RAW_STATUS_79 :1; // 15
            uint32_t RAW_STATUS_80 :1; // 16
            uint32_t RAW_STATUS_81 :1; // 17
            uint32_t RAW_STATUS_82 :1; // 18
            uint32_t RAW_STATUS_83 :1; // 19
            uint32_t RAW_STATUS_84 :1; // 20
            uint32_t RAW_STATUS_85 :1; // 21
            uint32_t RAW_STATUS_86 :1; // 22
            uint32_t RAW_STATUS_87 :1; // 23
            uint32_t RAW_STATUS_88 :1; // 24
            uint32_t RAW_STATUS_89 :1; // 25
            uint32_t RAW_STATUS_90 :1; // 26
            uint32_t RAW_STATUS_91 :1; // 27
            uint32_t RAW_STATUS_92 :1; // 28
            uint32_t RAW_STATUS_93 :1; // 29
            uint32_t RAW_STATUS_94 :1; // 30
            uint32_t RAW_STATUS_95 :1; // 31
        } RAW_STATUS_REG2_bit;
    }; // 0x208

    /* PRU_INTC_RAW_STATUS_REG3 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t RAW_STATUS_REG3;

        volatile struct
        {
            uint32_t RAW_STATUS_96 :1; // 0
            uint32_t RAW_STATUS_97 :1; // 1
            uint32_t RAW_STATUS_98 :1; // 2
            uint32_t RAW_STATUS_99 :1; // 3
            uint32_t RAW_STATUS_100 :1; // 4
            uint32_t RAW_STATUS_101 :1; // 5
            uint32_t RAW_STATUS_102 :1; // 6
            uint32_t RAW_STATUS_103 :1; // 7
            uint32_t RAW_STATUS_104 :1; // 8
            uint32_t RAW_STATUS_105 :1; // 9
            uint32_t RAW_STATUS_106 :1; // 10
            uint32_t RAW_STATUS_107 :1; // 11
            uint32_t RAW_STATUS_108 :1; // 12
            uint32_t RAW_STATUS_109 :1; // 13
            uint32_t RAW_STATUS_110 :1; // 14
            uint32_t RAW_STATUS_111 :1; // 15
            uint32_t RAW_STATUS_112 :1; // 16
            uint32_t RAW_STATUS_113 :1; // 17
            uint32_t RAW_STATUS_114 :1; // 18
            uint32_t RAW_STATUS_115 :1; // 19
            uint32_t RAW_STATUS_116 :1; // 20
            uint32_t RAW_STATUS_117 :1; // 21
            uint32_t RAW_STATUS_118 :1; // 22
            uint32_t RAW_STATUS_119 :1; // 23
            uint32_t RAW_STATUS_120 :1; // 24
            uint32_t RAW_STATUS_121 :1; // 25
            uint32_t RAW_STATUS_122 :1; // 26
            uint32_t RAW_STATUS_123 :1; // 27
            uint32_t RAW_STATUS_124 :1; // 28
            uint32_t RAW_STATUS_125 :1; // 29
            uint32_t RAW_STATUS_126 :1; // 30
            uint32_t RAW_STATUS_127 :1; // 31
        } RAW_STATUS_REG3_bit;
    }; // 0x20C

    /* PRU_INTC_RAW_STATUS_REG4 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t RAW_STATUS_REG4;

        volatile struct
        {
            uint32_t RAW_STATUS_128 :1; // 0
            uint32_t RAW_STATUS_129 :1; // 1
            uint32_t RAW_STATUS_130 :1; // 2
            uint32_t RAW_STATUS_131 :1; // 3
            uint32_t RAW_STATUS_132 :1; // 4
            uint32_t RAW_STATUS_133 :1; // 5
            uint32_t RAW_STATUS_134 :1; // 6
            uint32_t RAW_STATUS_135 :1; // 7
            uint32_t RAW_STATUS_136 :1; // 8
            uint32_t RAW_STATUS_137 :1; // 9
            uint32_t RAW_STATUS_138 :1; // 10
            uint32_t RAW_STATUS_139 :1; // 11
            uint32_t RAW_STATUS_140 :1; // 12
            uint32_t RAW_STATUS_141 :1; // 13
            uint32_t RAW_STATUS_142 :1; // 14
            uint32_t RAW_STATUS_143 :1; // 15
            uint32_t RAW_STATUS_144 :1; // 16
            uint32_t RAW_STATUS_145 :1; // 17
            uint32_t RAW_STATUS_146 :1; // 18
            uint32_t RAW_STATUS_147 :1; // 19
            uint32_t RAW_STATUS_148 :1; // 20
            uint32_t RAW_STATUS_149 :1; // 21
            uint32_t RAW_STATUS_150 :1; // 22
            uint32_t RAW_STATUS_151 :1; // 23
            uint32_t RAW_STATUS_152 :1; // 24
            uint32_t RAW_STATUS_153 :1; // 25
            uint32_t RAW_STATUS_154 :1; // 26
            uint32_t RAW_STATUS_155 :1; // 27
            uint32_t RAW_STATUS_156 :1; // 28
            uint32_t RAW_STATUS_157 :1; // 29
            uint32_t RAW_STATUS_158 :1; // 30
            uint32_t RAW_STATUS_159 :1; // 31
        } RAW_STATUS_REG4_bit;
    }; // 0x210

    uint8_t RSVD214[108]; // 0x214 - 0x27F

    /* PRU_INTC_ENA_STATUS_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t ENA_STATUS_REG0;

        volatile struct
        {
            uint32_t ENA_STATUS_0 :1; // 0
            uint32_t ENA_STATUS_1 :1; // 1
            uint32_t ENA_STATUS_2 :1; // 2
            uint32_t ENA_STATUS_3 :1; // 3
            uint32_t ENA_STATUS_4 :1; // 4
            uint32_t ENA_STATUS_5 :1; // 5
            uint32_t ENA_STATUS_6 :1; // 6
            uint32_t ENA_STATUS_7 :1; // 7
            uint32_t ENA_STATUS_8 :1; // 8
            uint32_t ENA_STATUS_9 :1; // 9
            uint32_t ENA_STATUS_10 :1; // 10
            uint32_t ENA_STATUS_11 :1; // 11
            uint32_t ENA_STATUS_12 :1; // 12
            uint32_t ENA_STATUS_13 :1; // 13
            uint32_t ENA_STATUS_14 :1; // 14
            uint32_t ENA_STATUS_15 :1; // 15
            uint32_t ENA_STATUS_16 :1; // 16
            uint32_t ENA_STATUS_17 :1; // 17
            uint32_t ENA_STATUS_18 :1; // 18
            uint32_t ENA_STATUS_19 :1; // 19
            uint32_t ENA_STATUS_20 :1; // 20
            uint32_t ENA_STATUS_21 :1; // 21
            uint32_t ENA_STATUS_22 :1; // 22
            uint32_t ENA_STATUS_23 :1; // 23
            uint32_t ENA_STATUS_24 :1; // 24
            uint32_t ENA_STATUS_25 :1; // 25
            uint32_t ENA_STATUS_26 :1; // 26
            uint32_t ENA_STATUS_27 :1; // 27
            uint32_t ENA_STATUS_28 :1; // 28
            uint32_t ENA_STATUS_29 :1; // 29
            uint32_t ENA_STATUS_30 :1; // 30
            uint32_t ENA_STATUS_31 :1; // 31
        } ENA_STATUS_REG0_bit;
    }; // 0x280

    /* PRU_INTC_ENA_STATUS_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t ENA_STATUS_REG1;

        volatile struct
        {
            uint32_t ENA_STATUS_32 :1; // 0
            uint32_t ENA_STATUS_33 :1; // 1
            uint32_t ENA_STATUS_34 :1; // 2
            uint32_t ENA_STATUS_35 :1; // 3
            uint32_t ENA_STATUS_36 :1; // 4
            uint32_t ENA_STATUS_37 :1; // 5
            uint32_t ENA_STATUS_38 :1; // 6
            uint32_t ENA_STATUS_39 :1; // 7
            uint32_t ENA_STATUS_40 :1; // 8
            uint32_t ENA_STATUS_41 :1; // 9
            uint32_t ENA_STATUS_42 :1; // 10
            uint32_t ENA_STATUS_43 :1; // 11
            uint32_t ENA_STATUS_44 :1; // 12
            uint32_t ENA_STATUS_45 :1; // 13
            uint32_t ENA_STATUS_46 :1; // 14
            uint32_t ENA_STATUS_47 :1; // 15
            uint32_t ENA_STATUS_48 :1; // 16
            uint32_t ENA_STATUS_49 :1; // 17
            uint32_t ENA_STATUS_50 :1; // 18
            uint32_t ENA_STATUS_51 :1; // 19
            uint32_t ENA_STATUS_52 :1; // 20
            uint32_t ENA_STATUS_53 :1; // 21
            uint32_t ENA_STATUS_54 :1; // 22
            uint32_t ENA_STATUS_55 :1; // 23
            uint32_t ENA_STATUS_56 :1; // 24
            uint32_t ENA_STATUS_57 :1; // 25
            uint32_t ENA_STATUS_58 :1; // 26
            uint32_t ENA_STATUS_59 :1; // 27
            uint32_t ENA_STATUS_60 :1; // 28
            uint32_t ENA_STATUS_61 :1; // 29
            uint32_t ENA_STATUS_62 :1; // 30
            uint32_t ENA_STATUS_63 :1; // 31
        } ENA_STATUS_REG1_bit;
    }; // 0x284

    /* PRU_INTC_ENA_STATUS_REG2 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t ENA_STATUS_REG2;

        volatile struct
        {
            uint32_t ENA_STATUS_64 :1; // 0
            uint32_t ENA_STATUS_65 :1; // 1
            uint32_t ENA_STATUS_66 :1; // 2
            uint32_t ENA_STATUS_67 :1; // 3
            uint32_t ENA_STATUS_68 :1; // 4
            uint32_t ENA_STATUS_69 :1; // 5
            uint32_t ENA_STATUS_70 :1; // 6
            uint32_t ENA_STATUS_71 :1; // 7
            uint32_t ENA_STATUS_72 :1; // 8
            uint32_t ENA_STATUS_73 :1; // 9
            uint32_t ENA_STATUS_74 :1; // 10
            uint32_t ENA_STATUS_75 :1; // 11
            uint32_t ENA_STATUS_76 :1; // 12
            uint32_t ENA_STATUS_77 :1; // 13
            uint32_t ENA_STATUS_78 :1; // 14
            uint32_t ENA_STATUS_79 :1; // 15
            uint32_t ENA_STATUS_80 :1; // 16
            uint32_t ENA_STATUS_81 :1; // 17
            uint32_t ENA_STATUS_82 :1; // 18
            uint32_t ENA_STATUS_83 :1; // 19
            uint32_t ENA_STATUS_84 :1; // 20
            uint32_t ENA_STATUS_85 :1; // 21
            uint32_t ENA_STATUS_86 :1; // 22
            uint32_t ENA_STATUS_87 :1; // 23
            uint32_t ENA_STATUS_88 :1; // 24
            uint32_t ENA_STATUS_89 :1; // 25
            uint32_t ENA_STATUS_90 :1; // 26
            uint32_t ENA_STATUS_91 :1; // 27
            uint32_t ENA_STATUS_92 :1; // 28
            uint32_t ENA_STATUS_93 :1; // 29
            uint32_t ENA_STATUS_94 :1; // 30
            uint32_t ENA_STATUS_95 :1; // 31
        } ENA_STATUS_REG2_bit;
    }; // 0x288

    /* PRU_INTC_ENA_STATUS_REG3 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t ENA_STATUS_REG3;

        volatile struct
        {
            uint32_t ENA_STATUS_96 :1; // 0
            uint32_t ENA_STATUS_97 :1; // 1
            uint32_t ENA_STATUS_98 :1; // 2
            uint32_t ENA_STATUS_99 :1; // 3
            uint32_t ENA_STATUS_100 :1; // 4
            uint32_t ENA_STATUS_101 :1; // 5
            uint32_t ENA_STATUS_102 :1; // 6
            uint32_t ENA_STATUS_103 :1; // 7
            uint32_t ENA_STATUS_104 :1; // 8
            uint32_t ENA_STATUS_105 :1; // 9
            uint32_t ENA_STATUS_106 :1; // 10
            uint32_t ENA_STATUS_107 :1; // 11
            uint32_t ENA_STATUS_108 :1; // 12
            uint32_t ENA_STATUS_109 :1; // 13
            uint32_t ENA_STATUS_110 :1; // 14
            uint32_t ENA_STATUS_111 :1; // 15
            uint32_t ENA_STATUS_112 :1; // 16
            uint32_t ENA_STATUS_113 :1; // 17
            uint32_t ENA_STATUS_114 :1; // 18
            uint32_t ENA_STATUS_115 :1; // 19
            uint32_t ENA_STATUS_116 :1; // 20
            uint32_t ENA_STATUS_117 :1; // 21
            uint32_t ENA_STATUS_118 :1; // 22
            uint32_t ENA_STATUS_119 :1; // 23
            uint32_t ENA_STATUS_120 :1; // 24
            uint32_t ENA_STATUS_121 :1; // 25
            uint32_t ENA_STATUS_122 :1; // 26
            uint32_t ENA_STATUS_123 :1; // 27
            uint32_t ENA_STATUS_124 :1; // 28
            uint32_t ENA_STATUS_125 :1; // 29
            uint32_t ENA_STATUS_126 :1; // 30
            uint32_t ENA_STATUS_127 :1; // 31
        } ENA_STATUS_REG3_bit;
    }; // 0x28C

    /* PRU_INTC_ENA_STATUS_REG4 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t ENA_STATUS_REG4;

        volatile struct
        {
            uint32_t ENA_STATUS_128 :1; // 0
            uint32_t ENA_STATUS_129 :1; // 1
            uint32_t ENA_STATUS_130 :1; // 2
            uint32_t ENA_STATUS_131 :1; // 3
            uint32_t ENA_STATUS_132 :1; // 4
            uint32_t ENA_STATUS_133 :1; // 5
            uint32_t ENA_STATUS_134 :1; // 6
            uint32_t ENA_STATUS_135 :1; // 7
            uint32_t ENA_STATUS_136 :1; // 8
            uint32_t ENA_STATUS_137 :1; // 9
            uint32_t ENA_STATUS_138 :1; // 10
            uint32_t ENA_STATUS_139 :1; // 11
            uint32_t ENA_STATUS_140 :1; // 12
            uint32_t ENA_STATUS_141 :1; // 13
            uint32_t ENA_STATUS_142 :1; // 14
            uint32_t ENA_STATUS_143 :1; // 15
            uint32_t ENA_STATUS_144 :1; // 16
            uint32_t ENA_STATUS_145 :1; // 17
            uint32_t ENA_STATUS_146 :1; // 18
            uint32_t ENA_STATUS_147 :1; // 19
            uint32_t ENA_STATUS_148 :1; // 20
            uint32_t ENA_STATUS_149 :1; // 21
            uint32_t ENA_STATUS_150 :1; // 22
            uint32_t ENA_STATUS_151 :1; // 23
            uint32_t ENA_STATUS_152 :1; // 24
            uint32_t ENA_STATUS_153 :1; // 25
            uint32_t ENA_STATUS_154 :1; // 26
            uint32_t ENA_STATUS_155 :1; // 27
            uint32_t ENA_STATUS_156 :1; // 28
            uint32_t ENA_STATUS_157 :1; // 29
            uint32_t ENA_STATUS_158 :1; // 30
            uint32_t ENA_STATUS_159 :1; // 31
        } ENA_STATUS_REG4_bit;
    }; // 0x290

    uint8_t RSVD294[108]; // 0x294 - 0x2FF

    /* PRU_INTC_ENABLE_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t ENABLE_REG0;

        volatile struct
        {
            uint32_t ENABLE_0 :1; // 0
            uint32_t ENABLE_1 :1; // 1
            uint32_t ENABLE_2 :1; // 2
            uint32_t ENABLE_3 :1; // 3
            uint32_t ENABLE_4 :1; // 4
            uint32_t ENABLE_5 :1; // 5
            uint32_t ENABLE_6 :1; // 6
            uint32_t ENABLE_7 :1; // 7
            uint32_t ENABLE_8 :1; // 8
            uint32_t ENABLE_9 :1; // 9
            uint32_t ENABLE_10 :1; // 10
            uint32_t ENABLE_11 :1; // 11
            uint32_t ENABLE_12 :1; // 12
            uint32_t ENABLE_13 :1; // 13
            uint32_t ENABLE_14 :1; // 14
            uint32_t ENABLE_15 :1; // 15
            uint32_t ENABLE_16 :1; // 16
            uint32_t ENABLE_17 :1; // 17
            uint32_t ENABLE_18 :1; // 18
            uint32_t ENABLE_19 :1; // 19
            uint32_t ENABLE_20 :1; // 20
            uint32_t ENABLE_21 :1; // 21
            uint32_t ENABLE_22 :1; // 22
            uint32_t ENABLE_23 :1; // 23
            uint32_t ENABLE_24 :1; // 24
            uint32_t ENABLE_25 :1; // 25
            uint32_t ENABLE_26 :1; // 26
            uint32_t ENABLE_27 :1; // 27
            uint32_t ENABLE_28 :1; // 28
            uint32_t ENABLE_29 :1; // 29
            uint32_t ENABLE_30 :1; // 30
            uint32_t ENABLE_31 :1; // 31
        } ENABLE_REG0_bit;
    }; // 0x300

    /* PRU_INTC_ENABLE_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t ENABLE_REG1;

        volatile struct
        {
            uint32_t ENABLE_32 :1; // 0
            uint32_t ENABLE_33 :1; // 1
            uint32_t ENABLE_34 :1; // 2
            uint32_t ENABLE_35 :1; // 3
            uint32_t ENABLE_36 :1; // 4
            uint32_t ENABLE_37 :1; // 5
            uint32_t ENABLE_38 :1; // 6
            uint32_t ENABLE_39 :1; // 7
            uint32_t ENABLE_40 :1; // 8
            uint32_t ENABLE_41 :1; // 9
            uint32_t ENABLE_42 :1; // 10
            uint32_t ENABLE_43 :1; // 11
            uint32_t ENABLE_44 :1; // 12
            uint32_t ENABLE_45 :1; // 13
            uint32_t ENABLE_46 :1; // 14
            uint32_t ENABLE_47 :1; // 15
            uint32_t ENABLE_48 :1; // 16
            uint32_t ENABLE_49 :1; // 17
            uint32_t ENABLE_50 :1; // 18
            uint32_t ENABLE_51 :1; // 19
            uint32_t ENABLE_52 :1; // 20
            uint32_t ENABLE_53 :1; // 21
            uint32_t ENABLE_54 :1; // 22
            uint32_t ENABLE_55 :1; // 23
            uint32_t ENABLE_56 :1; // 24
            uint32_t ENABLE_57 :1; // 25
            uint32_t ENABLE_58 :1; // 26
            uint32_t ENABLE_59 :1; // 27
            uint32_t ENABLE_60 :1; // 28
            uint32_t ENABLE_61 :1; // 29
            uint32_t ENABLE_62 :1; // 30
            uint32_t ENABLE_63 :1; // 31
        } ENABLE_REG1_bit;
    }; // 0x304

    /* PRU_INTC_ENABLE_REG2 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t ENABLE_REG2;

        volatile struct
        {
            uint32_t ENABLE_64 :1; // 0
            uint32_t ENABLE_65 :1; // 1
            uint32_t ENABLE_66 :1; // 2
            uint32_t ENABLE_67 :1; // 3
            uint32_t ENABLE_68 :1; // 4
            uint32_t ENABLE_69 :1; // 5
            uint32_t ENABLE_70 :1; // 6
            uint32_t ENABLE_71 :1; // 7
            uint32_t ENABLE_72 :1; // 8
            uint32_t ENABLE_73 :1; // 9
            uint32_t ENABLE_74 :1; // 10
            uint32_t ENABLE_75 :1; // 11
            uint32_t ENABLE_76 :1; // 12
            uint32_t ENABLE_77 :1; // 13
            uint32_t ENABLE_78 :1; // 14
            uint32_t ENABLE_79 :1; // 15
            uint32_t ENABLE_80 :1; // 16
            uint32_t ENABLE_81 :1; // 17
            uint32_t ENABLE_82 :1; // 18
            uint32_t ENABLE_83 :1; // 19
            uint32_t ENABLE_84 :1; // 20
            uint32_t ENABLE_85 :1; // 21
            uint32_t ENABLE_86 :1; // 22
            uint32_t ENABLE_87 :1; // 23
            uint32_t ENABLE_88 :1; // 24
            uint32_t ENABLE_89 :1; // 25
            uint32_t ENABLE_90 :1; // 26
            uint32_t ENABLE_91 :1; // 27
            uint32_t ENABLE_92 :1; // 28
            uint32_t ENABLE_93 :1; // 29
            uint32_t ENABLE_94 :1; // 30
            uint32_t ENABLE_95 :1; // 31
        } ENABLE_REG2_bit;
    }; // 0x308

    /* PRU_INTC_ENABLE_REG3 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t ENABLE_REG3;

        volatile struct
        {
            uint32_t ENABLE_96 :1; // 0
            uint32_t ENABLE_97 :1; // 1
            uint32_t ENABLE_98 :1; // 2
            uint32_t ENABLE_99 :1; // 3
            uint32_t ENABLE_100 :1; // 4
            uint32_t ENABLE_101 :1; // 5
            uint32_t ENABLE_102 :1; // 6
            uint32_t ENABLE_103 :1; // 7
            uint32_t ENABLE_104 :1; // 8
            uint32_t ENABLE_105 :1; // 9
            uint32_t ENABLE_106 :1; // 10
            uint32_t ENABLE_107 :1; // 11
            uint32_t ENABLE_108 :1; // 12
            uint32_t ENABLE_109 :1; // 13
            uint32_t ENABLE_110 :1; // 14
            uint32_t ENABLE_111 :1; // 15
            uint32_t ENABLE_112 :1; // 16
            uint32_t ENABLE_113 :1; // 17
            uint32_t ENABLE_114 :1; // 18
            uint32_t ENABLE_115 :1; // 19
            uint32_t ENABLE_116 :1; // 20
            uint32_t ENABLE_117 :1; // 21
            uint32_t ENABLE_118 :1; // 22
            uint32_t ENABLE_119 :1; // 23
            uint32_t ENABLE_120 :1; // 24
            uint32_t ENABLE_121 :1; // 25
            uint32_t ENABLE_122 :1; // 26
            uint32_t ENABLE_123 :1; // 27
            uint32_t ENABLE_124 :1; // 28
            uint32_t ENABLE_125 :1; // 29
            uint32_t ENABLE_126 :1; // 30
            uint32_t ENABLE_127 :1; // 31
        } ENABLE_REG3_bit;
    }; // 0x30C

    /* PRU_INTC_ENABLE_REG4 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t ENABLE_REG4;

        volatile struct
        {
            uint32_t ENABLE_128 :1; // 0
            uint32_t ENABLE_129 :1; // 1
            uint32_t ENABLE_130 :1; // 2
            uint32_t ENABLE_131 :1; // 3
            uint32_t ENABLE_132 :1; // 4
            uint32_t ENABLE_133 :1; // 5
            uint32_t ENABLE_134 :1; // 6
            uint32_t ENABLE_135 :1; // 7
            uint32_t ENABLE_136 :1; // 8
            uint32_t ENABLE_137 :1; // 9
            uint32_t ENABLE_138 :1; // 10
            uint32_t ENABLE_139 :1; // 11
            uint32_t ENABLE_140 :1; // 12
            uint32_t ENABLE_141 :1; // 13
            uint32_t ENABLE_142 :1; // 14
            uint32_t ENABLE_143 :1; // 15
            uint32_t ENABLE_144 :1; // 16
            uint32_t ENABLE_145 :1; // 17
            uint32_t ENABLE_146 :1; // 18
            uint32_t ENABLE_147 :1; // 19
            uint32_t ENABLE_148 :1; // 20
            uint32_t ENABLE_149 :1; // 21
            uint32_t ENABLE_150 :1; // 22
            uint32_t ENABLE_151 :1; // 23
            uint32_t ENABLE_152 :1; // 24
            uint32_t ENABLE_153 :1; // 25
            uint32_t ENABLE_154 :1; // 26
            uint32_t ENABLE_155 :1; // 27
            uint32_t ENABLE_156 :1; // 28
            uint32_t ENABLE_157 :1; // 29
            uint32_t ENABLE_158 :1; // 30
            uint32_t ENABLE_159 :1; // 31
        } ENABLE_REG4_bit;
    }; // 0x310

    uint8_t RSVD314[108]; // 0x314 - 0x37F

    /* PRU_INTC_ENABLE_CLR_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t ENABLE_CLR_REG0;

        volatile struct
        {
            uint32_t ENABLE_0_CLR :1; // 0
            uint32_t ENABLE_1_CLR :1; // 1
            uint32_t ENABLE_2_CLR :1; // 2
            uint32_t ENABLE_3_CLR :1; // 3
            uint32_t ENABLE_4_CLR :1; // 4
            uint32_t ENABLE_5_CLR :1; // 5
            uint32_t ENABLE_6_CLR :1; // 6
            uint32_t ENABLE_7_CLR :1; // 7
            uint32_t ENABLE_8_CLR :1; // 8
            uint32_t ENABLE_9_CLR :1; // 9
            uint32_t ENABLE_10_CLR :1; // 10
            uint32_t ENABLE_11_CLR :1; // 11
            uint32_t ENABLE_12_CLR :1; // 12
            uint32_t ENABLE_13_CLR :1; // 13
            uint32_t ENABLE_14_CLR :1; // 14
            uint32_t ENABLE_15_CLR :1; // 15
            uint32_t ENABLE_16_CLR :1; // 16
            uint32_t ENABLE_17_CLR :1; // 17
            uint32_t ENABLE_18_CLR :1; // 18
            uint32_t ENABLE_19_CLR :1; // 19
            uint32_t ENABLE_20_CLR :1; // 20
            uint32_t ENABLE_21_CLR :1; // 21
            uint32_t ENABLE_22_CLR :1; // 22
            uint32_t ENABLE_23_CLR :1; // 23
            uint32_t ENABLE_24_CLR :1; // 24
            uint32_t ENABLE_25_CLR :1; // 25
            uint32_t ENABLE_26_CLR :1; // 26
            uint32_t ENABLE_27_CLR :1; // 27
            uint32_t ENABLE_28_CLR :1; // 28
            uint32_t ENABLE_29_CLR :1; // 29
            uint32_t ENABLE_30_CLR :1; // 30
            uint32_t ENABLE_31_CLR :1; // 31
        } ENABLE_CLR_REG0_bit;
    }; // 0x380

    /* PRU_INTC_ENABLE_CLR_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t ENABLE_CLR_REG1;

        volatile struct
        {
            uint32_t ENABLE_32_CLR :1; // 0
            uint32_t ENABLE_33_CLR :1; // 1
            uint32_t ENABLE_34_CLR :1; // 2
            uint32_t ENABLE_35_CLR :1; // 3
            uint32_t ENABLE_36_CLR :1; // 4
            uint32_t ENABLE_37_CLR :1; // 5
            uint32_t ENABLE_38_CLR :1; // 6
            uint32_t ENABLE_39_CLR :1; // 7
            uint32_t ENABLE_40_CLR :1; // 8
            uint32_t ENABLE_41_CLR :1; // 9
            uint32_t ENABLE_42_CLR :1; // 10
            uint32_t ENABLE_43_CLR :1; // 11
            uint32_t ENABLE_44_CLR :1; // 12
            uint32_t ENABLE_45_CLR :1; // 13
            uint32_t ENABLE_46_CLR :1; // 14
            uint32_t ENABLE_47_CLR :1; // 15
            uint32_t ENABLE_48_CLR :1; // 16
            uint32_t ENABLE_49_CLR :1; // 17
            uint32_t ENABLE_50_CLR :1; // 18
            uint32_t ENABLE_51_CLR :1; // 19
            uint32_t ENABLE_52_CLR :1; // 20
            uint32_t ENABLE_53_CLR :1; // 21
            uint32_t ENABLE_54_CLR :1; // 22
            uint32_t ENABLE_55_CLR :1; // 23
            uint32_t ENABLE_56_CLR :1; // 24
            uint32_t ENABLE_57_CLR :1; // 25
            uint32_t ENABLE_58_CLR :1; // 26
            uint32_t ENABLE_59_CLR :1; // 27
            uint32_t ENABLE_60_CLR :1; // 28
            uint32_t ENABLE_61_CLR :1; // 29
            uint32_t ENABLE_62_CLR :1; // 30
            uint32_t ENABLE_63_CLR :1; // 31
        } ENABLE_CLR_REG1_bit;
    }; // 0x384

    /* PRU_INTC_ENABLE_CLR_REG2 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t ENABLE_CLR_REG2;

        volatile struct
        {
            uint32_t ENABLE_64_CLR :1; // 0
            uint32_t ENABLE_65_CLR :1; // 1
            uint32_t ENABLE_66_CLR :1; // 2
            uint32_t ENABLE_67_CLR :1; // 3
            uint32_t ENABLE_68_CLR :1; // 4
            uint32_t ENABLE_69_CLR :1; // 5
            uint32_t ENABLE_70_CLR :1; // 6
            uint32_t ENABLE_71_CLR :1; // 7
            uint32_t ENABLE_72_CLR :1; // 8
            uint32_t ENABLE_73_CLR :1; // 9
            uint32_t ENABLE_74_CLR :1; // 10
            uint32_t ENABLE_75_CLR :1; // 11
            uint32_t ENABLE_76_CLR :1; // 12
            uint32_t ENABLE_77_CLR :1; // 13
            uint32_t ENABLE_78_CLR :1; // 14
            uint32_t ENABLE_79_CLR :1; // 15
            uint32_t ENABLE_80_CLR :1; // 16
            uint32_t ENABLE_81_CLR :1; // 17
            uint32_t ENABLE_82_CLR :1; // 18
            uint32_t ENABLE_83_CLR :1; // 19
            uint32_t ENABLE_84_CLR :1; // 20
            uint32_t ENABLE_85_CLR :1; // 21
            uint32_t ENABLE_86_CLR :1; // 22
            uint32_t ENABLE_87_CLR :1; // 23
            uint32_t ENABLE_88_CLR :1; // 24
            uint32_t ENABLE_89_CLR :1; // 25
            uint32_t ENABLE_90_CLR :1; // 26
            uint32_t ENABLE_91_CLR :1; // 27
            uint32_t ENABLE_92_CLR :1; // 28
            uint32_t ENABLE_93_CLR :1; // 29
            uint32_t ENABLE_94_CLR :1; // 30
            uint32_t ENABLE_95_CLR :1; // 31
        } ENABLE_CLR_REG2_bit;
    }; // 0x388

    /* PRU_INTC_ENABLE_CLR_REG3 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t ENABLE_CLR_REG3;

        volatile struct
        {
            uint32_t ENABLE_96_CLR :1; // 0
            uint32_t ENABLE_97_CLR :1; // 1
            uint32_t ENABLE_98_CLR :1; // 2
            uint32_t ENABLE_99_CLR :1; // 3
            uint32_t ENABLE_100_CLR :1; // 4
            uint32_t ENABLE_101_CLR :1; // 5
            uint32_t ENABLE_102_CLR :1; // 6
            uint32_t ENABLE_103_CLR :1; // 7
            uint32_t ENABLE_104_CLR :1; // 8
            uint32_t ENABLE_105_CLR :1; // 9
            uint32_t ENABLE_106_CLR :1; // 10
            uint32_t ENABLE_107_CLR :1; // 11
            uint32_t ENABLE_108_CLR :1; // 12
            uint32_t ENABLE_109_CLR :1; // 13
            uint32_t ENABLE_110_CLR :1; // 14
            uint32_t ENABLE_111_CLR :1; // 15
            uint32_t ENABLE_112_CLR :1; // 16
            uint32_t ENABLE_113_CLR :1; // 17
            uint32_t ENABLE_114_CLR :1; // 18
            uint32_t ENABLE_115_CLR :1; // 19
            uint32_t ENABLE_116_CLR :1; // 20
            uint32_t ENABLE_117_CLR :1; // 21
            uint32_t ENABLE_118_CLR :1; // 22
            uint32_t ENABLE_119_CLR :1; // 23
            uint32_t ENABLE_120_CLR :1; // 24
            uint32_t ENABLE_121_CLR :1; // 25
            uint32_t ENABLE_122_CLR :1; // 26
            uint32_t ENABLE_123_CLR :1; // 27
            uint32_t ENABLE_124_CLR :1; // 28
            uint32_t ENABLE_125_CLR :1; // 29
            uint32_t ENABLE_126_CLR :1; // 30
            uint32_t ENABLE_127_CLR :1; // 31
        } ENABLE_CLR_REG3_bit;
    }; // 0x38C

    /* PRU_INTC_ENABLE_CLR_REG4 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t ENABLE_CLR_REG4;

        volatile struct
        {
            uint32_t ENABLE_128_CLR :1; // 0
            uint32_t ENABLE_129_CLR :1; // 1
            uint32_t ENABLE_130_CLR :1; // 2
            uint32_t ENABLE_131_CLR :1; // 3
            uint32_t ENABLE_132_CLR :1; // 4
            uint32_t ENABLE_133_CLR :1; // 5
            uint32_t ENABLE_134_CLR :1; // 6
            uint32_t ENABLE_135_CLR :1; // 7
            uint32_t ENABLE_136_CLR :1; // 8
            uint32_t ENABLE_137_CLR :1; // 9
            uint32_t ENABLE_138_CLR :1; // 10
            uint32_t ENABLE_139_CLR :1; // 11
            uint32_t ENABLE_140_CLR :1; // 12
            uint32_t ENABLE_141_CLR :1; // 13
            uint32_t ENABLE_142_CLR :1; // 14
            uint32_t ENABLE_143_CLR :1; // 15
            uint32_t ENABLE_144_CLR :1; // 16
            uint32_t ENABLE_145_CLR :1; // 17
            uint32_t ENABLE_146_CLR :1; // 18
            uint32_t ENABLE_147_CLR :1; // 19
            uint32_t ENABLE_148_CLR :1; // 20
            uint32_t ENABLE_149_CLR :1; // 21
            uint32_t ENABLE_150_CLR :1; // 22
            uint32_t ENABLE_151_CLR :1; // 23
            uint32_t ENABLE_152_CLR :1; // 24
            uint32_t ENABLE_153_CLR :1; // 25
            uint32_t ENABLE_154_CLR :1; // 26
            uint32_t ENABLE_155_CLR :1; // 27
            uint32_t ENABLE_156_CLR :1; // 28
            uint32_t ENABLE_157_CLR :1; // 29
            uint32_t ENABLE_158_CLR :1; // 30
            uint32_t ENABLE_159_CLR :1; // 31
        } ENABLE_CLR_REG4_bit;
    }; // 0x390

    uint8_t RSVD394[108]; // 0x394 - 0x3FF

    /* PRU_INTC_CH_MAP_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG0;

        volatile struct
        {
            uint32_t CH_MAP_0 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_1 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_2 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_3 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG0_bit;
    }; // 0x400

    /* PRU_INTC_CH_MAP_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG1;

        volatile struct
        {
            uint32_t CH_MAP_4 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_5 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_6 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_7 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG1_bit;
    }; // 0x404

    /* PRU_INTC_CH_MAP_REG2 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG2;

        volatile struct
        {
            uint32_t CH_MAP_8 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_9 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_10 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_11 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG2_bit;
    }; // 0x408

    /* PRU_INTC_CH_MAP_REG3 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG3;

        volatile struct
        {
            uint32_t CH_MAP_12 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_13 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_14 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_15 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG3_bit;
    }; // 0x40C

    /* PRU_INTC_CH_MAP_REG4 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG4;

        volatile struct
        {
            uint32_t CH_MAP_16 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_17 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_18 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_19 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG4_bit;
    }; // 0x410

    /* PRU_INTC_CH_MAP_REG5 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG5;

        volatile struct
        {
            uint32_t CH_MAP_20 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_21 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_22 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_23 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG5_bit;
    }; // 0x414

    /* PRU_INTC_CH_MAP_REG6 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG6;

        volatile struct
        {
            uint32_t CH_MAP_24 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_25 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_26 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_27 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG6_bit;
    }; // 0x418

    /* PRU_INTC_CH_MAP_REG7 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG7;

        volatile struct
        {
            uint32_t CH_MAP_28 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_29 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_30 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_31 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG7_bit;
    }; // 0x41C

    /* PRU_INTC_CH_MAP_REG8 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG8;

        volatile struct
        {
            uint32_t CH_MAP_32 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_33 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_34 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_35 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG8_bit;
    }; // 0x420

    /* PRU_INTC_CH_MAP_REG9 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG9;

        volatile struct
        {
            uint32_t CH_MAP_36 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_37 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_38 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_39 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG9_bit;
    }; // 0x424

    /* PRU_INTC_CH_MAP_REG10 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG10;

        volatile struct
        {
            uint32_t CH_MAP_40 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_41 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_42 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_43 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG10_bit;
    }; // 0x428

    /* PRU_INTC_CH_MAP_REG11 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG11;

        volatile struct
        {
            uint32_t CH_MAP_44 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_45 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_46 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_47 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG11_bit;
    }; // 0x42C

    /* PRU_INTC_CH_MAP_REG12 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG12;

        volatile struct
        {
            uint32_t CH_MAP_48 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_49 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_50 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_51 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG12_bit;
    }; // 0x430

    /* PRU_INTC_CH_MAP_REG13 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG13;

        volatile struct
        {
            uint32_t CH_MAP_52 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_53 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_54 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_55 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG13_bit;
    }; // 0x434

    /* PRU_INTC_CH_MAP_REG14 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG14;

        volatile struct
        {
            uint32_t CH_MAP_56 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_57 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_58 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_59 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG14_bit;
    }; // 0x438

    /* PRU_INTC_CH_MAP_REG15 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG15;

        volatile struct
        {
            uint32_t CH_MAP_60 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_61 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_62 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_63 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG15_bit;
    }; // 0x43C

    /* PRU_INTC_CH_MAP_REG16 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG16;

        volatile struct
        {
            uint32_t CH_MAP_64 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_65 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_66 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_67 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG16_bit;
    }; // 0x440

    /* PRU_INTC_CH_MAP_REG17 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG17;

        volatile struct
        {
            uint32_t CH_MAP_68 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_69 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_70 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_71 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG17_bit;
    }; // 0x444

    /* PRU_INTC_CH_MAP_REG18 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG18;

        volatile struct
        {
            uint32_t CH_MAP_72 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_73 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_74 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_75 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG18_bit;
    }; // 0x448

    /* PRU_INTC_CH_MAP_REG19 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG19;

        volatile struct
        {
            uint32_t CH_MAP_76 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_77 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_78 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_79 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG19_bit;
    }; // 0x44C

    /* PRU_INTC_CH_MAP_REG20 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG20;

        volatile struct
        {
            uint32_t CH_MAP_80 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_81 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_82 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_83 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG20_bit;
    }; // 0x450

    /* PRU_INTC_CH_MAP_REG21 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG21;

        volatile struct
        {
            uint32_t CH_MAP_84 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_85 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_86 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_87 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG21_bit;
    }; // 0x454

    /* PRU_INTC_CH_MAP_REG22 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG22;

        volatile struct
        {
            uint32_t CH_MAP_88 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_89 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_90 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_91 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG22_bit;
    }; // 0x458

    /* PRU_INTC_CH_MAP_REG23 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG23;

        volatile struct
        {
            uint32_t CH_MAP_92 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_93 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_94 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_95 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG23_bit;
    }; // 0x45C

    /* PRU_INTC_CH_MAP_REG24 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG24;

        volatile struct
        {
            uint32_t CH_MAP_96 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_97 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_98 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_99 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG24_bit;
    }; // 0x460

    /* PRU_INTC_CH_MAP_REG25 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG25;

        volatile struct
        {
            uint32_t CH_MAP_100 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_101 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_102 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_103 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG25_bit;
    }; // 0x464

    /* PRU_INTC_CH_MAP_REG26 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG26;

        volatile struct
        {
            uint32_t CH_MAP_104 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_105 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_106 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_107 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG26_bit;
    }; // 0x468

    /* PRU_INTC_CH_MAP_REG27 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG27;

        volatile struct
        {
            uint32_t CH_MAP_108 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_109 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_110 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_111 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG27_bit;
    }; // 0x46C

    /* PRU_INTC_CH_MAP_REG28 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG28;

        volatile struct
        {
            uint32_t CH_MAP_112 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_113 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_114 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_115 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG28_bit;
    }; // 0x470

    /* PRU_INTC_CH_MAP_REG29 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG29;

        volatile struct
        {
            uint32_t CH_MAP_116 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_117 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_118 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_119 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG29_bit;
    }; // 0x474

    /* PRU_INTC_CH_MAP_REG30 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG30;

        volatile struct
        {
            uint32_t CH_MAP_120 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_121 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_122 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_123 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG30_bit;
    }; // 0x478

    /* PRU_INTC_CH_MAP_REG31 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG31;

        volatile struct
        {
            uint32_t CH_MAP_124 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_125 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_126 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_127 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG31_bit;
    }; // 0x47C

    /* PRU_INTC_CH_MAP_REG32 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG32;

        volatile struct
        {
            uint32_t CH_MAP_128 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_129 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_130 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_131 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG32_bit;
    }; // 0x480

    /* PRU_INTC_CH_MAP_REG33 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG33;

        volatile struct
        {
            uint32_t CH_MAP_132 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_133 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_134 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_135 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG33_bit;
    }; // 0x484

    /* PRU_INTC_CH_MAP_REG34 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG34;

        volatile struct
        {
            uint32_t CH_MAP_136 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_137 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_138 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_139 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG34_bit;
    }; // 0x488

    /* PRU_INTC_CH_MAP_REG35 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG35;

        volatile struct
        {
            uint32_t CH_MAP_140 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_141 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_142 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_143 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG35_bit;
    }; // 0x48C

    /* PRU_INTC_CH_MAP_REG36 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG36;

        volatile struct
        {
            uint32_t CH_MAP_144 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_145 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_146 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_147 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG36_bit;
    }; // 0x490

    /* PRU_INTC_CH_MAP_REG37 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG37;

        volatile struct
        {
            uint32_t CH_MAP_148 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_149 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_150 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_151 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG37_bit;
    }; // 0x494

    /* PRU_INTC_CH_MAP_REG38 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG38;

        volatile struct
        {
            uint32_t CH_MAP_152 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_153 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_154 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_155 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG38_bit;
    }; // 0x498

    /* PRU_INTC_CH_MAP_REG39 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CH_MAP_REG39;

        volatile struct
        {
            uint32_t CH_MAP_156 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t CH_MAP_157 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t CH_MAP_158 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t CH_MAP_159 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } CH_MAP_REG39_bit;
    }; // 0x49C

    uint8_t RSVD4A0[864]; // 0x4A0 - 0x7FF

    /* PRU_INTC_HINT_MAP_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t HINT_MAP_REG0;

        volatile struct
        {
            uint32_t HINT_MAP_0 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t HINT_MAP_1 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t HINT_MAP_2 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t HINT_MAP_3 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } HINT_MAP_REG0_bit;
    }; // 0x800

    /* PRU_INTC_HINT_MAP_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t HINT_MAP_REG1;

        volatile struct
        {
            uint32_t HINT_MAP_4 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t HINT_MAP_5 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t HINT_MAP_6 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t HINT_MAP_7 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } HINT_MAP_REG1_bit;
    }; // 0x804

    /* PRU_INTC_HINT_MAP_REG2 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t HINT_MAP_REG2;

        volatile struct
        {
            uint32_t HINT_MAP_8 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t HINT_MAP_9 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t HINT_MAP_10 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t HINT_MAP_11 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } HINT_MAP_REG2_bit;
    }; // 0x808

    /* PRU_INTC_HINT_MAP_REG3 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t HINT_MAP_REG3;

        volatile struct
        {
            uint32_t HINT_MAP_12 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t HINT_MAP_13 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t HINT_MAP_14 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t HINT_MAP_15 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } HINT_MAP_REG3_bit;
    }; // 0x80C

    /* PRU_INTC_HINT_MAP_REG4 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t HINT_MAP_REG4;

        volatile struct
        {
            uint32_t HINT_MAP_16 :5; // 4:0
            uint32_t RSVD5 :3; // 7:5
            uint32_t HINT_MAP_17 :5; // 12:8
            uint32_t RSVD13 :3; // 15:13
            uint32_t HINT_MAP_18 :5; // 20:16
            uint32_t RSVD21 :3; // 23:21
            uint32_t HINT_MAP_19 :5; // 28:24
            uint32_t RSVD29 :3; // 31:29
        } HINT_MAP_REG4_bit;
    }; // 0x810

    uint8_t RSVD814[236]; // 0x814 - 0x8FF

    /* PRU_INTC_PRI_HINT_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRI_HINT_REG0;

        volatile struct
        {
            uint32_t PRI_HINT_0 :10; // 9:0
            uint32_t RSVD10 :21; // 30:10
            uint32_t NONE_HINT_0 :1; // 31
        } PRI_HINT_REG0_bit;
    }; // 0x900

    /* PRU_INTC_PRI_HINT_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRI_HINT_REG1;

        volatile struct
        {
            uint32_t PRI_HINT_1 :10; // 9:0
            uint32_t RSVD10 :21; // 30:10
            uint32_t NONE_HINT_1 :1; // 31
        } PRI_HINT_REG1_bit;
    }; // 0x904

    /* PRU_INTC_PRI_HINT_REG2 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRI_HINT_REG2;

        volatile struct
        {
            uint32_t PRI_HINT_2 :10; // 9:0
            uint32_t RSVD10 :21; // 30:10
            uint32_t NONE_HINT_2 :1; // 31
        } PRI_HINT_REG2_bit;
    }; // 0x908

    /* PRU_INTC_PRI_HINT_REG3 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRI_HINT_REG3;

        volatile struct
        {
            uint32_t PRI_HINT_3 :10; // 9:0
            uint32_t RSVD10 :21; // 30:10
            uint32_t NONE_HINT_3 :1; // 31
        } PRI_HINT_REG3_bit;
    }; // 0x90C

    /* PRU_INTC_PRI_HINT_REG4 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRI_HINT_REG4;

        volatile struct
        {
            uint32_t PRI_HINT_4 :10; // 9:0
            uint32_t RSVD10 :21; // 30:10
            uint32_t NONE_HINT_4 :1; // 31
        } PRI_HINT_REG4_bit;
    }; // 0x910

    /* PRU_INTC_PRI_HINT_REG5 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRI_HINT_REG5;

        volatile struct
        {
            uint32_t PRI_HINT_5 :10; // 9:0
            uint32_t RSVD10 :21; // 30:10
            uint32_t NONE_HINT_5 :1; // 31
        } PRI_HINT_REG5_bit;
    }; // 0x914

    /* PRU_INTC_PRI_HINT_REG6 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRI_HINT_REG6;

        volatile struct
        {
            uint32_t PRI_HINT_6 :10; // 9:0
            uint32_t RSVD10 :21; // 30:10
            uint32_t NONE_HINT_6 :1; // 31
        } PRI_HINT_REG6_bit;
    }; // 0x918

    /* PRU_INTC_PRI_HINT_REG7 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRI_HINT_REG7;

        volatile struct
        {
            uint32_t PRI_HINT_7 :10; // 9:0
            uint32_t RSVD10 :21; // 30:10
            uint32_t NONE_HINT_7 :1; // 31
        } PRI_HINT_REG7_bit;
    }; // 0x91C

    /* PRU_INTC_PRI_HINT_REG8 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRI_HINT_REG8;

        volatile struct
        {
            uint32_t PRI_HINT_8 :10; // 9:0
            uint32_t RSVD10 :21; // 30:10
            uint32_t NONE_HINT_8 :1; // 31
        } PRI_HINT_REG8_bit;
    }; // 0x920

    /* PRU_INTC_PRI_HINT_REG9 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRI_HINT_REG9;

        volatile struct
        {
            uint32_t PRI_HINT_9 :10; // 9:0
            uint32_t RSVD10 :21; // 30:10
            uint32_t NONE_HINT_9 :1; // 31
        } PRI_HINT_REG9_bit;
    }; // 0x924

    /* PRU_INTC_PRI_HINT_REG10 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRI_HINT_REG10;

        volatile struct
        {
            uint32_t PRI_HINT_10 :10; // 9:0
            uint32_t RSVD10 :21; // 30:10
            uint32_t NONE_HINT_10 :1; // 31
        } PRI_HINT_REG10_bit;
    }; // 0x928

    /* PRU_INTC_PRI_HINT_REG11 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRI_HINT_REG11;

        volatile struct
        {
            uint32_t PRI_HINT_11 :10; // 9:0
            uint32_t RSVD10 :21; // 30:10
            uint32_t NONE_HINT_11 :1; // 31
        } PRI_HINT_REG11_bit;
    }; // 0x92C

    /* PRU_INTC_PRI_HINT_REG12 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRI_HINT_REG12;

        volatile struct
        {
            uint32_t PRI_HINT_12 :10; // 9:0
            uint32_t RSVD10 :21; // 30:10
            uint32_t NONE_HINT_12 :1; // 31
        } PRI_HINT_REG12_bit;
    }; // 0x930

    /* PRU_INTC_PRI_HINT_REG13 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRI_HINT_REG13;

        volatile struct
        {
            uint32_t PRI_HINT_13 :10; // 9:0
            uint32_t RSVD10 :21; // 30:10
            uint32_t NONE_HINT_13 :1; // 31
        } PRI_HINT_REG13_bit;
    }; // 0x934

    /* PRU_INTC_PRI_HINT_REG14 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRI_HINT_REG14;

        volatile struct
        {
            uint32_t PRI_HINT_14 :10; // 9:0
            uint32_t RSVD10 :21; // 30:10
            uint32_t NONE_HINT_14 :1; // 31
        } PRI_HINT_REG14_bit;
    }; // 0x938

    /* PRU_INTC_PRI_HINT_REG15 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRI_HINT_REG15;

        volatile struct
        {
            uint32_t PRI_HINT_15 :10; // 9:0
            uint32_t RSVD10 :21; // 30:10
            uint32_t NONE_HINT_15 :1; // 31
        } PRI_HINT_REG15_bit;
    }; // 0x93C

    /* PRU_INTC_PRI_HINT_REG16 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRI_HINT_REG16;

        volatile struct
        {
            uint32_t PRI_HINT_16 :10; // 9:0
            uint32_t RSVD10 :21; // 30:10
            uint32_t NONE_HINT_16 :1; // 31
        } PRI_HINT_REG16_bit;
    }; // 0x940

    /* PRU_INTC_PRI_HINT_REG17 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRI_HINT_REG17;

        volatile struct
        {
            uint32_t PRI_HINT_17 :10; // 9:0
            uint32_t RSVD10 :21; // 30:10
            uint32_t NONE_HINT_17 :1; // 31
        } PRI_HINT_REG17_bit;
    }; // 0x944

    /* PRU_INTC_PRI_HINT_REG18 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRI_HINT_REG18;

        volatile struct
        {
            uint32_t PRI_HINT_18 :10; // 9:0
            uint32_t RSVD10 :21; // 30:10
            uint32_t NONE_HINT_18 :1; // 31
        } PRI_HINT_REG18_bit;
    }; // 0x948

    /* PRU_INTC_PRI_HINT_REG19 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PRI_HINT_REG19;

        volatile struct
        {
            uint32_t PRI_HINT_19 :10; // 9:0
            uint32_t RSVD10 :21; // 30:10
            uint32_t NONE_HINT_19 :1; // 31
        } PRI_HINT_REG19_bit;
    }; // 0x94C

    uint8_t RSVD950[944]; // 0x950 - 0xCFF

    /* PRU_INTC_POLARITY_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t POLARITY_REG0;

        volatile struct
        {
            uint32_t POLARITY_0 :1; // 0
            uint32_t POLARITY_1 :1; // 1
            uint32_t POLARITY_2 :1; // 2
            uint32_t POLARITY_3 :1; // 3
            uint32_t POLARITY_4 :1; // 4
            uint32_t POLARITY_5 :1; // 5
            uint32_t POLARITY_6 :1; // 6
            uint32_t POLARITY_7 :1; // 7
            uint32_t POLARITY_8 :1; // 8
            uint32_t POLARITY_9 :1; // 9
            uint32_t POLARITY_10 :1; // 10
            uint32_t POLARITY_11 :1; // 11
            uint32_t POLARITY_12 :1; // 12
            uint32_t POLARITY_13 :1; // 13
            uint32_t POLARITY_14 :1; // 14
            uint32_t POLARITY_15 :1; // 15
            uint32_t POLARITY_16 :1; // 16
            uint32_t POLARITY_17 :1; // 17
            uint32_t POLARITY_18 :1; // 18
            uint32_t POLARITY_19 :1; // 19
            uint32_t POLARITY_20 :1; // 20
            uint32_t POLARITY_21 :1; // 21
            uint32_t POLARITY_22 :1; // 22
            uint32_t POLARITY_23 :1; // 23
            uint32_t POLARITY_24 :1; // 24
            uint32_t POLARITY_25 :1; // 25
            uint32_t POLARITY_26 :1; // 26
            uint32_t POLARITY_27 :1; // 27
            uint32_t POLARITY_28 :1; // 28
            uint32_t POLARITY_29 :1; // 29
            uint32_t POLARITY_30 :1; // 30
            uint32_t POLARITY_31 :1; // 31
        } POLARITY_REG0_bit;
    }; // 0xD00

    /* PRU_INTC_POLARITY_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t POLARITY_REG1;

        volatile struct
        {
            uint32_t POLARITY_32 :1; // 0
            uint32_t POLARITY_33 :1; // 1
            uint32_t POLARITY_34 :1; // 2
            uint32_t POLARITY_35 :1; // 3
            uint32_t POLARITY_36 :1; // 4
            uint32_t POLARITY_37 :1; // 5
            uint32_t POLARITY_38 :1; // 6
            uint32_t POLARITY_39 :1; // 7
            uint32_t POLARITY_40 :1; // 8
            uint32_t POLARITY_41 :1; // 9
            uint32_t POLARITY_42 :1; // 10
            uint32_t POLARITY_43 :1; // 11
            uint32_t POLARITY_44 :1; // 12
            uint32_t POLARITY_45 :1; // 13
            uint32_t POLARITY_46 :1; // 14
            uint32_t POLARITY_47 :1; // 15
            uint32_t POLARITY_48 :1; // 16
            uint32_t POLARITY_49 :1; // 17
            uint32_t POLARITY_50 :1; // 18
            uint32_t POLARITY_51 :1; // 19
            uint32_t POLARITY_52 :1; // 20
            uint32_t POLARITY_53 :1; // 21
            uint32_t POLARITY_54 :1; // 22
            uint32_t POLARITY_55 :1; // 23
            uint32_t POLARITY_56 :1; // 24
            uint32_t POLARITY_57 :1; // 25
            uint32_t POLARITY_58 :1; // 26
            uint32_t POLARITY_59 :1; // 27
            uint32_t POLARITY_60 :1; // 28
            uint32_t POLARITY_61 :1; // 29
            uint32_t POLARITY_62 :1; // 30
            uint32_t POLARITY_63 :1; // 31
        } POLARITY_REG1_bit;
    }; // 0xD04

    /* PRU_INTC_POLARITY_REG2 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t POLARITY_REG2;

        volatile struct
        {
            uint32_t POLARITY_64 :1; // 0
            uint32_t POLARITY_65 :1; // 1
            uint32_t POLARITY_66 :1; // 2
            uint32_t POLARITY_67 :1; // 3
            uint32_t POLARITY_68 :1; // 4
            uint32_t POLARITY_69 :1; // 5
            uint32_t POLARITY_70 :1; // 6
            uint32_t POLARITY_71 :1; // 7
            uint32_t POLARITY_72 :1; // 8
            uint32_t POLARITY_73 :1; // 9
            uint32_t POLARITY_74 :1; // 10
            uint32_t POLARITY_75 :1; // 11
            uint32_t POLARITY_76 :1; // 12
            uint32_t POLARITY_77 :1; // 13
            uint32_t POLARITY_78 :1; // 14
            uint32_t POLARITY_79 :1; // 15
            uint32_t POLARITY_80 :1; // 16
            uint32_t POLARITY_81 :1; // 17
            uint32_t POLARITY_82 :1; // 18
            uint32_t POLARITY_83 :1; // 19
            uint32_t POLARITY_84 :1; // 20
            uint32_t POLARITY_85 :1; // 21
            uint32_t POLARITY_86 :1; // 22
            uint32_t POLARITY_87 :1; // 23
            uint32_t POLARITY_88 :1; // 24
            uint32_t POLARITY_89 :1; // 25
            uint32_t POLARITY_90 :1; // 26
            uint32_t POLARITY_91 :1; // 27
            uint32_t POLARITY_92 :1; // 28
            uint32_t POLARITY_93 :1; // 29
            uint32_t POLARITY_94 :1; // 30
            uint32_t POLARITY_95 :1; // 31
        } POLARITY_REG2_bit;
    }; // 0xD08

    /* PRU_INTC_POLARITY_REG3 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t POLARITY_REG3;

        volatile struct
        {
            uint32_t POLARITY_96 :1; // 0
            uint32_t POLARITY_97 :1; // 1
            uint32_t POLARITY_98 :1; // 2
            uint32_t POLARITY_99 :1; // 3
            uint32_t POLARITY_100 :1; // 4
            uint32_t POLARITY_101 :1; // 5
            uint32_t POLARITY_102 :1; // 6
            uint32_t POLARITY_103 :1; // 7
            uint32_t POLARITY_104 :1; // 8
            uint32_t POLARITY_105 :1; // 9
            uint32_t POLARITY_106 :1; // 10
            uint32_t POLARITY_107 :1; // 11
            uint32_t POLARITY_108 :1; // 12
            uint32_t POLARITY_109 :1; // 13
            uint32_t POLARITY_110 :1; // 14
            uint32_t POLARITY_111 :1; // 15
            uint32_t POLARITY_112 :1; // 16
            uint32_t POLARITY_113 :1; // 17
            uint32_t POLARITY_114 :1; // 18
            uint32_t POLARITY_115 :1; // 19
            uint32_t POLARITY_116 :1; // 20
            uint32_t POLARITY_117 :1; // 21
            uint32_t POLARITY_118 :1; // 22
            uint32_t POLARITY_119 :1; // 23
            uint32_t POLARITY_120 :1; // 24
            uint32_t POLARITY_121 :1; // 25
            uint32_t POLARITY_122 :1; // 26
            uint32_t POLARITY_123 :1; // 27
            uint32_t POLARITY_124 :1; // 28
            uint32_t POLARITY_125 :1; // 29
            uint32_t POLARITY_126 :1; // 30
            uint32_t POLARITY_127 :1; // 31
        } POLARITY_REG3_bit;
    }; // 0xD0C

    /* PRU_INTC_POLARITY_REG4 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t POLARITY_REG4;

        volatile struct
        {
            uint32_t POLARITY_128 :1; // 0
            uint32_t POLARITY_129 :1; // 1
            uint32_t POLARITY_130 :1; // 2
            uint32_t POLARITY_131 :1; // 3
            uint32_t POLARITY_132 :1; // 4
            uint32_t POLARITY_133 :1; // 5
            uint32_t POLARITY_134 :1; // 6
            uint32_t POLARITY_135 :1; // 7
            uint32_t POLARITY_136 :1; // 8
            uint32_t POLARITY_137 :1; // 9
            uint32_t POLARITY_138 :1; // 10
            uint32_t POLARITY_139 :1; // 11
            uint32_t POLARITY_140 :1; // 12
            uint32_t POLARITY_141 :1; // 13
            uint32_t POLARITY_142 :1; // 14
            uint32_t POLARITY_143 :1; // 15
            uint32_t POLARITY_144 :1; // 16
            uint32_t POLARITY_145 :1; // 17
            uint32_t POLARITY_146 :1; // 18
            uint32_t POLARITY_147 :1; // 19
            uint32_t POLARITY_148 :1; // 20
            uint32_t POLARITY_149 :1; // 21
            uint32_t POLARITY_150 :1; // 22
            uint32_t POLARITY_151 :1; // 23
            uint32_t POLARITY_152 :1; // 24
            uint32_t POLARITY_153 :1; // 25
            uint32_t POLARITY_154 :1; // 26
            uint32_t POLARITY_155 :1; // 27
            uint32_t POLARITY_156 :1; // 28
            uint32_t POLARITY_157 :1; // 29
            uint32_t POLARITY_158 :1; // 30
            uint32_t POLARITY_159 :1; // 31
        } POLARITY_REG4_bit;
    }; // 0xD10

    uint8_t RSVDD14[108]; // 0xD14 - 0xD7F

    /* PRU_INTC_TYPE_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t TYPE_REG0;

        volatile struct
        {
            uint32_t TYPE_0 :1; // 0
            uint32_t TYPE_1 :1; // 1
            uint32_t TYPE_2 :1; // 2
            uint32_t TYPE_3 :1; // 3
            uint32_t TYPE_4 :1; // 4
            uint32_t TYPE_5 :1; // 5
            uint32_t TYPE_6 :1; // 6
            uint32_t TYPE_7 :1; // 7
            uint32_t TYPE_8 :1; // 8
            uint32_t TYPE_9 :1; // 9
            uint32_t TYPE_10 :1; // 10
            uint32_t TYPE_11 :1; // 11
            uint32_t TYPE_12 :1; // 12
            uint32_t TYPE_13 :1; // 13
            uint32_t TYPE_14 :1; // 14
            uint32_t TYPE_15 :1; // 15
            uint32_t TYPE_16 :1; // 16
            uint32_t TYPE_17 :1; // 17
            uint32_t TYPE_18 :1; // 18
            uint32_t TYPE_19 :1; // 19
            uint32_t TYPE_20 :1; // 20
            uint32_t TYPE_21 :1; // 21
            uint32_t TYPE_22 :1; // 22
            uint32_t TYPE_23 :1; // 23
            uint32_t TYPE_24 :1; // 24
            uint32_t TYPE_25 :1; // 25
            uint32_t TYPE_26 :1; // 26
            uint32_t TYPE_27 :1; // 27
            uint32_t TYPE_28 :1; // 28
            uint32_t TYPE_29 :1; // 29
            uint32_t TYPE_30 :1; // 30
            uint32_t TYPE_31 :1; // 31
        } TYPE_REG0_bit;
    }; // 0xD80

    /* PRU_INTC_TYPE_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t TYPE_REG1;

        volatile struct
        {
            uint32_t TYPE_32 :1; // 0
            uint32_t TYPE_33 :1; // 1
            uint32_t TYPE_34 :1; // 2
            uint32_t TYPE_35 :1; // 3
            uint32_t TYPE_36 :1; // 4
            uint32_t TYPE_37 :1; // 5
            uint32_t TYPE_38 :1; // 6
            uint32_t TYPE_39 :1; // 7
            uint32_t TYPE_40 :1; // 8
            uint32_t TYPE_41 :1; // 9
            uint32_t TYPE_42 :1; // 10
            uint32_t TYPE_43 :1; // 11
            uint32_t TYPE_44 :1; // 12
            uint32_t TYPE_45 :1; // 13
            uint32_t TYPE_46 :1; // 14
            uint32_t TYPE_47 :1; // 15
            uint32_t TYPE_48 :1; // 16
            uint32_t TYPE_49 :1; // 17
            uint32_t TYPE_50 :1; // 18
            uint32_t TYPE_51 :1; // 19
            uint32_t TYPE_52 :1; // 20
            uint32_t TYPE_53 :1; // 21
            uint32_t TYPE_54 :1; // 22
            uint32_t TYPE_55 :1; // 23
            uint32_t TYPE_56 :1; // 24
            uint32_t TYPE_57 :1; // 25
            uint32_t TYPE_58 :1; // 26
            uint32_t TYPE_59 :1; // 27
            uint32_t TYPE_60 :1; // 28
            uint32_t TYPE_61 :1; // 29
            uint32_t TYPE_62 :1; // 30
            uint32_t TYPE_63 :1; // 31
        } TYPE_REG1_bit;
    }; // 0xD84

    /* PRU_INTC_TYPE_REG2 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t TYPE_REG2;

        volatile struct
        {
            uint32_t TYPE_64 :1; // 0
            uint32_t TYPE_65 :1; // 1
            uint32_t TYPE_66 :1; // 2
            uint32_t TYPE_67 :1; // 3
            uint32_t TYPE_68 :1; // 4
            uint32_t TYPE_69 :1; // 5
            uint32_t TYPE_70 :1; // 6
            uint32_t TYPE_71 :1; // 7
            uint32_t TYPE_72 :1; // 8
            uint32_t TYPE_73 :1; // 9
            uint32_t TYPE_74 :1; // 10
            uint32_t TYPE_75 :1; // 11
            uint32_t TYPE_76 :1; // 12
            uint32_t TYPE_77 :1; // 13
            uint32_t TYPE_78 :1; // 14
            uint32_t TYPE_79 :1; // 15
            uint32_t TYPE_80 :1; // 16
            uint32_t TYPE_81 :1; // 17
            uint32_t TYPE_82 :1; // 18
            uint32_t TYPE_83 :1; // 19
            uint32_t TYPE_84 :1; // 20
            uint32_t TYPE_85 :1; // 21
            uint32_t TYPE_86 :1; // 22
            uint32_t TYPE_87 :1; // 23
            uint32_t TYPE_88 :1; // 24
            uint32_t TYPE_89 :1; // 25
            uint32_t TYPE_90 :1; // 26
            uint32_t TYPE_91 :1; // 27
            uint32_t TYPE_92 :1; // 28
            uint32_t TYPE_93 :1; // 29
            uint32_t TYPE_94 :1; // 30
            uint32_t TYPE_95 :1; // 31
        } TYPE_REG2_bit;
    }; // 0xD88

    /* PRU_INTC_TYPE_REG3 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t TYPE_REG3;

        volatile struct
        {
            uint32_t TYPE_96 :1; // 0
            uint32_t TYPE_97 :1; // 1
            uint32_t TYPE_98 :1; // 2
            uint32_t TYPE_99 :1; // 3
            uint32_t TYPE_100 :1; // 4
            uint32_t TYPE_101 :1; // 5
            uint32_t TYPE_102 :1; // 6
            uint32_t TYPE_103 :1; // 7
            uint32_t TYPE_104 :1; // 8
            uint32_t TYPE_105 :1; // 9
            uint32_t TYPE_106 :1; // 10
            uint32_t TYPE_107 :1; // 11
            uint32_t TYPE_108 :1; // 12
            uint32_t TYPE_109 :1; // 13
            uint32_t TYPE_110 :1; // 14
            uint32_t TYPE_111 :1; // 15
            uint32_t TYPE_112 :1; // 16
            uint32_t TYPE_113 :1; // 17
            uint32_t TYPE_114 :1; // 18
            uint32_t TYPE_115 :1; // 19
            uint32_t TYPE_116 :1; // 20
            uint32_t TYPE_117 :1; // 21
            uint32_t TYPE_118 :1; // 22
            uint32_t TYPE_119 :1; // 23
            uint32_t TYPE_120 :1; // 24
            uint32_t TYPE_121 :1; // 25
            uint32_t TYPE_122 :1; // 26
            uint32_t TYPE_123 :1; // 27
            uint32_t TYPE_124 :1; // 28
            uint32_t TYPE_125 :1; // 29
            uint32_t TYPE_126 :1; // 30
            uint32_t TYPE_127 :1; // 31
        } TYPE_REG3_bit;
    }; // 0xD8C

    /* PRU_INTC_TYPE_REG4 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t TYPE_REG4;

        volatile struct
        {
            uint32_t TYPE_128 :1; // 0
            uint32_t TYPE_129 :1; // 1
            uint32_t TYPE_130 :1; // 2
            uint32_t TYPE_131 :1; // 3
            uint32_t TYPE_132 :1; // 4
            uint32_t TYPE_133 :1; // 5
            uint32_t TYPE_134 :1; // 6
            uint32_t TYPE_135 :1; // 7
            uint32_t TYPE_136 :1; // 8
            uint32_t TYPE_137 :1; // 9
            uint32_t TYPE_138 :1; // 10
            uint32_t TYPE_139 :1; // 11
            uint32_t TYPE_140 :1; // 12
            uint32_t TYPE_141 :1; // 13
            uint32_t TYPE_142 :1; // 14
            uint32_t TYPE_143 :1; // 15
            uint32_t TYPE_144 :1; // 16
            uint32_t TYPE_145 :1; // 17
            uint32_t TYPE_146 :1; // 18
            uint32_t TYPE_147 :1; // 19
            uint32_t TYPE_148 :1; // 20
            uint32_t TYPE_149 :1; // 21
            uint32_t TYPE_150 :1; // 22
            uint32_t TYPE_151 :1; // 23
            uint32_t TYPE_152 :1; // 24
            uint32_t TYPE_153 :1; // 25
            uint32_t TYPE_154 :1; // 26
            uint32_t TYPE_155 :1; // 27
            uint32_t TYPE_156 :1; // 28
            uint32_t TYPE_157 :1; // 29
            uint32_t TYPE_158 :1; // 30
            uint32_t TYPE_159 :1; // 31
        } TYPE_REG4_bit;
    }; // 0xD90

    uint8_t RSVDD94[876]; // 0xD94 - 0x10FF

    /* PRU_INTC_NEST_LEVEL_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t NEST_LEVEL_REG0;

        volatile struct
        {
            uint32_t NEST_HINT_0 :9; // 8:0
            uint32_t RSVD9 :22; // 30:9
            uint32_t NEST_AUTO_OVR :1; // 31
        } NEST_LEVEL_REG0_bit;
    }; // 0x1100

    /* PRU_INTC_NEST_LEVEL_REG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t NEST_LEVEL_REG1;

        volatile struct
        {
            uint32_t NEST_HINT_1 :9; // 8:0
            uint32_t RSVD9 :22; // 30:9
            uint32_t NEST_AUTO_OVR :1; // 31
        } NEST_LEVEL_REG1_bit;
    }; // 0x1104

    /* PRU_INTC_NEST_LEVEL_REG2 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t NEST_LEVEL_REG2;

        volatile struct
        {
            uint32_t NEST_HINT_2 :9; // 8:0
            uint32_t RSVD9 :22; // 30:9
            uint32_t NEST_AUTO_OVR :1; // 31
        } NEST_LEVEL_REG2_bit;
    }; // 0x1108

    /* PRU_INTC_NEST_LEVEL_REG3 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t NEST_LEVEL_REG3;

        volatile struct
        {
            uint32_t NEST_HINT_3 :9; // 8:0
            uint32_t RSVD9 :22; // 30:9
            uint32_t NEST_AUTO_OVR :1; // 31
        } NEST_LEVEL_REG3_bit;
    }; // 0x110C

    /* PRU_INTC_NEST_LEVEL_REG4 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t NEST_LEVEL_REG4;

        volatile struct
        {
            uint32_t NEST_HINT_4 :9; // 8:0
            uint32_t RSVD9 :22; // 30:9
            uint32_t NEST_AUTO_OVR :1; // 31
        } NEST_LEVEL_REG4_bit;
    }; // 0x1110

    /* PRU_INTC_NEST_LEVEL_REG5 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t NEST_LEVEL_REG5;

        volatile struct
        {
            uint32_t NEST_HINT_5 :9; // 8:0
            uint32_t RSVD9 :22; // 30:9
            uint32_t NEST_AUTO_OVR :1; // 31
        } NEST_LEVEL_REG5_bit;
    }; // 0x1114

    /* PRU_INTC_NEST_LEVEL_REG6 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t NEST_LEVEL_REG6;

        volatile struct
        {
            uint32_t NEST_HINT_6 :9; // 8:0
            uint32_t RSVD9 :22; // 30:9
            uint32_t NEST_AUTO_OVR :1; // 31
        } NEST_LEVEL_REG6_bit;
    }; // 0x1118

    /* PRU_INTC_NEST_LEVEL_REG7 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t NEST_LEVEL_REG7;

        volatile struct
        {
            uint32_t NEST_HINT_7 :9; // 8:0
            uint32_t RSVD9 :22; // 30:9
            uint32_t NEST_AUTO_OVR :1; // 31
        } NEST_LEVEL_REG7_bit;
    }; // 0x111C

    /* PRU_INTC_NEST_LEVEL_REG8 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t NEST_LEVEL_REG8;

        volatile struct
        {
            uint32_t NEST_HINT_8 :9; // 8:0
            uint32_t RSVD9 :22; // 30:9
            uint32_t NEST_AUTO_OVR :1; // 31
        } NEST_LEVEL_REG8_bit;
    }; // 0x1120

    /* PRU_INTC_NEST_LEVEL_REG9 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t NEST_LEVEL_REG9;

        volatile struct
        {
            uint32_t NEST_HINT_9 :9; // 8:0
            uint32_t RSVD9 :22; // 30:9
            uint32_t NEST_AUTO_OVR :1; // 31
        } NEST_LEVEL_REG9_bit;
    }; // 0x1124

    /* PRU_INTC_NEST_LEVEL_REG10 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t NEST_LEVEL_REG10;

        volatile struct
        {
            uint32_t NEST_HINT_10 :9; // 8:0
            uint32_t RSVD9 :22; // 30:9
            uint32_t NEST_AUTO_OVR :1; // 31
        } NEST_LEVEL_REG10_bit;
    }; // 0x1128

    /* PRU_INTC_NEST_LEVEL_REG11 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t NEST_LEVEL_REG11;

        volatile struct
        {
            uint32_t NEST_HINT_11 :9; // 8:0
            uint32_t RSVD9 :22; // 30:9
            uint32_t NEST_AUTO_OVR :1; // 31
        } NEST_LEVEL_REG11_bit;
    }; // 0x112C

    /* PRU_INTC_NEST_LEVEL_REG12 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t NEST_LEVEL_REG12;

        volatile struct
        {
            uint32_t NEST_HINT_12 :9; // 8:0
            uint32_t RSVD9 :22; // 30:9
            uint32_t NEST_AUTO_OVR :1; // 31
        } NEST_LEVEL_REG12_bit;
    }; // 0x1130

    /* PRU_INTC_NEST_LEVEL_REG13 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t NEST_LEVEL_REG13;

        volatile struct
        {
            uint32_t NEST_HINT_13 :9; // 8:0
            uint32_t RSVD9 :22; // 30:9
            uint32_t NEST_AUTO_OVR :1; // 31
        } NEST_LEVEL_REG13_bit;
    }; // 0x1134

    /* PRU_INTC_NEST_LEVEL_REG14 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t NEST_LEVEL_REG14;

        volatile struct
        {
            uint32_t NEST_HINT_14 :9; // 8:0
            uint32_t RSVD9 :22; // 30:9
            uint32_t NEST_AUTO_OVR :1; // 31
        } NEST_LEVEL_REG14_bit;
    }; // 0x1138

    /* PRU_INTC_NEST_LEVEL_REG15 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t NEST_LEVEL_REG15;

        volatile struct
        {
            uint32_t NEST_HINT_15 :9; // 8:0
            uint32_t RSVD9 :22; // 30:9
            uint32_t NEST_AUTO_OVR :1; // 31
        } NEST_LEVEL_REG15_bit;
    }; // 0x113C

    /* PRU_INTC_NEST_LEVEL_REG16 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t NEST_LEVEL_REG16;

        volatile struct
        {
            uint32_t NEST_HINT_16 :9; // 8:0
            uint32_t RSVD9 :22; // 30:9
            uint32_t NEST_AUTO_OVR :1; // 31
        } NEST_LEVEL_REG16_bit;
    }; // 0x1140

    /* PRU_INTC_NEST_LEVEL_REG17 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t NEST_LEVEL_REG17;

        volatile struct
        {
            uint32_t NEST_HINT_17 :9; // 8:0
            uint32_t RSVD9 :22; // 30:9
            uint32_t NEST_AUTO_OVR :1; // 31
        } NEST_LEVEL_REG17_bit;
    }; // 0x1144

    /* PRU_INTC_NEST_LEVEL_REG18 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t NEST_LEVEL_REG18;

        volatile struct
        {
            uint32_t NEST_HINT_18 :9; // 8:0
            uint32_t RSVD9 :22; // 30:9
            uint32_t NEST_AUTO_OVR :1; // 31
        } NEST_LEVEL_REG18_bit;
    }; // 0x1148

    /* PRU_INTC_NEST_LEVEL_REG19 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t NEST_LEVEL_REG19;

        volatile struct
        {
            uint32_t NEST_HINT_19 :9; // 8:0
            uint32_t RSVD9 :22; // 30:9
            uint32_t NEST_AUTO_OVR :1; // 31
        } NEST_LEVEL_REG19_bit;
    }; // 0x114C

    uint8_t RSVD1150[944]; // 0x1150 - 0x14FF

    /* PRU_INTC_ENABLE_HINT_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t ENABLE_HINT_REG0;

        volatile struct
        {
            uint32_t ENABLE_HINT_0 :1; // 0
            uint32_t ENABLE_HINT_1 :1; // 1
            uint32_t ENABLE_HINT_2 :1; // 2
            uint32_t ENABLE_HINT_3 :1; // 3
            uint32_t ENABLE_HINT_4 :1; // 4
            uint32_t ENABLE_HINT_5 :1; // 5
            uint32_t ENABLE_HINT_6 :1; // 6
            uint32_t ENABLE_HINT_7 :1; // 7
            uint32_t ENABLE_HINT_8 :1; // 8
            uint32_t ENABLE_HINT_9 :1; // 9
            uint32_t ENABLE_HINT_10 :1; // 10
            uint32_t ENABLE_HINT_11 :1; // 11
            uint32_t ENABLE_HINT_12 :1; // 12
            uint32_t ENABLE_HINT_13 :1; // 13
            uint32_t ENABLE_HINT_14 :1; // 14
            uint32_t ENABLE_HINT_15 :1; // 15
            uint32_t ENABLE_HINT_16 :1; // 16
            uint32_t ENABLE_HINT_17 :1; // 17
            uint32_t ENABLE_HINT_18 :1; // 18
            uint32_t ENABLE_HINT_19 :1; // 19
            uint32_t RSVD20 :12; // 31:20
        } ENABLE_HINT_REG0_bit;
    };
    // 0x1500
};

struct pru_ctrl
{
    /* PRU_CTRL_CONTROL REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CONTROL;

        volatile struct
        {
            uint32_t SOFT_RST_N :1; // 0
            uint32_t PDSP_ENABLE :1; // 1
            uint32_t PDSP_SLEEPING :1; // 2
            uint32_t COUNTER_ENABLE :1; // 3
            uint32_t RESTART :1; // 4
            uint32_t RSVD5 :3; // 7:5
            uint32_t SINGLE_STEP :1; // 8
            uint32_t RSVD9 :5; // 13:9
            uint32_t BIG_ENDIAN :1; // 14
            uint32_t PDSP_STATE :1; // 15
            uint32_t PCOUNTER_RST_VAL :16; // 31:16
        } CONTROL_bit;
    }; // 0x0

    /* PRU_CTRL_STATUS REGISTER BIT FIELD */
    union
    {
        volatile uint32_t STATUS;

        volatile struct
        {
            uint32_t PCOUNTER :16; // 15:0
            uint32_t RSVD16 :16; // 31:16
        } STATUS_bit;
    }; // 0x4

    /* PRU_CTRL_WAKEUP_ENABLE REGISTER BIT FIELD */
    union
    {
        volatile uint32_t WAKEUP_ENABLE;

        volatile struct
        {
            uint32_t BITWISE_ENABLES :32; // 31:0
        } WAKEUP_ENABLE_bit;
    }; // 0x8

    /* PRU_CTRL_CYCLE_COUNT REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CYCLE_COUNT;

        volatile struct
        {
            uint32_t CYCLECOUNT :32; // 31:0
        } CYCLE_COUNT_bit;
    }; // 0xC

    /* PRU_CTRL_STALL_COUNT REGISTER BIT FIELD */
    union
    {
        volatile uint32_t STALL_COUNT;

        volatile struct
        {
            uint32_t STALLCOUNT :32; // 31:0
        } STALL_COUNT_bit;
    }; // 0x10

    uint8_t RSVD14[12]; // 0x14 - 0x1F

    /* PRU_CTRL_CONSTANT_TABLE_BLOCK_INDEX_0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CONSTANT_TABLE_BLOCK_INDEX_0;

        volatile struct
        {
            uint32_t C24_BLK_INDEX :8; // 7:0
            uint32_t RSVD8 :8; // 15:8
            uint32_t C25_BLK_INDEX :8; // 23:16
            uint32_t RSVD24 :8; // 31:24
        } CONSTANT_TABLE_BLOCK_INDEX_0_bit;
    }; // 0x20

    /* PRU_CTRL_CONSTANT_TABLE_BLOCK_INDEX_1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CONSTANT_TABLE_BLOCK_INDEX_1;

        volatile struct
        {
            uint32_t C26_BLK_INDEX :8; // 7:0
            uint32_t RSVD8 :8; // 15:8
            uint32_t C27_BLK_INDEX :8; // 23:16
            uint32_t RSVD24 :8; // 31:24
        } CONSTANT_TABLE_BLOCK_INDEX_1_bit;
    }; // 0x24

    /* PRU_CTRL_CONSTANT_TABLE_PROG_PTR_0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CONSTANT_TABLE_PROG_PTR_0;

        volatile struct
        {
            uint32_t C28_POINTER :16; // 15:0
            uint32_t C29_POINTER :16; // 31:16
        } CONSTANT_TABLE_PROG_PTR_0_bit;
    }; // 0x28

    /* PRU_CTRL_CONSTANT_TABLE_PROG_PTR_1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CONSTANT_TABLE_PROG_PTR_1;

        volatile struct
        {
            uint32_t C30_POINTER :16; // 15:0
            uint32_t C31_POINTER :16; // 31:16
        } CONSTANT_TABLE_PROG_PTR_1_bit;
    };
    // 0x2C
};

struct pru_ecc_aggr
{

    /* PRU_ECC_AGGR_AGGR_REVISION REGISTER BIT FIELD */
    union
    {
        volatile uint32_t AGGR_REVISION;

        volatile struct
        {
            uint32_t REVMIN :6; // 5:0
            uint32_t CUSTOM :2; // 7:6
            uint32_t REVMAJ :3; // 10:8
            uint32_t REVRTL :5; // 15:11
            uint32_t MODULE_ID :12; // 27:16
            uint32_t BU :2; // 29:28
            uint32_t SCHEME :2; // 31:30
        } AGGR_REVISION_bit;
    }; // 0x0

    uint8_t RSVD4[4]; // 0x4 - 0x7

    /* PRU_ECC_AGGR_ECC_VECTOR REGISTER BIT FIELD */
    union
    {
        volatile uint32_t ECC_VECTOR;

        volatile struct
        {
            uint32_t ECC_VECTOR :11; // 10:0
            uint32_t RSVD11 :4; // 14:11
            uint32_t RD_SVBUS :1; // 15
            uint32_t RD_SVBUS_ADDRESS :8; // 23:16
            uint32_t RD_SVBUS_DONE :1; // 24
            uint32_t RSVD25 :7; // 31:25
        } ECC_VECTOR_bit;
    }; // 0x8

    /* PRU_ECC_AGGR_MISC_STATUS REGISTER BIT FIELD */
    union
    {
        volatile uint32_t MISC_STATUS;

        volatile struct
        {
            uint32_t NUM_RAMS :11; // 10:0
            uint32_t RSVD11 :21; // 31:11
        } MISC_STATUS_bit;
    }; // 0xC

    /* PRU_ECC_AGGR_RESERVED_SVBUS REGISTER BIT FIELD */
    union
    {
        volatile uint32_t RESERVED_SVBUS;

        volatile struct
        {
            uint32_t DATA :32; // 31:0
        } RESERVED_SVBUS_bit;
    }; // 0x10

    uint8_t RSVD14[40]; // 0x14 - 0x3B

    /* PRU_ECC_AGGR_SEC_EOI_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t SEC_EOI_REG;

        volatile struct
        {
            uint32_t EOI_WR :1; // 0
            uint32_t RSVD1 :31; // 31:1
        } SEC_EOI_REG_bit;
    }; // 0x3C

    /* PRU_ECC_AGGR_SEC_STATUS_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t SEC_STATUS_REG0;

        volatile struct
        {
            uint32_t PR1_DRAM0_PEND :1; // 0
            uint32_t PR1_DRAM1_PEND :1; // 1
            uint32_t PR1_PDSP0_IRAM_PEND :1; // 2
            uint32_t PR1_PDSP1_IRAM_PEND :1; // 3
            uint32_t PR1_RAM_PEND :1; // 4
            uint32_t PR1_RTU0_IRAM_ECC_PEND :1; // 5
            uint32_t PR1_RTU1_IRAM_ECC_PEND :1; // 6
            uint32_t PR1_PDSP_TX0_IRAM_PEND :1; // 7
            uint32_t PR1_PDSP_TX1_IRAM_PEND :1; // 8
            uint32_t RSVD9 :23; // 31:9
        } SEC_STATUS_REG0_bit;
    }; // 0x40

    uint8_t RSVD44[60]; // 0x44 - 0x7F

    /* PRU_ECC_AGGR_SEC_ENABLE_SET_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t SEC_ENABLE_SET_REG0;

        volatile struct
        {
            uint32_t PR1_DRAM0_ENABLE_SET :1; // 0
            uint32_t PR1_DRAM1_ENABLE_SET :1; // 1
            uint32_t PR1_PDSP0_IRAM_ENABLE_SET :1; // 2
            uint32_t PR1_PDSP1_IRAM_ENABLE_SET :1; // 3
            uint32_t PR1_RAM_ENABLE_SET :1; // 4
            uint32_t PR1_RTU0_IRAM_ECC_ENABLE_SET :1; // 5
            uint32_t PR1_RTU1_IRAM_ECC_ENABLE_SET :1; // 6
            uint32_t PR1_PDSP_TX0_IRAM_ENABLE_SET :1; // 7
            uint32_t PR1_PDSP_TX1_IRAM_ENABLE_SET :1; // 8
            uint32_t RSVD9 :23; // 31:9
        } SEC_ENABLE_SET_REG0_bit;
    }; // 0x80

    uint8_t RSVD84[60]; // 0x84 - 0xBF

    /* PRU_ECC_AGGR_SEC_ENABLE_CLR_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t SEC_ENABLE_CLR_REG0;

        volatile struct
        {
            uint32_t PR1_DRAM0_ENABLE_CLR :1; // 0
            uint32_t PR1_DRAM1_ENABLE_CLR :1; // 1
            uint32_t PR1_PDSP0_IRAM_ENABLE_CLR :1; // 2
            uint32_t PR1_PDSP1_IRAM_ENABLE_CLR :1; // 3
            uint32_t PR1_RAM_ENABLE_CLR :1; // 4
            uint32_t PR1_RTU0_IRAM_ECC_ENABLE_CLR :1; // 5
            uint32_t PR1_RTU1_IRAM_ECC_ENABLE_CLR :1; // 6
            uint32_t PR1_PDSP_TX0_IRAM_ENABLE_CLR :1; // 7
            uint32_t PR1_PDSP_TX1_IRAM_ENABLE_CLR :1; // 8
            uint32_t RSVD9 :23; // 31:9
        } SEC_ENABLE_CLR_REG0_bit;
    }; // 0xC0

    uint8_t RSVDC4[120]; // 0xC4 - 0x13B

    /* PRU_ECC_AGGR_DED_EOI_REG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t DED_EOI_REG;

        volatile struct
        {
            uint32_t EOI_WR :1; // 0
            uint32_t RSVD1 :31; // 31:1
        } DED_EOI_REG_bit;
    }; // 0x13C

    /* PRU_ECC_AGGR_DED_STATUS_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t DED_STATUS_REG0;

        volatile struct
        {
            uint32_t PR1_DRAM0_PEND :1; // 0
            uint32_t PR1_DRAM1_PEND :1; // 1
            uint32_t PR1_PDSP0_IRAM_PEND :1; // 2
            uint32_t PR1_PDSP1_IRAM_PEND :1; // 3
            uint32_t PR1_RAM_PEND :1; // 4
            uint32_t PR1_RTU0_IRAM_ECC_PEND :1; // 5
            uint32_t PR1_RTU1_IRAM_ECC_PEND :1; // 6
            uint32_t PR1_PDSP_TX0_IRAM_PEND :1; // 7
            uint32_t PR1_PDSP_TX1_IRAM_PEND :1; // 8
            uint32_t RSVD9 :23; // 31:9
        } DED_STATUS_REG0_bit;
    }; // 0x140

    uint8_t RSVD144[60]; // 0x144 - 0x17F

    /* PRU_ECC_AGGR_DED_ENABLE_SET_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t DED_ENABLE_SET_REG0;

        volatile struct
        {
            uint32_t PR1_DRAM0_ENABLE_SET :1; // 0
            uint32_t PR1_DRAM1_ENABLE_SET :1; // 1
            uint32_t PR1_PDSP0_IRAM_ENABLE_SET :1; // 2
            uint32_t PR1_PDSP1_IRAM_ENABLE_SET :1; // 3
            uint32_t PR1_RAM_ENABLE_SET :1; // 4
            uint32_t PR1_RTU0_IRAM_ECC_ENABLE_SET :1; // 5
            uint32_t PR1_RTU1_IRAM_ECC_ENABLE_SET :1; // 6
            uint32_t PR1_PDSP_TX0_IRAM_ENABLE_SET :1; // 7
            uint32_t PR1_PDSP_TX1_IRAM_ENABLE_SET :1; // 8
            uint32_t RSVD9 :23; // 31:9
        } DED_ENABLE_SET_REG0_bit;
    }; // 0x180

    uint8_t RSVD184[60]; // 0x184 - 0x1BF

    /* PRU_ECC_AGGR_DED_ENABLE_CLR_REG0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t DED_ENABLE_CLR_REG0;

        volatile struct
        {
            uint32_t PR1_DRAM0_ENABLE_CLR :1; // 0
            uint32_t PR1_DRAM1_ENABLE_CLR :1; // 1
            uint32_t PR1_PDSP0_IRAM_ENABLE_CLR :1; // 2
            uint32_t PR1_PDSP1_IRAM_ENABLE_CLR :1; // 3
            uint32_t PR1_RAM_ENABLE_CLR :1; // 4
            uint32_t PR1_RTU0_IRAM_ECC_ENABLE_CLR :1; // 5
            uint32_t PR1_RTU1_IRAM_ECC_ENABLE_CLR :1; // 6
            uint32_t PR1_PDSP_TX0_IRAM_ENABLE_CLR :1; // 7
            uint32_t PR1_PDSP_TX1_IRAM_ENABLE_CLR :1; // 8
            uint32_t RSVD9 :23; // 31:9
        } DED_ENABLE_CLR_REG0_bit;
    }; // 0x1C0

    uint8_t RSVD1C4[60]; // 0x1C4 - 0x1FF

    /* PRU_ECC_AGGR_AGGR_ENABLE_SET REGISTER BIT FIELD */
    union
    {
        volatile uint32_t AGGR_ENABLE_SET;

        volatile struct
        {
            uint32_t PARITY :1; // 0
            uint32_t TIMEOUT :1; // 1
            uint32_t RSVD2 :30; // 31:2
        } AGGR_ENABLE_SET_bit;
    }; // 0x200

    /* PRU_ECC_AGGR_AGGR_ENABLE_CLR REGISTER BIT FIELD */
    union
    {
        volatile uint32_t AGGR_ENABLE_CLR;

        volatile struct
        {
            uint32_t PARITY :1; // 0
            uint32_t TIMEOUT :1; // 1
            uint32_t RSVD2 :30; // 31:2
        } AGGR_ENABLE_CLR_bit;
    }; // 0x204

    /* PRU_ECC_AGGR_AGGR_STATUS_SET REGISTER BIT FIELD */
    union
    {
        volatile uint32_t AGGR_STATUS_SET;

        volatile struct
        {
            uint32_t PARITY :2; // 1:0
            uint32_t TIMEOUT :2; // 3:2
            uint32_t RSVD4 :28; // 31:4
        } AGGR_STATUS_SET_bit;
    }; // 0x208

    /* PRU_ECC_AGGR_AGGR_STATUS_CLR REGISTER BIT FIELD */
    union
    {
        volatile uint32_t AGGR_STATUS_CLR;

        volatile struct
        {
            uint32_t PARITY :2; // 1:0
            uint32_t TIMEOUT :2; // 3:2
            uint32_t RSVD4 :28; // 31:4
        } AGGR_STATUS_CLR_bit;
    };
    // 0x20C
};

struct pru_tm
{

    /* PRU_TASKS_MGR_GLOBAL_CFG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t GLOBAL_CFG;

        volatile struct
        {
            uint32_t TASKS_MGR_MODE :2; // 1:0
            uint32_t TS1_EN_S0 :1; // 2
            uint32_t TS1_EN_S1 :1; // 3
            uint32_t TS1_EN_S2 :1; // 4
            uint32_t TS1_EN_S3 :1; // 5
            uint32_t TS1_EN_S4 :1; // 6
            uint32_t TS2_EN_S0 :1; // 7
            uint32_t TS2_EN_S1 :1; // 8
            uint32_t TS2_EN_S2 :1; // 9
            uint32_t TS2_EN_S3 :1; // 10
            uint32_t TS2_EN_S4 :1; // 11
            uint32_t RSVD12 :20; // 31:12
        } GLOBAL_CFG_bit;
    }; // 0x0

    /* PRU_TASKS_MGR_GLOBAL_STATUS REGISTER BIT FIELD */
    union
    {
        volatile uint32_t GLOBAL_STATUS;

        volatile struct
        {
            uint32_t TS1_STATE :4; // 3:0
            uint32_t TS2_STATE :4; // 7:4
            uint32_t TS1_SUB_PEND_0 :1; // 8
            uint32_t TS1_SUB_PEND_1 :1; // 9
            uint32_t TS1_SUB_PEND_2 :1; // 10
            uint32_t TS1_SUB_PEND_3 :1; // 11
            uint32_t TS1_SUB_PEND_4 :1; // 12
            uint32_t TS2_SUB_PEND_0 :1; // 13
            uint32_t TS2_SUB_PEND_1 :1; // 14
            uint32_t TS2_SUB_PEND_2 :1; // 15
            uint32_t TS2_SUB_PEND_3 :1; // 16
            uint32_t TS2_SUB_PEND_4 :1; // 17
            uint32_t RSVD18 :14; // 31:18
        } GLOBAL_STATUS_bit;
    }; // 0x4

    /* PRU_TASKS_MGR_TS1_PC_S0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t TS1_PC_S0;

        volatile struct
        {
            uint32_t TS1_PC_S0 :14; // 13:0
            uint32_t RSVD14 :18; // 31:14
        } TS1_PC_S0_bit;
    }; // 0x8

    /* PRU_TASKS_MGR_TS1_PC_S1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t TS1_PC_S1;

        volatile struct
        {
            uint32_t TS1_PC_S1 :14; // 13:0
            uint32_t RSVD14 :18; // 31:14
        } TS1_PC_S1_bit;
    }; // 0xC

    /* PRU_TASKS_MGR_TS1_PC_S2 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t TS1_PC_S2;

        volatile struct
        {
            uint32_t TS1_PC_S2 :14; // 13:0
            uint32_t RSVD14 :18; // 31:14
        } TS1_PC_S2_bit;
    }; // 0x10

    /* PRU_TASKS_MGR_TS1_PC_S3 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t TS1_PC_S3;

        volatile struct
        {
            uint32_t TS1_PC_S3 :14; // 13:0
            uint32_t RSVD14 :18; // 31:14
        } TS1_PC_S3_bit;
    }; // 0x14

    /* PRU_TASKS_MGR_TS1_PC_S4 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t TS1_PC_S4;

        volatile struct
        {
            uint32_t TS1_PC_S4 :14; // 13:0
            uint32_t RSVD14 :18; // 31:14
        } TS1_PC_S4_bit;
    }; // 0x18

    /* PRU_TASKS_MGR_TS2_PC_S0 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t TS2_PC_S0;

        volatile struct
        {
            uint32_t TS2_PC_S0 :14; // 13:0
            uint32_t RSVD14 :18; // 31:14
        } TS2_PC_S0_bit;
    }; // 0x1C

    /* PRU_TASKS_MGR_TS2_PC_S1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t TS2_PC_S1;

        volatile struct
        {
            uint32_t TS2_PC_S1 :14; // 13:0
            uint32_t RSVD14 :18; // 31:14
        } TS2_PC_S1_bit;
    }; // 0x20

    /* PRU_TASKS_MGR_TS2_PC_S2 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t TS2_PC_S2;

        volatile struct
        {
            uint32_t TS2_PC_S2 :14; // 13:0
            uint32_t RSVD14 :18; // 31:14
        } TS2_PC_S2_bit;
    }; // 0x24

    /* PRU_TASKS_MGR_TS2_PC_S3 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t TS2_PC_S3;

        volatile struct
        {
            uint32_t TS2_PC_S3 :14; // 13:0
            uint32_t RSVD14 :18; // 31:14
        } TS2_PC_S3_bit;
    }; // 0x28

    /* PRU_TASKS_MGR_TS2_PC_S4 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t TS2_PC_S4;

        volatile struct
        {
            uint32_t TS2_PC_S4 :14; // 13:0
            uint32_t RSVD14 :18; // 31:14
        } TS2_PC_S4_bit;
    }; // 0x2C

    /* PRU_TASKS_MGR_RX_CFG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t RX_CFG;

        volatile struct
        {
            uint32_t BK1_SIZE :5; // 4:0
            uint32_t BK2_SIZE :5; // 9:5
            uint32_t BKN_SIZE :5; // 14:10
            uint32_t RSVD15 :17; // 31:15
        } RX_CFG_bit;
    }; // 0x30

    /* PRU_TASKS_MGR_TX_CFG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t TX_CFG;

        volatile struct
        {
            uint32_t TX_WM :6; // 5:0
            uint32_t RSVD6 :26; // 31:6
        } TX_CFG_bit;
    }; // 0x34

    /* PRU_TASKS_MGR_TS1_GEN_CFG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t TS1_GEN_CFG1;

        volatile struct
        {
            uint32_t TS1_GEN_S0_MX :8; // 7:0
            uint32_t TS1_GEN_S1_MX :8; // 15:8
            uint32_t TS1_GEN_S2_MX :8; // 23:16
            uint32_t TS1_GEN_S3_MX :8; // 31:24
        } TS1_GEN_CFG1_bit;
    }; // 0x38

    /* PRU_TASKS_MGR_TS1_GEN_CFG2 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t TS1_GEN_CFG2;

        volatile struct
        {
            uint32_t TS1_GEN_S4_MX :8; // 7:0
            uint32_t RSVD8 :24; // 31:8
        } TS1_GEN_CFG2_bit;
    }; // 0x3C

    /* PRU_TASKS_MGR_TS2_GEN_CFG1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t TS2_GEN_CFG1;

        volatile struct
        {
            uint32_t TS2_GEN_S0_MX :8; // 7:0
            uint32_t TS2_GEN_S1_MX :8; // 15:8
            uint32_t TS2_GEN_S2_MX :8; // 23:16
            uint32_t TS2_GEN_S3_MX :8; // 31:24
        } TS2_GEN_CFG1_bit;
    }; // 0x40

    /* PRU_TASKS_MGR_TS2_GEN_CFG2 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t TS2_GEN_CFG2;

        volatile struct
        {
            uint32_t TS2_GEN_S4_MX :8; // 7:0
            uint32_t RSVD8 :24; // 31:8
        } TS2_GEN_CFG2_bit;
    }; // 0x44

    /* PRU_TASKS_MGR_CAP_EN_CFG REGISTER BIT FIELD */
    union
    {
        volatile uint32_t CAP_EN_CFG;

        volatile struct
        {
            uint32_t NEW_CAP_EN :10; // 9:0
            uint32_t RSVD10 :22; // 31:10
        } CAP_EN_CFG_bit;
    };
    // 0x48
};

struct pru_uart
{
    /*
     * PRU_UART_RBR_TBR REGISTER BIT FIELD
     * RBR AND TBR / THR REGISTER PAIR
     *
     * THIS IS A UNIQUE REGISTER PAIR IN THAT RBR AND THR
     * SHARE THE SAME ADDRESS. RBR IS READ-ONLY WHILE THR IS
     * WRITE-ONLY.
     *
     * ADDITIONALLY, RBR AND THR SHARE AN ADDRESS WITH DLL. TO
     * READ/WRITE RBR/THR WRITE 0 TO THE DLAB BIT IN THE LCR
     * REGISTER. TO MODIFY DLL WRITE A 1.
     *
     * DLL ALSO HAS A DEDICATED
     * ADDRESS WHICH DOES NOT REQUIRE TOGGLING THE DLAB BIT.
     */
    union
    {
        /* PRU_UART_RBR REGISTER BIT FIELD */
        union
        {
            volatile uint32_t RBR;

            volatile struct
            {
                uint32_t DATA :8;              // 7:0
                uint32_t RSVD8 :24;            // 31:8
            } RBR_bit;
        };

        /* PRU_UART_THR REGISTER BIT FIELD */
        union
        {
            volatile uint32_t THR;

            volatile struct
            {
                uint32_t DATA :8;              // 7:0
                uint32_t RSVD8 :24;            // 31:8
            } THR_bit;
        };
    };      // 0x0

    /* PRU_UART_INT_EN REGISTER BIT FIELD */
    union
    {
        volatile uint32_t INT_EN;

        volatile struct
        {
            uint32_t ERBI :1; // 0
            uint32_t ETBEI :1; // 1
            uint32_t ELSI :1; // 2
            uint32_t EDSSI :1; // 3
            uint32_t RSVD4 :28; // 31:4
        } INT_EN_bit;
    }; // 0x4

    /*
     * IIR AND FCR REGISTER PAIR
     * THIS IS A UNIQUE REGISTER PAIR IN THAT IIR AND FCR
     * SHARE THE SAME ADDRESS. IIR IS READ-ONLY WHILE FCR IS
     * WRITE-ONLY.
     */
    union
    {
        /* PRU_UART_IIR REGISTER BIT FIELD */
        union
        {
            volatile uint32_t IIR;

            volatile struct
            {
                uint32_t IPEND :1;             // 0
                uint32_t INTID :3;             // 3:1
                uint32_t RSVD4 :2;             // 5:4
                uint32_t FIFOEN :2;            // 7:6
                uint32_t RSVD8 :24;            // 31:8
            } IIR_bit;
        };

        /* PRU_UART_FCR REGISTER BIT FIELD */
        union
        {
            volatile uint32_t FCR;

            volatile struct
            {
                uint32_t FIFOEN :1;            // 0
                uint32_t RXCLR :1;             // 1
                uint32_t TXCLR :1;             // 2
                uint32_t DMAMODE1 :1;          // 3
                uint32_t RSVD4 :2;             // 5:4
                uint32_t RXFIFTL :2;           // 7:6
                uint32_t RSVD8 :24;            // 31:8
            } FCR_bit;
        };
    };      // 0x8

    /* PRU_UART_LCTR REGISTER BIT FIELD */
    union
    {
        volatile uint32_t LCTR;

        volatile struct
        {
            uint32_t WLS0 :1; // 0
            uint32_t WLS1 :1; // 1
            uint32_t STB :1; // 2
            uint32_t PEN :1; // 3
            uint32_t EPS :1; // 4
            uint32_t SP :1; // 5
            uint32_t BC :1; // 6
            uint32_t DLAB :1; // 7
            uint32_t RSVD8 :24; // 31:8
        } LCTR_bit;
    }; // 0xC

    /* PRU_UART_MCTR REGISTER BIT FIELD */
    union
    {
        volatile uint32_t MCTR;

        volatile struct
        {
            uint32_t DTR :1; // 0
            uint32_t RTS :1; // 1
            uint32_t OUT1 :1; // 2
            uint32_t OUT2 :1; // 3
            uint32_t LOOP :1; // 4
            uint32_t AFE :1; // 5
            uint32_t RSVD6 :26; // 31:6
        } MCTR_bit;
    }; // 0x10

    /* PRU_UART_LSR1 REGISTER BIT FIELD */
    union
    {
        volatile uint32_t LSR1;

        volatile struct
        {
            uint32_t DR :1; // 0
            uint32_t OE :1; // 1
            uint32_t PE :1; // 2
            uint32_t FE :1; // 3
            uint32_t BI :1; // 4
            uint32_t THRE :1; // 5
            uint32_t TEMT :1; // 6
            uint32_t RXFIFOE :1; // 7
            uint32_t RSVD8 :24; // 31:8
        } LSR1_bit;
    }; // 0x14

    /* PRU_UART_MSR REGISTER BIT FIELD */
    union
    {
        volatile uint32_t MSR;

        volatile struct
        {
            uint32_t DCTS :1; // 0
            uint32_t DDSR :1; // 1
            uint32_t TERI :1; // 2
            uint32_t DCD :1; // 3
            uint32_t CTS :1; // 4
            uint32_t DSR :1; // 5
            uint32_t RI :1; // 6
            uint32_t CD :1; // 7
            uint32_t RSVD8 :24; // 31:8
        } MSR_bit;
    }; // 0x18

    /* PRU_UART_SCRATCH REGISTER BIT FIELD */
    union
    {
        volatile uint32_t SCRATCH;

        volatile struct
        {
            uint32_t DATA :8; // 7:0
            uint32_t RSVD8 :24; // 31:8
        } SCRATCH_bit;
    }; // 0x1C

    /* PRU_UART_DIVLSB REGISTER BIT FIELD */
    union
    {
        volatile uint32_t DIVLSB;

        volatile struct
        {
            uint32_t DLL :8; // 7:0
            uint32_t RSVD8 :24; // 31:8
        } DIVLSB_bit;
    }; // 0x20

    /* PRU_UART_DIVMSB REGISTER BIT FIELD */
    union
    {
        volatile uint32_t DIVMSB;

        volatile struct
        {
            uint32_t DLH :8; // 7:0
            uint32_t RSVD8 :24; // 31:8
        } DIVMSB_bit;
    }; // 0x24

    /* PRU_UART_PID REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PID;

        volatile struct
        {
            uint32_t PID :32; // 31:0
        } PID_bit;
    }; // 0x28

    uint8_t RSVD2C[4]; // 0x2C - 0x2F

    /* PRU_UART_PWR REGISTER BIT FIELD */
    union
    {
        volatile uint32_t PWR;

        volatile struct
        {
            uint32_t FREE :1; // 0
            uint32_t RES :1; // 1
            uint32_t RSVD2 :11; // 12:2
            uint32_t URRST :1; // 13
            uint32_t UTRST :1; // 14
            uint32_t URST :1; // 15
            uint32_t RSVD16 :16; // 31:16
        } PWR_bit;
    }; // 0x30

    /* PRU_UART_MODE REGISTER BIT FIELD */
    union
    {
        volatile uint32_t MODE;

        volatile struct
        {
            uint32_t OSM_SEL :1; // 0
            uint32_t RSVD1 :31; // 31:1
        } MODE_bit;
    };
    // 0x34
};



#define PRU_INTC ((volatile struct pru_intc*) 0x00020000U)
#define PRU_CTRL ((volatile struct pru_ctrl*) 0x00022000U)
#define PRU_CFG  ((volatile struct pru_cfg*)  0x00026000U)
#define PRU_TM   ((volatile struct pru_tm*)   0x0002A000U)
#define PRU_IEP0 ((volatile struct pru_iep*)  0x0002E000U)
#define PRU_IEP1 ((volatile struct pru_iep*)  0x0002F000U)
#define PRU_ECAP ((volatile struct pru_ecap*) 0x00030000U)
#define PRU_UART ((volatile struct pru_uart*) 0x00028000U)

#endif /* H0ED7EF92_7C94_4491_8307_5267FE19B99C */
