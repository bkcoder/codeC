#include "Diem3D.h"
#include "Diem.h"

Diem3D::Diem3D()
{

}

Diem3D::Diem3D(int x, int y, int z) : Diem(x, y)
{
	Diem(x, y);
	iZ = z;
}


Diem3D::~Diem3D(void)
{
}


void Diem3D::hienthi()
{
	Diem::hienthi();
	cout << "z = " << iZ << endl;
}