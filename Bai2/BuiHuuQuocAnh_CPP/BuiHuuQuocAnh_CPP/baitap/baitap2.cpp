#include<iostream>
#include "Hocsinh.h"
#include "HoTen.h"

int main() {
	Ngaysinh ngaysinh1(12, 4, 1995);
	HoTen hoten1("Bui", "Huu", "Quoc Anh");
	Hocsinh hocsinh1("B112102098", hoten1, ngaysinh1, "Ha Dong Ha Noi");
	hocsinh1.Hienthi();

	system("pause");
	return 0;
}