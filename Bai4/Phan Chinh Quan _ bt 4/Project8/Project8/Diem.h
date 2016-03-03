#pragma once
#if !defined _DIEM_H_
#define _DIEM_H_
class Diem
{
private:
	int iX;
	int iY;
public:
	Diem();
	Diem(int ,int );
	~Diem();
	void display();
	int getX();
	int getY();
};
#endif
