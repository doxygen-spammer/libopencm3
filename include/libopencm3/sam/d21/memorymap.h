/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2016 Karl Palsson <karlp@tweak.net.au>
 * Copyright (C) 2022 David Hurka <doxydoxy@mailbox.org>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SAMD21_MEMORYMAP_H
#define SAMD21_MEMORYMAP_H

#include <libopencm3/cm3/common.h>

/* --- SAMD21 AHB-APB bridge A ------------------------------------------ */
#define PM_BASE				(0x40000400U)
#define SYSCTRL_BASE			(0x40000800U)
#define GCLK_BASE			(0x40000c00U)
#define WDT_BASE			(0x40001000U)
#define RTC_BASE			(0x40001400U)
#define EIC_BASE			(0x40001800U)
/* --- SAMD21 AHB-APB bridge B ------------------------------------------ */
#define DSU_BASE			(0x41002000U)
#define NVMCTRL_BASE			(0x41004000U)
#define PORT_BASE			(0x41004400U)
#define DMAC_BASE			(0x41004800U)
#define USB_BASE			(0x41005000U)
#define MTB_BASE			(0x41006000U)
/* --- SAMD21 AHB-APB bridge C ------------------------------------------ */
#define EVSYS_BASE			(0x42000400U)
#define SERCOM0_BASE			(0x42000800U)
#define SERCOM1_BASE			(0x42000c00U)
#define SERCOM2_BASE			(0x42001000U)
#define SERCOM3_BASE			(0x42001400U)
#define SERCOM4_BASE			(0x42001800U)
#define SERCOM5_BASE			(0x42001c00U)
#define TCC0_BASE			(0x42002000U)
#define TCC1_BASE			(0x42002400U)
#define TCC2_BASE			(0x42002800U)
#define TC3_BASE			(0x42002c00U)
#define TC4_BASE			(0x42003000U)
#define TC5_BASE			(0x42003400U)
#define TC6_BASE			(0x42003800U)
#define TC7_BASE			(0x42003c00U)
#define ADC_BASE			(0x42004000U)
#define AC_BASE				(0x42004400U)
#define DAC_BASE			(0x42004800U)
#define PTC_BASE			(0x42004c00U)
#define I2S_BASE			(0x42005000U)
#define AC1_BASE			(0x42005400U)
/* 0x4200 5800 - 0x4200 5FFF): Reserved */
#define TCC3_BASE			(0x42006000U)

#endif
