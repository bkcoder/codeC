#pragma once

#if !defined _HinhHoc_H_
#define _HinhHoc_H_

class HinhHoc
{

private:
	int iX;
	int iY;

public:
	HinhHoc();
	HinhHoc(int iX, int iY);
	~HinhHoc();

	//virtual void getArea() const = 0;

	void hienthi();
};

#endif