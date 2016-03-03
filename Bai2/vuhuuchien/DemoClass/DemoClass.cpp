#include<iostream>
#include"NgaySinh.h"
#include"Student.h"
#include<conio.h>
int main()
{
	/*NgaySinh ngaysinh1;
	ngaysinh1.hienthi("mm/dd/yyyy");
	_getch();
	return 0;*/
//Hiển thị thông tin trước lúc set
	Student hs1(1,"chien","23/10/1994","Nam Dinh");
	std::cout << "-Truoc Khi Set:";
	hs1.hienthi();
//Hiển thị thông tin sau khi set giá trị
	std::cout << "\n-Sau Khi Set:";
	hs1.setMsv(2);
	hs1.setHoten("Phong");
	hs1.setNgaysinh("18/3/1995");
	hs1.setQuequan("Hai Phong");
	hs1.hienthi();
	_getch();
}