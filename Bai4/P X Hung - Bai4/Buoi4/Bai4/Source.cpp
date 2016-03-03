#include<iostream>
#include"HinhHoc.h"
#include"Diem2D.h"
#include"Diem3D.h"
#include"Hinh2D.h"
#include"Hinh3D.h"


using std::cout;
using std::endl;

int main()
{
	//Diem2D a1(1, 2);
	//Diem2D a2(3, 4);
	//Diem2D a3(5, 6);
	//Diem2D a4(7, 8);

	//Hinh2D hinh2d(a1, a2, a3, a4);

	//hinh2d.hienthi();

	Diem2D diem2d(0, 1);
	diem2d.hienthi();

	cout << endl;

	Diem3D diem3d(1, 2, 3);
	diem3d.hienthi();

	//HinhHoc hinhhoc1(1, 2);
	//hinhhoc1.hienthi();

	system("pause");
	return 0;
}