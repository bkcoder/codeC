#pragma once

#if !defined _HINH_2D_H_
#define _HINH_2D_H_
#include"Hinh2D.h"
#include"Diem2D.h"
#include"HinhHoc.h"
#include"Diem2D.h"

class Hinh2D : public HinhHoc
{
public:
	Hinh2D();
	Hinh2D(Diem2D, Diem2D, Diem2D, Diem2D);
	~Hinh2D();

	//virtual void getArea() const;

private:
	Diem2D A1, A2, A3, A4;
};

#endif