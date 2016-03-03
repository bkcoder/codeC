#pragma once
#if !define _DIEM_3D_H_
#define _DIEM_3D_H_
#include "Diem2D.h"
class Diem3D : public Diem2D
{
private:
	Diem2D m_oDiem2d;
	int iZ;
public:
	Diem3D();
	Diem3D(Diem2D , int );
	~Diem3D();
	void display();
};
#endif
