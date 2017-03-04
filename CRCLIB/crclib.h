#ifndef _CRCLIB_H_
#define _CRCLIB_H_

#include "stdint.h"
/*****************************************************************************
CRC-5-CCITT						x5 + x3 + x + 1 (ITU G.704 标准)
CRC-5-USB						x5 + x2 + 1 (用途：USB 信令包)
CRC-7							x7 + x3 + 1 (用途：通信系统)
CRC-8-ATM						x8 + x2 + x + 1 (用途：ATM HEC)
CRC-8-CCITT						x8 + x7 + x3 + x2 + 1 (用途：1-Wire 总线)
CRC-8-Dallas/Maxim				x8 + x5 + x4 + 1 (用途：1-Wire bus)
CRC-8							x8 + x7 + x6 + x4 + x2 + 1
CRC-16-Fletcher					参见 Fletcher's checksum
CRC-16-CCITT					x16 + x12 + x5 + 1 (X25, V.41, Bluetooth, PPP, IrDA)
CRC-16-IBM						x16 +x15 + x2 + 1
CRC-16-BBS						x16 + x15 + x10 + x3 (用途：XMODEM 协议)
CRC-32-MPEG2					See IEEE 802.3

反序多项式：反转多项式是指在数据通讯时，信息字节先传送或接收低位字节，
如重新排位影响CRC计算速度，故设反转多项式
******************************************************************************/
uint8_t crc4_itu(uint8_t *data, uint8_t length);  
uint8_t crc5_epc(uint8_t *data, uint8_t length);  
uint8_t crc5_itu(uint8_t *data, uint8_t length);  
uint8_t crc5_usb(uint8_t *data, uint8_t length);  
uint8_t crc6_itu(uint8_t *data, uint8_t length);  
uint8_t crc7_mmc(uint8_t *data, uint8_t length);  
uint8_t crc8(uint8_t *data, uint8_t length);  
uint8_t crc8_itu(uint8_t *data, uint8_t length);  
uint8_t crc8_rohc(uint8_t *data, uint8_t length);  
uint8_t crc8_maxim(uint8_t *data, uint8_t length);//DS18B20  
uint8_t crc8_wResource(uint8_t *data, uint8_t length);	//0x73：X7+X6+X5+X2+X1
uint16_t crc16_ibm(uint8_t *data, uint8_t length);  
uint16_t crc16_maxim(uint8_t *data, uint8_t length);  
uint16_t crc16_usb(uint8_t *data, uint8_t length);  
uint16_t crc16_modbus(uint8_t *data, uint8_t length);  
uint16_t crc16_ccitt(uint8_t *data, uint8_t length);  
uint16_t crc16_ccitt_false(uint8_t *data, uint8_t length);  
uint16_t crc16_x25(uint8_t *data, uint8_t length);  
uint16_t crc16_xmodem(uint8_t *data, uint8_t length);  
uint16_t crc16_dnp(uint8_t *data, uint8_t length);  
uint32_t crc32(uint8_t *data, uint8_t length);  
uint32_t crc32_mpeg_2(uint8_t *data, uint8_t length);
#endif