#pragma once

#if !defined _DIEM_3D_H_
#define _DIEM_3D_H_

#include "Diem.h"
#include"Diem2D.h"

class Diem3D : public Diem

{

private:
	int iZ;

public:

	Diem3D();
	Diem3D(int x, int y, int z);

	~Diem3D(void);

	void hienthi();
};

#endif