/**************************************************************************************
* Copyright (c) 2005 , ICDEV.COM
* All rights reserved.
*
* 文件名称: HzLib_65k.h
* 文件描述: 字库  
*			现只支持GB2312汉字字符集（16*16）和ASCII标准字符集(8*16)的显示
* 修改历史: 
*   版本    日期     作者     改动内容和原因
*   ----------------------------------------------------
*   1.0   2005.12.7  lcf     基本的功能完成
**************************************************************************************/

#ifndef __HzLib_65k_H__
#define __HzLib_65k_H__
//#define use_hzlib 1      //使用汉字
#define use_hzlib 0

extern unsigned char const HzLib[];
extern unsigned char const AsciiLib[];

#endif
