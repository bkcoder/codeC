#include <iostream>
#include "Diem.h"
#include "Hinhhoc.h"
#include "Diem2D.h"
#include "Diem3D.h"
#include "Hinh2D.h"
#include "Hinh3D.h"

int main() {
	Diem2D A1(1, 2);
	Diem2D A2(0, 1);
	Diem2D A3(3, 4);
	Diem2D A4(0, 5);
	Diem3D A5(A4, 0);
	Hinh2D hinh2D(A1, A2, A3, A4);
	//A1.display();
	//A5.display();
	hinh2D.hienthi();
	system("pause");
	return 0;
}