#include"Hocsinh.h"
#include<iostream>
#include<string.h>

using std::cout;
using std::endl;


Hocsinh::Hocsinh()
{
	iMahs = 445;
	//cTen[30] = "Phung Xuan Hung";
	//cNgaysinh[30] = "11/05/1995";
	//cQue[30] = "Phu Tho";
}


int Hocsinh::getMahs()
{
	return iMahs;
}


char* Hocsinh::getTen()
{
	return cTen;
}

char* Hocsinh::getNgaysinh()
{
	return cNgaysinh;
}

char* Hocsinh::getQue()
{
	return cQue;
}

//
//void Hocsinh::hienthi()
//{
//	if(iMahs!=0)
//		cout << "\n" << iMahs << "  " << cTen << "  " << cNgaysinh << "  " << cQue;
//}

void Hocsinh::hienthi()
{
	cout << "ma hoc sinh: " << iMahs << endl;
}

