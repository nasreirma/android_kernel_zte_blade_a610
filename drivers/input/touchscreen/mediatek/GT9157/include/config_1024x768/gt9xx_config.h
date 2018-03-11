//modify@zte.com.cn 20160323 start
/* drivers/input/touchscreen/gt1x_generic.h
 *
 * 2010 - 2014 Goodix Technology.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be a reference
 * to you, when you are integrating the GOODiX's CTP IC into your system,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * Version: 1.0
 * Revision Record:
 *      V1.0:  first release. 2014/09/28.
 *
 */

#ifndef _GT9XX_CONFIG_H_
#define _GT9XX_CONFIG_H_

#define CTP_CFG_GROUP1 {}

#define CTP_CFG_GROUP1_CHARGER {}

#define CTP_CFG_GROUP2 {}

#define CTP_CFG_GROUP2_CHARGER {}

#define CTP_CFG_GROUP3 {\
0x42, 0x20, 0x03, 0x00, 0x05, 0x0A, 0x34, 0x06,\
0x01, 0x0F, 0x1E, 0x0F, 0x50, 0x3C, 0x03, 0x05,\
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x17,\
0x19, 0x1D, 0x14, 0x8C, 0x2E, 0x0E, 0x35, 0x37,\
0xD3, 0x07, 0x00, 0x00, 0x00, 0xBB, 0x32, 0x1D,\
0x00, 0x01, 0x00, 0x64, 0x00, 0x7A, 0xFF, 0x67,\
0x1E, 0x46, 0x00, 0x1D, 0x4C, 0x94, 0xD5, 0x02,\
0x07, 0x00, 0x00, 0x04, 0xB3, 0x20, 0x00, 0x9E,\
0x26, 0x00, 0x89, 0x2F, 0x00, 0x7A, 0x39, 0x00,\
0x70, 0x45, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00,\
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
0x00, 0x00, 0x00, 0x0F, 0x0F, 0x03, 0x06, 0x10,\
0x42, 0xF8, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00,\
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
0x1C, 0x1A, 0x18, 0x16, 0x14, 0x12, 0x10, 0x0E,\
0x0C, 0x0A, 0x08, 0x06, 0x04, 0x02, 0x00, 0x00,\
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02,\
0x04, 0x06, 0x08, 0x0A, 0x0C, 0x0F, 0x10, 0x12,\
0x13, 0x14, 0x16, 0x18, 0x1C, 0x1D, 0x1E, 0x1F,\
0x20, 0x21, 0x22, 0x24, 0x26, 0x28, 0x29, 0x2A,\
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
0xB5, 0x01,}

#define CTP_CFG_GROUP3_CHARGER {}

#define CTP_CFG_GROUP4 {\
0x00, 0x58, 0x02, 0x00, 0x04, 0x05, 0x34, 0x00,\
0x01, 0x06, 0x1E, 0x06, 0x55, 0x3C, 0x03, 0x05,\
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x17,\
0x1B, 0x1E, 0x14, 0x89, 0x28, 0x0A, 0x2D, 0x2B,\
0xB5, 0x06, 0x00, 0x00, 0x00, 0x99, 0x03, 0x1D,\
0x40, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
0x00, 0x00, 0x00, 0x1E, 0x64, 0x94, 0xC5, 0x02,\
0x08, 0x00, 0x00, 0x04, 0x9F, 0x22, 0x00, 0x80,\
0x2B, 0x00, 0x66, 0x37, 0x00, 0x52, 0x46, 0x00,\
0x43, 0x59, 0x00, 0x43, 0x00, 0x00, 0x00, 0x00,\
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
0x1A, 0x18, 0x16, 0x14, 0x12, 0x10, 0x0E, 0x0C,\
0x0A, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x28,\
0x24, 0x22, 0x20, 0x1F, 0x1E, 0x1D, 0x0E, 0x0C,\
0x0A, 0x08, 0x06, 0x05, 0x04, 0x02, 0x00, 0x00,\
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
0x00, 0x00, 0x12, 0x01,}

#define CTP_CFG_GROUP5 {}
#define CTP_CFG_GROUP6 {}

#define TPD_CALIBRATION_MATRIX_ROTATION_NORMAL {-4096, 0, 3276800, 0, -4096, 5242880, 0, 0}
#define TPD_CALIBRATION_MATRIX_ROTATION_FACTORY {-4096, 0, 3276800, 0, -4096, 5242880, 0, 0}

#endif				/* _GT9XX_CONFIG_H_ */
//modify@zte.com.cn 20160323 end