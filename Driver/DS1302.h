#ifndef __DS1302_H_
#define __DS1302_H_


extern unsigned char TIME[7];	//����ȫ�ֱ���
extern unsigned char YearString[];
extern unsigned char TimeString[];

void Ds1302Write(unsigned char addr, unsigned char dat);
unsigned char Ds1302Read(unsigned char addr);
void Ds1302Init();
void Ds1302ReadTime();
void TimeConvertToString(void);

#endif