#pragma once
#if !defined _HINH_HOC_H_
#define _HINH_HOC_H_
#include "Diem2D.h"
#include "Diem3D.h"

class Hinhhoc : public Diem2D, public Diem3D
{
public:
	Hinhhoc();
	Hinhhoc(int , int );
	~Hinhhoc();
	void dientich();
	void chuvi();
	void thetich();
};
#endif
