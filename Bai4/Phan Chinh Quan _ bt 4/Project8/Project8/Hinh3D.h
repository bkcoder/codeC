#pragma once
#if !defined _HINH_3D_H_
#define _HINH_3D_H_
#include "Hinhhoc.h"
#include "Diem3D.h"
class Hinh3D : public Hinhhoc
{
public:
	Hinh3D();
	Hinh3D(int , int ,int ,int , int ,int ,int , int );
	~Hinh3D();
private:
	Diem3D A1, A2, A3, A4, A5, A6, A7, A8;
};
#endif

