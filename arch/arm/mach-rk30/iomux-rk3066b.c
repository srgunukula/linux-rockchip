static struct mux_config rk30_muxs[] = {
/*
 *	 description				mux  mode   mux	  mux  
 *						reg  offset inter mode
 */

//GPIO0C
MUX_CFG(GPIO0C7_FLASHDATA15_NAME, 			GPIO0C,   14,	 1,   0,	DEFAULT)
MUX_CFG(GPIO0C6_FLASHDATA14_NAME, 			GPIO0C,   12,	 1,   0,	DEFAULT)
MUX_CFG(GPIO0C5_FLASHDATA13_NAME,			GPIO0C,   10,	 1,   0,	DEFAULT)
MUX_CFG(GPIO0C4_FLASHDATA12_NAME,			GPIO0C,   8,	 1,   0,	DEFAULT)
MUX_CFG(GPIO0C3_FLASHDATA11_NAME, 			GPIO0C,   6,	 1,   0,	DEFAULT)
MUX_CFG(GPIO0C2_FLASHDATA10_NAME,			GPIO0C,   4,	 1,   0,	DEFAULT)
MUX_CFG(GPIO0C1_FLASHDATA9_NAME,			GPIO0C,   2,	 1,   0,	DEFAULT)
MUX_CFG(GPIO0C0_FLASHDATA8_NAME,			GPIO0C,   0,	 1,   0,	DEFAULT)

//GPIO0D
MUX_CFG(GPIO0D7_SPI1CSN0_NAME,				GPIO0D,   14,	 1,   0,	DEFAULT)
MUX_CFG(GPIO0D6_SPI1CLK_NAME,				GPIO0D,   12,	 1,   0,	DEFAULT)
MUX_CFG(GPIO0D5_SPI1TXD_NAME,				GPIO0D,   10,	 1,   0,	DEFAULT)
MUX_CFG(GPIO0D4_SPI1RXD_NAME,				GPIO0D,   8,	 1,   0,	DEFAULT)
MUX_CFG(GPIO0D3_FLASHCSN3_EMMCRSTNOUT_NAME, 		GPIO0D,   6,	 2,   0,	DEFAULT)
MUX_CFG(GPIO0D2_FLASHCSN2_EMMCCMD_NAME,			GPIO0D,   4,	 2,   0,	DEFAULT)
MUX_CFG(GPIO0D1_FLASHCSN1_NAME,				GPIO0D,   2,	 2,   0,	DEFAULT)
MUX_CFG(GPIO0D0_FLASHDQS_EMMCCLKOUT_NAME,		GPIO0D,   0,	 2,   0,	DEFAULT)

//GPIO1A
MUX_CFG(GPIO1A7_UART1RTSN_SPI0CSN0_NAME, 		GPIO1A,   14,	 2,   0,	DEFAULT)
MUX_CFG(GPIO1A6_UART1CTSN_SPI0CLK_NAME, 		GPIO1A,   12,	 2,   0,	DEFAULT)
MUX_CFG(GPIO1A5_UART1SOUT_SPI0TXD_NAME, 		GPIO1A,   10,	 2,   0,	DEFAULT)
MUX_CFG(GPIO1A4_UART1SIN_SPI0RXD_NAME, 			GPIO1A,   8,	 2,   0,	DEFAULT)
MUX_CFG(GPIO1A3_UART0RTSN_NAME, 			GPIO1A,   6,	 1,   0,	DEFAULT)
MUX_CFG(GPIO1A2_UART0CTSN_NAME, 			GPIO1A,   4,	 1,   0,	DEFAULT)
MUX_CFG(GPIO1A1_UART0SOUT_NAME, 			GPIO1A,   2,	 1,   0,	DEFAULT)
MUX_CFG(GPIO1A0_UART0SIN_NAME,				GPIO1A,   0,	 1,   0,	DEFAULT)

//GPIO1B
MUX_CFG(GPIO1B7_SPI0CSN1_NAME, 				GPIO1B,   14,	 1,   0,	DEFAULT)
MUX_CFG(GPIO1B6_SPDIFTX_SPI1CSN1_NAME, 			GPIO1B,   12,	 2,   0,	DEFAULT)
MUX_CFG(GPIO1B5_UART3RTSN_NAME, 			GPIO1B,   10,	 2,   0,	DEFAULT)
MUX_CFG(GPIO1B4_UART3CTSN_GPSRFCLK_NAME, 		GPIO1B,   8,	 2,   0,	DEFAULT)
MUX_CFG(GPIO1B3_UART3SOUT_GPSSIG_NAME,			GPIO1B,   6,	 2,   0,	DEFAULT)
MUX_CFG(GPIO1B2_UART3SIN_GPSMAG_NAME,			GPIO1B,   4,	 2,   0,	DEFAULT)
MUX_CFG(GPIO1B1_UART2SOUT_JTAGTDO_NAME, 		GPIO1B,   2,	 2,   0,	DEFAULT)
MUX_CFG(GPIO1B0_UART2SIN_JTAGTDI_NAME,			GPIO1B,   0,	 2,   0,	DEFAULT)

//GPIO1C
MUX_CFG(GPIO1C5_I2SSDO_NAME,				GPIO1C,   10,	 1,   0,	DEFAULT)
MUX_CFG(GPIO1C4_I2SSDI_NAME,				GPIO1C,   8,	 1,   0,	DEFAULT)
MUX_CFG(GPIO1C3_I2SLRCLKTX_NAME, 			GPIO1C,   6,	 1,   0,	DEFAULT)
MUX_CFG(GPIO1C2_I2SLRCLKRX_NAME,			GPIO1C,   4,	 1,   0,	DEFAULT)
MUX_CFG(GPIO1C1_I2SSCLK_NAME, 				GPIO1C,   2,	 1,   0,	DEFAULT)
MUX_CFG(GPIO1C0_I2SCLK_NAME,				GPIO1C,   0,	 1,   0,	DEFAULT)

//GPIO1D
MUX_CFG(GPIO1D7_I2C4SCL_NAME,				GPIO1D,   14,	 1,   0,	DEFAULT)
MUX_CFG(GPIO1D6_I2C4SDA_NAME, 				GPIO1D,   12,	 1,   0,	DEFAULT)
MUX_CFG(GPIO1D5_I2C2SCL_NAME,				GPIO1D,   10,	 1,   0,	DEFAULT)
MUX_CFG(GPIO1D4_I2C2SDA_NAME, 				GPIO1D,   8,	 1,   0,	DEFAULT)
MUX_CFG(GPIO1D3_I2C1SCL_NAME, 				GPIO1D,   6,	 1,   0,	DEFAULT)
MUX_CFG(GPIO1D2_I2C1SDA_NAME, 				GPIO1D,   4,	 1,   0,	DEFAULT)
MUX_CFG(GPIO1D1_I2C0SCL_NAME, 				GPIO1D,   2,	 1,   0,	DEFAULT)
MUX_CFG(GPIO1D0_I2C0SDA_NAME,				GPIO1D,   0,	 1,   0,	DEFAULT)

//GPIO2A
MUX_CFG(GPIO2A7_LCDC1DATA7_SMCDATA7_TRACEDATA7_NAME,	GPIO2A,   14,	 2,   0,	DEFAULT)
MUX_CFG(GPIO2A6_LCDC1DATA6_SMCDATA6_TRACEDATA6_NAME,	GPIO2A,   12,	 2,   0,	DEFAULT)
MUX_CFG(GPIO2A5_LCDC1DATA5_SMCDATA5_TRACEDATA5_NAME,	GPIO2A,   10,	 2,   0,	DEFAULT)
MUX_CFG(GPIO2A4_LCDC1DATA4_SMCDATA4_TRACEDATA4_NAME,	GPIO2A,   8,	 2,   0,	DEFAULT)
MUX_CFG(GPIO2A3_LCDC1DATA3_SMCDATA3_TRACEDATA3_NAME,	GPIO2A,   6,	 2,   0,	DEFAULT)
MUX_CFG(GPIO2A2_LCDC1DATA2_SMCDATA2_TRACEDATA2_NAME,	GPIO2A,   4,	 2,   0,	DEFAULT)
MUX_CFG(GPIO2A1_LCDC1DATA1_SMCDATA1_TRACEDATA1_NAME,	GPIO2A,   2,	 2,   0,	DEFAULT)
MUX_CFG(GPIO2A0_LCDC1DATA0_SMCDATA0_TRACEDATA0_NAME,	GPIO2A,   0,	 2,   0,	DEFAULT)

//GPIO2B
MUX_CFG(GPIO2B7_LCDC1DATA15_SMCDATA15_TRACEDATA15_NAME,	GPIO2B,   14,	 2,   0,	DEFAULT)
MUX_CFG(GPIO2B6_LCDC1DATA14_SMCDATA14_TRACEDATA14_NAME,	GPIO2B,   12,	 2,   0,	DEFAULT)
MUX_CFG(GPIO2B5_LCDC1DATA13_SMCDATA13_TRACEDATA13_NAME,	GPIO2B,   10,	 2,   0,	DEFAULT)
MUX_CFG(GPIO2B4_LCDC1DATA12_SMCDATA12_TRACEDATA12_NAME,	GPIO2B,   8,	 2,   0,	DEFAULT)
MUX_CFG(GPIO2B3_LCDC1DATA11_SMCDATA11_TRACEDATA11_NAME, GPIO2B,   6,	 2,   0,	DEFAULT)
MUX_CFG(GPIO2B2_LCDC1DATA10_SMCDATA10_TRACEDATA10_NAME, GPIO2B,   4,	 2,   0,	DEFAULT)
MUX_CFG(GPIO2B1_LCDC1DATA9_SMCDATA9_TRACEDATA9_NAME,	GPIO2B,   2,	 2,   0,	DEFAULT)
MUX_CFG(GPIO2B0_LCDC1DATA8_SMCDATA8_TRACEDATA8_NAME,	GPIO2B,   0,	 2,   0,	DEFAULT)

//GPIO2C
MUX_CFG(GPIO2C7_LCDC1DATA23_SMCADDR7_NAME,		GPIO2C,   14,	 2,   0,	DEFAULT)
MUX_CFG(GPIO2C6_LCDC1DATA22_SMCADDR6_NAME,		GPIO2C,   12,	 2,   0,	DEFAULT)
MUX_CFG(GPIO2C5_LCDC1DATA21_SMCADDR5_NAME,		GPIO2C,   10,	 2,   0,	DEFAULT)
MUX_CFG(GPIO2C4_LCDC1DATA20_SMCADDR4_NAME,		GPIO2C,   8,	 2,   0,	DEFAULT)
MUX_CFG(GPIO2C3_LCDC1DATA19_SMCADDR3_NAME,		GPIO2C,   6,	 2,   0,	DEFAULT)
MUX_CFG(GPIO2C2_LCDC1DATA18_SMCADDR2_NAME,		GPIO2C,   4,	 2,   0,	DEFAULT)
MUX_CFG(GPIO2C1_LCDC1DATA17_SMCADDR1_TRACECTL_NAME,	GPIO2C,   2,	 2,   0,	DEFAULT)
MUX_CFG(GPIO2C0_LCDC1DATA16_SMCADDR0_TRACECLK_NAME, 	GPIO2C,   0,	 2,   0,	DEFAULT)

//GPIO2D
MUX_CFG(GPIO2D7_TESTCLOCKOUT_NAME,			GPIO2D,   14,	 1,   0,	DEFAULT)
MUX_CFG(GPIO2D6_SMCCSN1_NAME,				GPIO2D,   12,	 1,   0,	DEFAULT)
MUX_CFG(GPIO2D5_SMCBLSN1_NAME,				GPIO2D,   10,	 1,   0,	DEFAULT)
MUX_CFG(GPIO2D4_SMCBLSN0_NAME,				GPIO2D,   8,	 1,   0,	DEFAULT)
MUX_CFG(GPIO2D3_LCDC1VSYNC_SMCADVN_NAME,		GPIO2D,   6,	 2,   0,	DEFAULT)
MUX_CFG(GPIO2D2_LCDC1HSYNC_SMCOEN_NAME,			GPIO2D,   4,	 2,   0,	DEFAULT)
MUX_CFG(GPIO2D1_LCDC1DEN_SMCWEN_NAME,			GPIO2D,   2,	 2,   0,	DEFAULT)
MUX_CFG(GPIO2D0_LCDC1DCLK_SMCCSN0_NAME, 		GPIO2D,   0,	 2,   0,	DEFAULT)

//GPIO3A
MUX_CFG(GPIO3A7_SDMMC0DATA3_NAME,			GPIO3A,   14,	 1,   0,	DEFAULT)
MUX_CFG(GPIO3A6_SDMMC0DATA2_NAME, 			GPIO3A,   12,	 1,   0,	DEFAULT)
MUX_CFG(GPIO3A5_SDMMC0DATA1_NAME,			GPIO3A,   10,	 1,   0,	DEFAULT)
MUX_CFG(GPIO3A4_SDMMC0DATA0_NAME,			GPIO3A,   8,	 1,   0,	DEFAULT)
MUX_CFG(GPIO3A3_SDMMC0CMD_NAME,				GPIO3A,   6,	 1,   0,	DEFAULT)
MUX_CFG(GPIO3A2_SDMMC0CLKOUT_NAME,			GPIO3A,   4,	 1,   0,	DEFAULT)
MUX_CFG(GPIO3A1_SDMMC0PWREN_NAME,			GPIO3A,   2,	 1,   0,	DEFAULT)
MUX_CFG(GPIO3A0_SDMMC0RSTNOUT_NAME,			GPIO3A,   0,	 1,   0,	DEFAULT)

//GPIO3B
MUX_CFG(GPIO3B7_CIFDATA11_I2C3SCL_NAME,			GPIO3B,   14,	 2,   0,	DEFAULT)
MUX_CFG(GPIO3B6_CIFDATA10_I2C3SDA_NAME, 		GPIO3B,   12,	 2,   0,	DEFAULT)
MUX_CFG(GPIO3B5_CIFDATA1_HSADCDATA9_NAME,		GPIO3B,   10,	 2,   0,	DEFAULT)
MUX_CFG(GPIO3B4_CIFDATA0_HSADCDATA8_NAME,		GPIO3B,   8,	 2,   0,	DEFAULT)
MUX_CFG(GPIO3B3_CIFCLKOUT_NAME,				GPIO3B,   6,	 1,   0,	DEFAULT)
MUX_CFG(GPIO3B1_SDMMC0WRITEPRT_NAME, 			GPIO3B,   2,	 1,   0,	DEFAULT)
MUX_CFG(GPIO3B0_SDMMC0DETECTN_NAME, 			GPIO3B,   0,	 1,   0,	DEFAULT)

//GPIO3C
MUX_CFG(GPIO3C7_SDMMC1WRITEPRT_RMIICRS_NAME,		GPIO3C,   14,	 2,   0,	DEFAULT)
MUX_CFG(GPIO3C6_SDMMC1DETECTN_RMIIRXERR_NAME, 		GPIO3C,   12,	 2,   0,	DEFAULT)
MUX_CFG(GPIO3C5_SDMMC1CLKOUT_RMIICLKOUT_RMIICLKIN_NAME,	GPIO3C,   10,	 2,   0,	DEFAULT)
MUX_CFG(GPIO3C4_SDMMC1DATA3_RMIIRXD1_NAME,		GPIO3C,   8,	 2,   0,	DEFAULT)
MUX_CFG(GPIO3C3_SDMMC1DATA2_RMIIRXD0_NAME,		GPIO3C,   6,	 2,   0,	DEFAULT)
MUX_CFG(GPIO3C2_SDMMC1DATA1_RMIITXD0_NAME,		GPIO3C,   4,	 2,   0,	DEFAULT)
MUX_CFG(GPIO3C1_SDMMC1DATA0_RMIITXD1_NAME,		GPIO3C,   2,	 2,   0,	DEFAULT)
MUX_CFG(GPIO3C0_SDMMC1CMD_RMIITXEN_NAME,		GPIO3C,   0,	 2,   0,	DEFAULT)

//GPIO3D
MUX_CFG(GPIO3D6_PWM3_JTAGTMS_HOSTDRVVBUS_NAME,		GPIO3D,   12,	 2,   0,	DEFAULT)
MUX_CFG(GPIO3D5_PWM2_JTAGTCK_OTGDRVVBUS_NAME, 		GPIO3D,   10,	 2,   0,	DEFAULT)
MUX_CFG(GPIO3D4_PWM1_JTAGTRSTN_NAME, 			GPIO3D,   8,	 2,   0,	DEFAULT)
MUX_CFG(GPIO3D3_PWM0_NAME,				GPIO3D,   6,	 1,   0,	DEFAULT)
MUX_CFG(GPIO3D2_SDMMC1INTN_NAME,			GPIO3D,   4,	 1,   0,	DEFAULT)
MUX_CFG(GPIO3D1_SDMMC1BACKENDPWR_MIIMDCLK_NAME,		GPIO3D,   2,	 2,   0,	DEFAULT)
MUX_CFG(GPIO3D0_SDMMC1PWREN_MIIMD_NAME,			GPIO3D,   0,	 2,   0,	DEFAULT)
};

static int __init rk3066b_iomux_init(void)
{

#if defined(CONFIG_UART0_RK29) || (CONFIG_RK_DEBUG_UART == 0)
        rk30_mux_api_set(GPIO1A1_UART0SOUT_NAME, GPIO1A_UART0SOUT);
        rk30_mux_api_set(GPIO1A0_UART0SIN_NAME, GPIO1A_UART0SIN);
#ifdef CONFIG_UART0_CTS_RTS_RK29
        rk30_mux_api_set(GPIO1A3_UART0RTSN_NAME, GPIO1A_UART0RTSN);
        rk30_mux_api_set(GPIO1A2_UART0CTSN_NAME, GPIO1A_UART0CTSN);
#endif
#endif
#if defined(CONFIG_UART1_RK29) || (CONFIG_RK_DEBUG_UART == 1)
        //UART1 OR SPIM0
	rk30_mux_api_set(GPIO1A5_UART1SOUT_SPI0TXD_NAME, GPIO1A_UART1SOUT);
	rk30_mux_api_set(GPIO1A4_UART1SIN_SPI0RXD_NAME, GPIO1A_UART1SIN);
#ifdef CONFIG_UART1_CTS_RTS_RK29
	rk30_mux_api_set(GPIO1A7_UART1RTSN_SPI0CSN0_NAME, GPIO1A_UART1RTSN);
	rk30_mux_api_set(GPIO1A6_UART1CTSN_SPI0CLK_NAME, GPIO1A_UART1CTSN);
#endif
#endif

#if defined(CONFIG_UART2_RK29) || (CONFIG_RK_DEBUG_UART == 2)
	rk30_mux_api_set(GPIO1B1_UART2SOUT_JTAGTDO_NAME, GPIO1B_UART2SOUT);
	rk30_mux_api_set(GPIO1B0_UART2SIN_JTAGTDI_NAME, GPIO1B_UART2SIN);
#endif
#if defined(CONFIG_UART3_RK29) || (CONFIG_RK_DEBUG_UART == 3)
	rk30_mux_api_set(GPIO1B3_UART3SOUT_GPSSIG_NAME, GPIO1B_UART3SOUT);
	rk30_mux_api_set(GPIO1B2_UART3SIN_GPSMAG_NAME, GPIO1B_UART3SIN);
#ifdef CONFIG_UART3_CTS_RTS_RK29
	rk30_mux_api_set(GPIO1B5_UART3RTSN_NAME, GPIO1B_UART3RTSN);
	rk30_mux_api_set(GPIO1B4_UART3CTSN_GPSRFCLK_NAME, GPIO1B_UART3CTSN);
#endif
#endif
#ifdef CONFIG_SPIM0_RK29
        //UART1 OR SPIM0
	rk30_mux_api_set(GPIO1A6_UART1CTSN_SPI0CLK_NAME, GPIO1A_SPI0CLK);
	rk30_mux_api_set(GPIO1A7_UART1RTSN_SPI0CSN0_NAME, GPIO1A_SPI0CSN0);
	rk30_mux_api_set(GPIO1A5_UART1SOUT_SPI0TXD_NAME, GPIO1A_SPI0TXD);
	rk30_mux_api_set(GPIO1A4_UART1SIN_SPI0RXD_NAME, GPIO1A_SPI0RXD);
#endif
#ifdef CONFIG_SPIM1_RK29
	//rk30_mux_api_set(GPIO1B6_SPDIFTX_SPI1CSN1_NAME, GPIO1B_SPI1CSN1);
	rk30_mux_api_set(GPIO0D4_SPI1RXD_NAME, GPIO0D_SPI1RXD);
	rk30_mux_api_set(GPIO0D5_SPI1TXD_NAME, GPIO0D_SPI1TXD);
	rk30_mux_api_set(GPIO0D7_SPI1CSN0_NAME, GPIO0D_SPI1CSN0);
	rk30_mux_api_set(GPIO0D6_SPI1CLK_NAME, GPIO0D_SPI1CLK);
#endif

#ifdef CONFIG_I2C0_RK30
	rk30_mux_api_set(GPIO1D1_I2C0SCL_NAME, GPIO1D_I2C0SCL);	
	rk30_mux_api_set(GPIO1D0_I2C0SDA_NAME, GPIO1D_I2C0SDA);
#endif

#ifdef CONFIG_I2C1_RK30
	rk30_mux_api_set(GPIO1D3_I2C1SCL_NAME, GPIO1D_I2C1SCL);
	rk30_mux_api_set(GPIO1D2_I2C1SDA_NAME, GPIO1D_I2C1SDA);
#endif

#ifdef CONFIG_I2C2_RK30
	rk30_mux_api_set(GPIO1D5_I2C2SCL_NAME, GPIO1D_I2C2SCL);
	rk30_mux_api_set(GPIO1D4_I2C2SDA_NAME, GPIO1D_I2C2SDA);
#endif

#ifdef CONFIG_I2C3_RK30
	rk30_mux_api_set(GPIO3B7_CIFDATA11_I2C3SCL_NAME, GPIO3B_I2C3SCL);
	rk30_mux_api_set(GPIO3B6_CIFDATA10_I2C3SDA_NAME, GPIO3B_I2C3SDA);
#endif

#ifdef CONFIG_I2C4_RK30
	rk30_mux_api_set(GPIO1D7_I2C4SCL_NAME, GPIO1D_I2C4SCL);
	rk30_mux_api_set(GPIO1D6_I2C4SDA_NAME, GPIO1D_I2C4SDA);
#endif

#ifdef CONFIG_RK30_VMAC
	rk30_mux_api_set(GPIO3C5_SDMMC1CLKOUT_RMIICLKOUT_RMIICLKIN_NAME, GPIO3C_RMIICLKOUT);
	rk30_mux_api_set(GPIO3C0_SDMMC1CMD_RMIITXEN_NAME, GPIO3C_RMIITXEN);
	rk30_mux_api_set(GPIO3C1_SDMMC1DATA0_RMIITXD1_NAME, GPIO3C_RMIITXD1);
	rk30_mux_api_set(GPIO3C2_SDMMC1DATA1_RMIITXD0_NAME, GPIO3C_RMIITXD0);
	rk30_mux_api_set(GPIO3C6_SDMMC1DETECTN_RMIIRXERR_NAME, GPIO3C_RMIIRXERR);
	rk30_mux_api_set(GPIO3C7_SDMMC1WRITEPRT_RMIICRS_NAME, GPIO3C_RMIICRS);
	rk30_mux_api_set(GPIO3C4_SDMMC1DATA3_RMIIRXD1_NAME, GPIO3C_RMIIRXD1);
	rk30_mux_api_set(GPIO3C3_SDMMC1DATA2_RMIIRXD0_NAME, GPIO3C_RMIIRXD0);

	rk30_mux_api_set(GPIO3D1_SDMMC1BACKENDPWR_MIIMDCLK_NAME, GPIO3D_MIIMDCLK);
	rk30_mux_api_set(GPIO3D0_SDMMC1PWREN_MIIMD_NAME, GPIO3D_MIIMD);
#endif

	return 0;
}
