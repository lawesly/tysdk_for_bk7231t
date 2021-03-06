/***********************************************************
*  File: crc_16.h 
*  Author: nzy
*  Date: 20170222
***********************************************************/
#ifndef _CRC_16_H
    #define _CRC_16_H

#ifdef __cplusplus
	extern "C" {
#endif

#ifdef  __CRC_16_GLOBALS
    #define __CRC_16_MODULE_EXT
#else
    #define __CRC_16_MODULE_EXT extern
#endif

/***********************************************************
*************************micro define***********************
***********************************************************/

/***********************************************************
*************************variable define********************
***********************************************************/

/***********************************************************
*************************function define********************
***********************************************************/
/***********************************************************
*   Function: get_crc_8
*   Input: none
*   Output: none 
*   Return: none
***********************************************************/
__CRC_16_MODULE_EXT \
unsigned short get_crc_16(unsigned char *data,unsigned short size);

#ifdef __cplusplus
}
#endif
#endif


