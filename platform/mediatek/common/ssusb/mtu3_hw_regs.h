/*
 * Copyright (c) 2019 MediaTek Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files
 * (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#pragma once

#include <platform/addressmap.h>

/* segment offset of MAC register */
#define SSUSB_DEV_BASE              (USB3_BASE + 0x1000)
#define SSUSB_EPCTL_CSR_BASE        (USB3_BASE + 0x1800)
#define SSUSB_USB3_MAC_CSR_BASE     (USB3_BASE + 0x2400)
#define SSUSB_USB3_SYS_CSR_BASE     (USB3_BASE + 0x2400)
#define SSUSB_USB2_CSR_BASE         (USB3_BASE + 0x3400)

/* IPPC register in Infra */
#define SSUSB_SIFSLV_IPPC_BASE      (USB3_IPPC_BASE)

#define BITS_PER_LONG 32
#ifndef BIT
#define BIT(bit) (1UL << (bit))
#endif
#ifndef GENMASK
#define GENMASK(h, l) \
    ((u32)(((~0UL) << (l)) & (~0UL >> (BITS_PER_LONG - 1 - (h)))))
#endif

/* SSUSB_DEV REGISTER DEFINITION */
#define U3D_LV1ISR      (SSUSB_DEV_BASE + 0x0000)
#define U3D_LV1IER      (SSUSB_DEV_BASE + 0x0004)
#define U3D_LV1IESR     (SSUSB_DEV_BASE + 0x0008)
#define U3D_LV1IECR     (SSUSB_DEV_BASE + 0x000C)

#define U3D_EPISR       (SSUSB_DEV_BASE + 0x0080)
#define U3D_EPIER       (SSUSB_DEV_BASE + 0x0084)
#define U3D_EPIESR      (SSUSB_DEV_BASE + 0x0088)
#define U3D_EPIECR      (SSUSB_DEV_BASE + 0x008C)

#define U3D_EP0CSR      (SSUSB_DEV_BASE + 0x0100)
#define U3D_RXCOUNT0    (SSUSB_DEV_BASE + 0x0108)
#define U3D_RESERVED    (SSUSB_DEV_BASE + 0x010C)
#define U3D_TX1CSR0     (SSUSB_DEV_BASE + 0x0110)
#define U3D_TX1CSR1     (SSUSB_DEV_BASE + 0x0114)
#define U3D_TX1CSR2     (SSUSB_DEV_BASE + 0x0118)

#define U3D_RX1CSR0     (SSUSB_DEV_BASE + 0x0210)
#define U3D_RX1CSR1     (SSUSB_DEV_BASE + 0x0214)
#define U3D_RX1CSR2     (SSUSB_DEV_BASE + 0x0218)
#define U3D_RX1CSR3     (SSUSB_DEV_BASE + 0x021C)

#define U3D_FIFO0       (SSUSB_DEV_BASE + 0x0300)

#define U3D_QCR0        (SSUSB_DEV_BASE + 0x0400)
#define U3D_QCR1        (SSUSB_DEV_BASE + 0x0404)
#define U3D_QCR2        (SSUSB_DEV_BASE + 0x0408)
#define U3D_QCR3        (SSUSB_DEV_BASE + 0x040C)

#define U3D_TXQCSR1     (SSUSB_DEV_BASE + 0x0510)
#define U3D_TXQSAR1     (SSUSB_DEV_BASE + 0x0514)
#define U3D_TXQCPR1     (SSUSB_DEV_BASE + 0x0518)

#define U3D_RXQCSR1     (SSUSB_DEV_BASE + 0x0610)
#define U3D_RXQSAR1     (SSUSB_DEV_BASE + 0x0614)
#define U3D_RXQCPR1     (SSUSB_DEV_BASE + 0x0618)
#define U3D_RXQLDPR1    (SSUSB_DEV_BASE + 0x061C)

#define U3D_QISAR0      (SSUSB_DEV_BASE + 0x0700)
#define U3D_QIER0       (SSUSB_DEV_BASE + 0x0704)
#define U3D_QIESR0      (SSUSB_DEV_BASE + 0x0708)
#define U3D_QIECR0      (SSUSB_DEV_BASE + 0x070C)
#define U3D_QISAR1      (SSUSB_DEV_BASE + 0x0710)
#define U3D_QIER1       (SSUSB_DEV_BASE + 0x0714)
#define U3D_QIESR1      (SSUSB_DEV_BASE + 0x0718)
#define U3D_QIECR1      (SSUSB_DEV_BASE + 0x071C)

#define U3D_TQERRIR0        (SSUSB_DEV_BASE + 0x0780)
#define U3D_TQERRIER0       (SSUSB_DEV_BASE + 0x0784)
#define U3D_TQERRIESR0      (SSUSB_DEV_BASE + 0x0788)
#define U3D_TQERRIECR0      (SSUSB_DEV_BASE + 0x078C)
#define U3D_RQERRIR0        (SSUSB_DEV_BASE + 0x07C0)
#define U3D_RQERRIER0       (SSUSB_DEV_BASE + 0x07C4)
#define U3D_RQERRIESR0      (SSUSB_DEV_BASE + 0x07C8)
#define U3D_RQERRIECR0      (SSUSB_DEV_BASE + 0x07CC)
#define U3D_RQERRIR1        (SSUSB_DEV_BASE + 0x07D0)
#define U3D_RQERRIER1       (SSUSB_DEV_BASE + 0x07D4)
#define U3D_RQERRIESR1      (SSUSB_DEV_BASE + 0x07D8)
#define U3D_RQERRIECR1      (SSUSB_DEV_BASE + 0x07DC)

#define U3D_CAP_EP0FFSZ     (SSUSB_DEV_BASE + 0x0C04)
#define U3D_CAP_EPNTXFFSZ   (SSUSB_DEV_BASE + 0x0C08)
#define U3D_CAP_EPNRXFFSZ   (SSUSB_DEV_BASE + 0x0C0C)
#define U3D_CAP_EPINFO      (SSUSB_DEV_BASE + 0x0C10)
#define U3D_MISC_CTRL       (SSUSB_DEV_BASE + 0x0C84)

/* SSUSB_DEV FIELD DEFINITION */
/* U3D_LV1ISR */
#define EP_CTRL_INTR    BIT(5)
#define MAC2_INTR       BIT(4)
#define DMA_INTR        BIT(3)
#define MAC3_INTR       BIT(2)
#define QMU_INTR        BIT(1)
#define BMU_INTR        BIT(0)

/* U3D_LV1IECR */
#define LV1IECR_MSK     GENMASK(31, 0)

/* U3D_EPISR */
#define EP_RXISR(x)     (BIT(16) << (x))
#define EP_TXISR(x)     (BIT(0) << (x))
#define EP_EP0ISR       BIT(0)

/* U3D_EP0CSR */
#define EP0_AUTOCLEAR   BIT(30)
#define EP0_AUTOSET     BIT(29)
#define EP0_DMAREQEN    BIT(28)
#define EP0_SENDSTALL   BIT(25)
#define EP0_FIFOFULL    BIT(23)
#define EP0_SENTSTALL   BIT(22)
#define EP0_DPHTX       BIT(20)
#define EP0_DATAEND     BIT(19)
#define EP0_TXPKTRDY        BIT(18)
#define EP0_SETUPPKTRDY     BIT(17)
#define EP0_RXPKTRDY        BIT(16)
#define EP0_MAXPKTSZ_MSK    GENMASK(9, 0)
#define EP0_MAXPKTSZ(x)     ((x) & EP0_MAXPKTSZ_MSK)
#define EP0_W1C_BITS    (~(EP0_RXPKTRDY | EP0_SETUPPKTRDY | EP0_SENTSTALL))

/* U3D_TX1CSR0 */
#define TX_AUTOSET      BIT(30)
#define TX_DMAREQEN     BIT(29)
#define TX_FIFOFULL     BIT(25)
#define TX_FIFOEMPTY    BIT(24)
#define TX_SENTSTALL    BIT(22)
#define TX_SENDSTALL    BIT(21)
#define TX_TXPKTRDY     BIT(16)
#define TX_TXMAXPKTSZ_MSK   GENMASK(10, 0)
#define TX_TXMAXPKTSZ(x)    ((x) & TX_TXMAXPKTSZ_MSK)
#define TX_W1C_BITS     (~(TX_SENTSTALL))

/* U3D_TX1CSR1 */
#define TX_MULT(x)      (((x) & 0x3) << 22)
#define TX_MAX_PKT(x)   (((x) & 0x3f) << 16)
#define TX_SLOT(x)      (((x) & 0x3f) << 8)
#define TX_TYPE(x)      (((x) & 0x3) << 4)
#define TX_SS_BURST(x)      (((x) & 0xf) << 0)

/* for TX_TYPE & RX_TYPE */
#define TYPE_BULK       (0x0)
#define TYPE_INT        (0x1)
#define TYPE_ISO        (0x2)
#define TYPE_MSK        (0x3)

/* U3D_TX1CSR2 */
#define TX_BINTERVAL(x)     (((x) & 0xff) << 24)
#define TX_FIFOSEGSIZE(x)   (((x) & 0xf) << 16)
#define TX_FIFOADDR(x)      (((x) & 0x1fff) << 0)

/* U3D_RX1CSR0 */
#define RX_AUTOCLEAR    BIT(30)
#define RX_DMAREQEN     BIT(29)
#define RX_SENTSTALL    BIT(22)
#define RX_SENDSTALL    BIT(21)
#define RX_RXPKTRDY     BIT(16)
#define RX_RXMAXPKTSZ_MSK   GENMASK(10, 0)
#define RX_RXMAXPKTSZ(x)    ((x) & RX_RXMAXPKTSZ_MSK)
#define RX_W1C_BITS     (~(RX_SENTSTALL | RX_RXPKTRDY))

/* U3D_RX1CSR1 */
#define RX_MULT(x)      (((x) & 0x3) << 22)
#define RX_MAX_PKT(x)   (((x) & 0x3f) << 16)
#define RX_SLOT(x)      (((x) & 0x3f) << 8)
#define RX_TYPE(x)      (((x) & 0x3) << 4)
#define RX_SS_BURST(x)  (((x) & 0xf) << 0)

/* U3D_RX1CSR2 */
#define RX_BINTERVAL(x)     (((x) & 0xff) << 24)
#define RX_FIFOSEGSIZE(x)   (((x) & 0xf) << 16)
#define RX_FIFOADDR(x)      (((x) & 0x1fff) << 0)

/* U3D_RX1CSR3 */
#define EP_RX_COUNT(x)      (((x) >> 16) & 0x7ff)

/* U3D_FIFO: ep(0-15)*/
#define U3D_FIFO(x)         (U3D_FIFO0 + ((x) * 0x10))
#define USB_FIFO(x)         (U3D_FIFO(x))

/* U3D_QCR0 */
#define QMU_RX_CS_EN(x)     (BIT(16) << (x))
#define QMU_TX_CS_EN(x)     (BIT(0) << (x))
#define QMU_CS16B_EN        BIT(0)

/* U3D_QCR1 */
#define QMU_TX_ZLP(x)       (BIT(0) << (x))

/* U3D_QCR3 */
#define QMU_RX_COZ(x)       (BIT(16) << (x))
#define QMU_RX_ZLP(x)       (BIT(0) << (x))

/* U3D_TXQCSR1 */
/* U3D_RXQCSR1 */
#define QMU_Q_ACTIVE    BIT(15)
#define QMU_Q_STOP      BIT(2)
#define QMU_Q_RESUME    BIT(1)
#define QMU_Q_START     BIT(0)

/* U3D_QISAR0, U3D_QIER0, U3D_QIESR0, U3D_QIECR0 */
#define QMU_RX_DONE_INT(x)  (BIT(16) << (x))
#define QMU_TX_DONE_INT(x)  (BIT(0) << (x))

/* U3D_QISAR1, U3D_QIER1, U3D_QIESR1, U3D_QIECR1 */
#define RXQ_ZLPERR_INT      BIT(20)
#define RXQ_LENERR_INT      BIT(18)
#define RXQ_CSERR_INT       BIT(17)
#define RXQ_EMPTY_INT       BIT(16)
#define TXQ_LENERR_INT      BIT(2)
#define TXQ_CSERR_INT       BIT(1)
#define TXQ_EMPTY_INT       BIT(0)

/* U3D_TQERRIR0, U3D_TQERRIER0, U3D_TQERRIESR0, U3D_TQERRIECR0 */
#define QMU_TX_LEN_ERR(x)   (BIT(16) << (x))
#define QMU_TX_CS_ERR(x)    (BIT(0) << (x))

/* U3D_RQERRIR0, U3D_RQERRIER0, U3D_RQERRIESR0, U3D_RQERRIECR0 */
#define QMU_RX_LEN_ERR(x)   (BIT(16) << (x))
#define QMU_RX_CS_ERR(x)    (BIT(0) << (x))

/* U3D_RQERRIR1, U3D_RQERRIER1, U3D_RQERRIESR1, U3D_RQERRIECR1 */
#define QMU_RX_ZLP_ERR(n)   (BIT(16) << (n))

/* U3D_CAP_EPINFO */
#define CAP_RX_EP_NUM(x)    (((x) >> 8) & 0x1f)
#define CAP_TX_EP_NUM(x)    ((x) & 0x1f)

/* U3D_MISC_CTRL */
#define VBUS_ON         BIT(1)
#define VBUS_FRC_EN     BIT(0)


/* SSUSB_EPCTL_CSR REGISTER DEFINITION */
#define U3D_DEVICE_CONF     (SSUSB_EPCTL_CSR_BASE + 0x0000)
#define U3D_EP_RST          (SSUSB_EPCTL_CSR_BASE + 0x0004)

#define U3D_DEV_LINK_INTR_ENABLE    (SSUSB_EPCTL_CSR_BASE + 0x0050)
#define U3D_DEV_LINK_INTR       (SSUSB_EPCTL_CSR_BASE + 0x0054)

/* SSUSB_EPCTL_CSR FIELD DEFINITION */
/* U3D_DEVICE_CONF */
#define DEV_ADDR_MSK    GENMASK(30, 24)
#define DEV_ADDR(x)     ((0x7f & (x)) << 24)
#define HW_USB2_3_SEL       BIT(18)
#define SW_USB2_3_SEL_EN    BIT(17)
#define SW_USB2_3_SEL       BIT(16)
#define SSUSB_DEV_SPEED(x)  ((x) & 0x7)

/* U3D_EP_RST */
#define EP1_IN_RST      BIT(17)
#define EP1_OUT_RST     BIT(1)
#define EP_RST(is_in, epnum)    (((is_in) ? BIT(16) : BIT(0)) << (epnum))
#define EP0_RST         BIT(0)

/* U3D_DEV_LINK_INTR_ENABLE */
/* U3D_DEV_LINK_INTR */
#define SSUSB_DEV_SPEED_CHG_INTR    BIT(0)


/* SSUSB_USB3_MAC_CSR REGISTER DEFINITION */
#define U3D_LTSSM_CTRL      (SSUSB_USB3_MAC_CSR_BASE + 0x0010)
#define U3D_USB3_CONFIG     (SSUSB_USB3_MAC_CSR_BASE + 0x001C)

#define U3D_LTSSM_INTR_ENABLE   (SSUSB_USB3_MAC_CSR_BASE + 0x013C)
#define U3D_LTSSM_INTR      (SSUSB_USB3_MAC_CSR_BASE + 0x0140)

/* SSUSB_USB3_MAC_CSR FIELD DEFINITION */
/* U3D_LTSSM_CTRL */
#define FORCE_POLLING_FAIL  BIT(4)
#define FORCE_RXDETECT_FAIL BIT(3)
#define SOFT_U3_EXIT_EN     BIT(2)
#define COMPLIANCE_EN       BIT(1)
#define U1_GO_U2_EN     BIT(0)

/* U3D_USB3_CONFIG */
#define USB3_EN         BIT(0)

/* U3D_LTSSM_INTR_ENABLE */
/* U3D_LTSSM_INTR */
#define U3_RESUME_INTR      BIT(18)
#define U3_LFPS_TMOUT_INTR  BIT(17)
#define VBUS_FALL_INTR      BIT(16)
#define VBUS_RISE_INTR      BIT(15)
#define RXDET_SUCCESS_INTR  BIT(14)
#define EXIT_U3_INTR        BIT(13)
#define EXIT_U2_INTR        BIT(12)
#define EXIT_U1_INTR        BIT(11)
#define ENTER_U3_INTR       BIT(10)
#define ENTER_U2_INTR       BIT(9)
#define ENTER_U1_INTR       BIT(8)
#define ENTER_U0_INTR       BIT(7)
#define RECOVERY_INTR       BIT(6)
#define WARM_RST_INTR       BIT(5)
#define HOT_RST_INTR        BIT(4)
#define LOOPBACK_INTR       BIT(3)
#define COMPLIANCE_INTR     BIT(2)
#define SS_DISABLE_INTR     BIT(1)
#define SS_INACTIVE_INTR    BIT(0)

/* SSUSB_USB3_SYS_CSR REGISTER DEFINITION */
#define U3D_LINK_UX_INACT_TIMER (SSUSB_USB3_SYS_CSR_BASE + 0x020C)
#define U3D_LINK_POWER_CONTROL  (SSUSB_USB3_SYS_CSR_BASE + 0x0210)
#define U3D_LINK_ERR_COUNT      (SSUSB_USB3_SYS_CSR_BASE + 0x0214)

/* SSUSB_USB3_SYS_CSR FIELD DEFINITION */
/* U3D_LINK_UX_INACT_TIMER */
#define DEV_U2_INACT_TIMEOUT_MSK    GENMASK(23, 16)
#define DEV_U2_INACT_TIMEOUT_VALUE(x)   (((x) & 0xff) << 16)
#define U2_INACT_TIMEOUT_MSK        GENMASK(15, 8)
#define U1_INACT_TIMEOUT_MSK        GENMASK(7, 0)
#define U1_INACT_TIMEOUT_VALUE(x)   ((x) & 0xff)

/* U3D_LINK_POWER_CONTROL */
#define SW_U2_ACCEPT_ENABLE     BIT(9)
#define SW_U1_ACCEPT_ENABLE     BIT(8)
#define UX_EXIT         BIT(5)
#define LGO_U3          BIT(4)
#define LGO_U2          BIT(3)
#define LGO_U1          BIT(2)
#define SW_U2_REQUEST_ENABLE    BIT(1)
#define SW_U1_REQUEST_ENABLE    BIT(0)

/* U3D_LINK_ERR_COUNT */
#define CLR_LINK_ERR_CNT    BIT(16)
#define LINK_ERROR_COUNT    GENMASK(15, 0)

/* SSUSB_USB2_CSR REGISTER DEFINITION */
#define U3D_POWER_MANAGEMENT        (SSUSB_USB2_CSR_BASE + 0x0004)
#define U3D_DEVICE_CONTROL          (SSUSB_USB2_CSR_BASE + 0x000C)
#define U3D_USB2_TEST_MODE          (SSUSB_USB2_CSR_BASE + 0x0014)
#define U3D_COMMON_USB_INTR_ENABLE  (SSUSB_USB2_CSR_BASE + 0x0018)
#define U3D_COMMON_USB_INTR         (SSUSB_USB2_CSR_BASE + 0x001C)
#define U3D_LINK_RESET_INFO         (SSUSB_USB2_CSR_BASE + 0x0024)
#define U3D_USB20_FRAME_NUM         (SSUSB_USB2_CSR_BASE + 0x003C)
#define U3D_USB20_LPM_PARAMETER     (SSUSB_USB2_CSR_BASE + 0x0044)
#define U3D_USB20_MISC_CONTROL      (SSUSB_USB2_CSR_BASE + 0x004C)

/* SSUSB_USB2_CSR FIELD DEFINITION */
/* U3D_POWER_MANAGEMENT */
#define LPM_BESL_STALL      BIT(14)
#define LPM_BESLD_STALL     BIT(13)
#define LPM_RWP         BIT(11)
#define LPM_HRWE        BIT(10)
#define LPM_MODE(x)     (((x) & 0x3) << 8)
#define ISO_UPDATE      BIT(7)
#define SOFT_CONN       BIT(6)
#define HS_ENABLE       BIT(5)
#define RESUME          BIT(2)
#define SUSPENDM_ENABLE     BIT(0)

/* U3D_DEVICE_CONTROL */
#define DC_HOSTREQ      BIT(1)
#define DC_SESSION      BIT(0)

/* U3D_USB2_TEST_MODE */
#define U2U3_AUTO_SWITCH    BIT(10)
#define LPM_FORCE_STALL     BIT(8)
#define FIFO_ACCESS         BIT(6)
#define FORCE_FS            BIT(5)
#define FORCE_HS            BIT(4)
#define TEST_PACKET_MODE    BIT(3)
#define TEST_K_MODE         BIT(2)
#define TEST_J_MODE         BIT(1)
#define TEST_SE0_NAK_MODE   BIT(0)

/* U3D_COMMON_USB_INTR_ENABLE */
/* U3D_COMMON_USB_INTR */
#define LPM_RESUME_INTR BIT(9)
#define LPM_INTR        BIT(8)
#define DISCONN_INTR    BIT(5)
#define CONN_INTR       BIT(4)
#define SOF_INTR        BIT(3)
#define RESET_INTR      BIT(2)
#define RESUME_INTR     BIT(1)
#define SUSPEND_INTR    BIT(0)

/* U3D_LINK_RESET_INFO */
#define WTCHRP_MSK      GENMASK(19, 16)

/* U3D_USB20_LPM_PARAMETER */
#define LPM_BESLCK_U3(x)    (((x) & 0xf) << 12)
#define LPM_BESLCK(x)       (((x) & 0xf) << 8)
#define LPM_BESLDCK(x)      (((x) & 0xf) << 4)
#define LPM_BESL            GENMASK(3, 0)

/* U3D_USB20_MISC_CONTROL */
#define LPM_U3_ACK_EN       BIT(0)

/* SSUSB_SIFSLV_IPPC REGISTER DEFINITION */
#define U3D_SSUSB_IP_PW_CTRL0   (SSUSB_SIFSLV_IPPC_BASE + 0x0000)
#define U3D_SSUSB_IP_PW_CTRL1   (SSUSB_SIFSLV_IPPC_BASE + 0x0004)
#define U3D_SSUSB_IP_PW_CTRL2   (SSUSB_SIFSLV_IPPC_BASE + 0x0008)
#define U3D_SSUSB_IP_PW_CTRL3   (SSUSB_SIFSLV_IPPC_BASE + 0x000C)
#define U3D_SSUSB_IP_PW_STS1    (SSUSB_SIFSLV_IPPC_BASE + 0x0010)
#define U3D_SSUSB_IP_PW_STS2    (SSUSB_SIFSLV_IPPC_BASE + 0x0014)
#define U3D_SSUSB_OTG_STS       (SSUSB_SIFSLV_IPPC_BASE + 0x0018)
#define U3D_SSUSB_OTG_STS_CLR   (SSUSB_SIFSLV_IPPC_BASE + 0x001C)
#define U3D_SSUSB_IP_XHCI_CAP   (SSUSB_SIFSLV_IPPC_BASE + 0x0024)
#define U3D_SSUSB_IP_DEV_CAP    (SSUSB_SIFSLV_IPPC_BASE + 0x0028)
#define U3D_SSUSB_OTG_INT_EN    (SSUSB_SIFSLV_IPPC_BASE + 0x002C)
#define U3D_SSUSB_U3_CTRL_0P    (SSUSB_SIFSLV_IPPC_BASE + 0x0030)
#define U3D_SSUSB_U2_CTRL_0P    (SSUSB_SIFSLV_IPPC_BASE + 0x0050)
#define U3D_SSUSB_REF_CK_CTRL   (SSUSB_SIFSLV_IPPC_BASE + 0x008C)
#define U3D_SSUSB_DEV_RST_CTRL  (SSUSB_SIFSLV_IPPC_BASE + 0x0098)
#define U3D_SSUSB_HW_ID         (SSUSB_SIFSLV_IPPC_BASE + 0x00A0)
#define U3D_SSUSB_HW_SUB_ID     (SSUSB_SIFSLV_IPPC_BASE + 0x00A4)
#define U3D_SSUSB_IP_SPARE0     (SSUSB_SIFSLV_IPPC_BASE + 0x00C8)
#define U3D_SSUSB_FPGA_I2C_OUT_0P       (SSUSB_SIFSLV_IPPC_BASE+0x00A8)
#define U3D_SSUSB_FPGA_I2C_IN_0P        (SSUSB_SIFSLV_IPPC_BASE+0x00AC)

/* SSUSB_SIFSLV_IPPC FIELD DEFINITION */
/* U3D_SSUSB_IP_PW_CTRL0 */
#define SSUSB_IP_SW_RST         BIT(0)

/* U3D_SSUSB_IP_PW_CTRL1 */
#define SSUSB_IP_HOST_PDN       BIT(0)

/* U3D_SSUSB_IP_PW_CTRL2 */
#define SSUSB_IP_DEV_PDN        BIT(0)

/* U3D_SSUSB_IP_PW_CTRL3 */
#define SSUSB_IP_PCIE_PDN       BIT(0)

/* U3D_SSUSB_IP_PW_STS1 */
#define SSUSB_IP_SLEEP_STS      BIT(30)
#define SSUSB_U3_MAC_RST_B_STS  BIT(16)
#define SSUSB_XHCI_RST_B_STS    BIT(11)
#define SSUSB_SYS125_RST_B_STS  BIT(10)
#define SSUSB_REF_RST_B_STS     BIT(8)
#define SSUSB_SYSPLL_STABLE     BIT(0)

/* U3D_SSUSB_IP_PW_STS2 */
#define SSUSB_U2_MAC_SYS_RST_B_STS  BIT(0)

/* U3D_SSUSB_OTG_STS */
#define SSUSB_VBUS_VALID        BIT(9)

/* U3D_SSUSB_OTG_STS_CLR */
#define SSUSB_VBUS_INTR_CLR     BIT(6)

/* U3D_SSUSB_IP_XHCI_CAP */
#define SSUSB_IP_XHCI_U2_PORT_NUM(x)    (((x) >> 8) & 0xff)
#define SSUSB_IP_XHCI_U3_PORT_NUM(x)    ((x) & 0xff)

/* U3D_SSUSB_IP_DEV_CAP */
#define SSUSB_IP_DEV_U3_PORT_NUM(x) ((x) & 0xff)

/* U3D_SSUSB_OTG_INT_EN */
#define SSUSB_VBUS_CHG_INT_A_EN     BIT(7)
#define SSUSB_VBUS_CHG_INT_B_EN     BIT(6)

/* U3D_SSUSB_U3_CTRL_0P */
#define SSUSB_U3_PORT_SSP_SPEED BIT(9)
#define SSUSB_U3_PORT_HOST_SEL  BIT(2)
#define SSUSB_U3_PORT_PDN       BIT(1)
#define SSUSB_U3_PORT_DIS       BIT(0)

/* U3D_SSUSB_U2_CTRL_0P */
#define SSUSB_U2_PORT_OTG_SEL   BIT(7)
#define SSUSB_U2_PORT_HOST_SEL  BIT(2)
#define SSUSB_U2_PORT_PDN       BIT(1)
#define SSUSB_U2_PORT_DIS       BIT(0)

/* U3D_SSUSB_DEV_RST_CTRL */
#define SSUSB_DEV_SW_RST        BIT(0)