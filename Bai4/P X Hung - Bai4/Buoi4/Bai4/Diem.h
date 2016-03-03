#pragma once

#if !defined _DIEM_H_
#define _DIEM_H_

#include<iostream>
using std::cout;
using std::endl;

class Diem
{

private:
	int iX;
	int iY;

public:
	Diem(const int x, const int y);
	Diem();
	~Diem();

	void hienthi();
};

#endif