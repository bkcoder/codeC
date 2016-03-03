#pragma once
#if !defined _HINH_2D_
#define _HINH_2D_
#include "Diem2D.h"
#include "Hinhhoc.h"
class Hinh2D : public Hinhhoc
{
private: 
	Diem2D m_oA1;
	Diem2D m_oA2;
	Diem2D m_oA3;
	Diem2D m_oA4;
public:
	Hinh2D();
	Hinh2D(Diem2D A1, Diem2D A2, Diem2D A3, Diem2D A4);
	~Hinh2D();
	void hienthi();
private:
	Diem2D A1, A2, A3, A4;
};
#endif
