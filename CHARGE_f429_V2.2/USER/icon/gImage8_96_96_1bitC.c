#include "stm32f10x_lib.h"
#include "ili9320.h"

//96*96��ά��ͼƬ
const unsigned char gImage_q96d1[1152]={
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xE3,0x07,0xF8,0x0F,0xFF,0xE0,
0xF8,0x07,0xFF,0xFC,0x3F,0xFF,0xE3,0x07,0xF8,0x0F,0xFF,0xE0,0xF8,0x07,0xFF,0xFC,
0x30,0x00,0x60,0xF8,0x00,0x3F,0x83,0xFC,0x07,0xC6,0x00,0x0C,0x30,0x00,0x60,0xF8,
0x00,0x3F,0x83,0xFC,0x07,0xC6,0x00,0x0C,0x30,0x00,0x60,0xF8,0x00,0x3F,0x83,0xFC,
0x07,0xC6,0x00,0x0C,0x31,0xFC,0x60,0x18,0xFE,0x0F,0x8C,0x63,0x1F,0x06,0x3F,0x8C,
0x31,0xFC,0x60,0x18,0xFE,0x0F,0x8C,0x63,0x1F,0x06,0x3F,0x8C,0x31,0xFC,0x60,0x00,
0xFE,0x0E,0x0C,0x7F,0xF8,0xC6,0x3F,0x8C,0x31,0xFC,0x60,0x00,0xFE,0x0E,0x0C,0x7F,
0xF8,0xC6,0x3F,0x8C,0x31,0xFC,0x60,0x00,0xFE,0x0E,0x0C,0x7F,0xFC,0xC6,0x3F,0x8C,
0x31,0xFC,0x60,0xE7,0x3E,0x3F,0xFC,0x7F,0x1F,0x06,0x3F,0x8C,0x31,0xFC,0x60,0xE7,
0x3E,0x3F,0xFC,0x7F,0x1F,0x06,0x3F,0x8C,0x30,0x00,0x60,0x18,0xFE,0x00,0x70,0x03,
0xFF,0x06,0x00,0x0C,0x30,0x00,0x60,0x18,0xFE,0x00,0x70,0x03,0xFF,0x06,0x00,0x0C,
0x30,0x00,0xE0,0x18,0xFE,0x00,0x70,0x03,0xFF,0x07,0x00,0x0C,0x3F,0xFF,0xE3,0x18,
0xC6,0x31,0x8C,0x63,0x18,0xC7,0xFF,0xFC,0x3F,0xFF,0xE3,0x18,0xC6,0x31,0x8C,0x63,
0x18,0xC7,0xFF,0xFC,0x00,0x00,0x03,0x1F,0x3F,0xFF,0xFF,0x80,0x00,0xC0,0x00,0x00,
0x00,0x00,0x03,0x1F,0x3F,0xFF,0xFF,0x80,0x00,0xC0,0x00,0x00,0x00,0x00,0x03,0x3F,
0x3F,0xFF,0xFF,0x80,0x00,0xC0,0x00,0x00,0x3E,0x7C,0x60,0xFF,0x07,0xCF,0x83,0xFC,
0xE7,0xC6,0x00,0x0C,0x3E,0x7C,0x60,0xFF,0x07,0xCF,0x83,0xFC,0xE7,0xC6,0x00,0x0C,
0x0F,0x83,0x9C,0xE0,0xFF,0xCF,0xF3,0xFF,0x00,0xC1,0xFE,0x00,0x0F,0x83,0x9C,0xE0,
0xFF,0xCF,0xF3,0xFF,0x00,0xC1,0xFE,0x00,0x0F,0x83,0x9C,0xE0,0xFF,0xCF,0xF3,0xFF,
0x00,0xE1,0xFE,0x00,0x31,0x8F,0xFF,0x07,0x01,0xCE,0x7F,0x80,0x18,0xFE,0x01,0xFC,
0x31,0x8F,0xFF,0x07,0x01,0xCE,0x7F,0x80,0x18,0xFE,0x01,0xFC,0x01,0xF0,0x1F,0x07,
0xC1,0xF0,0x03,0x80,0xF8,0x01,0xF1,0xF0,0x01,0xF0,0x1F,0x07,0xC1,0xF0,0x03,0x80,
0xF8,0x01,0xF1,0xF0,0x01,0xF0,0x1F,0x07,0xC1,0xF0,0x03,0x80,0xF8,0x01,0xF1,0xF0,
0x00,0x03,0xFF,0xFF,0xC0,0x31,0x80,0x03,0x07,0xC7,0xCE,0x70,0x00,0x03,0xFF,0xFF,
0xC0,0x31,0x80,0x03,0x07,0xC7,0xCE,0x70,0x30,0x03,0x83,0xF8,0x06,0x01,0xFF,0x9C,
0xFF,0xC1,0xFF,0xF0,0x30,0x03,0x83,0xF8,0x06,0x01,0xFF,0x9C,0xFF,0xC1,0xFF,0xF0,
0x30,0x03,0x83,0xF8,0x06,0x01,0xFF,0x9C,0xFF,0xC1,0xFF,0xF0,0x30,0x0C,0x63,0x07,
0xF9,0xFE,0x03,0xFF,0x18,0x38,0x30,0x0C,0x30,0x0C,0x63,0x07,0xF9,0xFE,0x03,0xFF,
0x18,0x38,0x30,0x0C,0x00,0x7C,0x00,0xE7,0x00,0x01,0x8F,0x80,0xF8,0x39,0xFF,0x8C,
0x00,0x7C,0x00,0xE7,0x00,0x01,0x8F,0x80,0xF8,0x39,0xFF,0x8C,0x00,0x7C,0x00,0xE7,
0x00,0x01,0x8F,0x80,0xF8,0x39,0xFF,0xCC,0x0F,0xF0,0x63,0xE0,0x39,0xF1,0xFF,0x83,
0x1F,0x06,0x0F,0xFC,0x0F,0xF0,0x63,0xE0,0x39,0xF1,0xFF,0x83,0x1F,0x06,0x0F,0xFC,
0x30,0x0C,0x1F,0xFF,0xC1,0xFE,0x03,0x83,0xE0,0xF9,0xC1,0xC0,0x30,0x0C,0x1F,0xFF,
0xC1,0xFE,0x03,0x83,0xE0,0xF9,0xC1,0x80,0x30,0x0C,0x1F,0xFF,0xC1,0xFE,0x03,0x83,
0xE0,0xF9,0xC1,0x80,0x00,0x70,0x63,0xE7,0x3F,0xCF,0x83,0xE3,0x18,0x01,0xC0,0x0C,
0x00,0x70,0x63,0xE7,0x3F,0xCF,0x83,0xE3,0x18,0x01,0xC0,0x0C,0x0F,0x8F,0x80,0xE0,
0xF9,0xC0,0x73,0xFF,0x18,0xFE,0x0E,0x0C,0x0F,0x8F,0x80,0xE0,0xF9,0xC0,0x73,0xFF,
0x18,0xFE,0x0E,0x0C,0x0F,0x8F,0x80,0xE0,0xF9,0xC0,0x73,0xFF,0x18,0xFE,0x0E,0x0C,
0x0F,0x8F,0xE0,0xF8,0xC7,0xCF,0xF3,0xFC,0xE7,0x07,0xFE,0x7C,0x0F,0x8F,0xE0,0xF8,
0xC7,0xCF,0xF3,0xFC,0xE7,0x07,0xFE,0x7C,0x3E,0x0C,0x1F,0xE0,0x3F,0xFE,0x70,0x1F,
0x18,0xC1,0xF8,0x70,0x3E,0x0C,0x1F,0xE0,0x3F,0xFE,0x70,0x1F,0x18,0xC1,0xF0,0x70,
0x3E,0x0C,0x1F,0xE0,0x3F,0xFE,0x70,0x1F,0x18,0xC1,0xF0,0x70,0x00,0x7C,0x63,0x18,
0xF9,0xFF,0xF3,0x83,0x18,0xC1,0xCE,0x0C,0x00,0x7C,0x63,0x18,0xF9,0xFF,0xF3,0x83,
0x18,0xC1,0xCE,0x0C,0x31,0x80,0x03,0xF8,0x01,0xCF,0x8F,0xFC,0xE7,0x39,0xFF,0xFC,
0x31,0x80,0x03,0xF8,0x01,0xCF,0x8F,0xFC,0xE7,0x39,0xFF,0xFC,0x31,0x80,0x03,0xF8,
0x01,0xCF,0x8F,0xFC,0xE7,0x39,0xFF,0xFC,0x30,0x0C,0x63,0x00,0xC1,0xC1,0x8C,0x1F,
0x07,0xC7,0xCE,0x0C,0x30,0x0C,0x63,0x00,0xC1,0xC1,0x8C,0x1F,0x07,0xC7,0xCE,0x0C,
0x3F,0xF3,0x9C,0xE0,0xF9,0xC0,0x0C,0x1C,0x1F,0xC0,0x30,0x70,0x3F,0xF3,0x9C,0xE0,
0xF9,0xC0,0x0C,0x1C,0x1F,0xC0,0x30,0x70,0x3F,0xF3,0x9C,0xE0,0xF9,0xC0,0x0C,0x1C,
0x1F,0xC0,0x30,0x70,0x3E,0x73,0xE3,0x18,0x3F,0xCE,0x73,0x9C,0x18,0xC7,0xC1,0xFC,
0x3E,0x73,0xE3,0x18,0x3F,0xCE,0x73,0x9C,0x18,0xC7,0xC1,0xFC,0x30,0x03,0x9C,0xF8,
0x06,0x31,0x8F,0x9C,0xE7,0xF8,0x0F,0xCC,0x30,0x03,0x9C,0xF8,0x06,0x31,0x8F,0x9C,
0xE7,0xF8,0x0F,0x8C,0x30,0x03,0x9C,0xF8,0x06,0x31,0x8F,0x9C,0xE7,0xF8,0x0F,0x8C,
0x30,0x03,0xFC,0xE0,0xF8,0x31,0xF3,0x9C,0xF8,0xFF,0xFF,0xF0,0x30,0x03,0xFC,0xE0,
0xF8,0x31,0xF3,0x9C,0xF8,0xFF,0xFF,0xF0,0x00,0x00,0x03,0x18,0x07,0xF0,0x70,0x7F,
0xF8,0xE0,0x3E,0x70,0x00,0x00,0x03,0x18,0x07,0xF0,0x70,0x7F,0xF8,0xC0,0x3E,0x70,
0x00,0x00,0x03,0x18,0x07,0xF0,0x70,0x7F,0xF8,0xC0,0x3E,0x70,0x3F,0xFF,0xE0,0xE7,
0x39,0xFF,0x83,0x83,0xE7,0xC6,0x3E,0x0C,0x3F,0xFF,0xE0,0xE7,0x39,0xFF,0x83,0x83,
0xE7,0xC6,0x3E,0x0C,0x30,0x00,0xE0,0xFF,0x39,0xC3,0x83,0xE0,0x18,0xC0,0x3E,0x00,
0x30,0x00,0x60,0xFF,0x39,0xC1,0x83,0xE0,0x18,0xC0,0x3E,0x00,0x30,0x00,0x60,0xFF,
0x39,0xC1,0x83,0xE0,0x18,0xC0,0x3E,0x00,0x31,0xFC,0x63,0x1F,0xC1,0xCF,0x80,0x7F,
0xE7,0xFF,0xFE,0x0C,0x31,0xFC,0x63,0x1F,0xC1,0xCF,0x80,0x7F,0xE7,0xFF,0xFE,0x0C,
0x31,0xFC,0x63,0x07,0x3F,0xFE,0x0F,0xF3,0xFF,0x3F,0x0F,0x80,0x31,0xFC,0x63,0x07,
0x3F,0xFE,0x0F,0xE3,0xFF,0x3E,0x0F,0x80,0x31,0xFC,0x63,0x07,0x3F,0xFE,0x0F,0xE3,
0xFF,0x3E,0x0F,0x80,0x31,0xFC,0x60,0x1F,0x39,0xCF,0xF3,0xE0,0x18,0xF9,0xF1,0x8C,
0x31,0xFC,0x60,0x1F,0x39,0xCF,0xF3,0xE0,0x18,0xF9,0xF1,0x8C,0x30,0x00,0x63,0xE0,
0xC1,0xFE,0x0F,0xFC,0xE0,0x01,0xFF,0xFC,0x30,0x00,0x63,0xE0,0xC1,0xFE,0x0F,0xFC,
0xE0,0x01,0xFF,0xFC,0x30,0x00,0x63,0xE0,0xC1,0xFE,0x0F,0xFC,0xE0,0x01,0xFF,0xFC,
0x3F,0xFF,0xE3,0x1F,0xC1,0xC1,0xFC,0x1F,0x07,0xF9,0xFE,0x0C,0x3F,0xFF,0xE3,0x1F,
0xC1,0xC1,0xFC,0x1F,0x07,0xF9,0xFE,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};