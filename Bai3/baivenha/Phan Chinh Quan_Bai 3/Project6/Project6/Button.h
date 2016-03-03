#pragma once
class Button
{
private:
	int iX;
	int iY;
public:
	int iHeight;
	int iWidth;
public:
	Button(const int iX, const int iY, const int iHeight, int iWidth);
	Button();
	~Button();
	void setiX(int x);
	void setiY(int y);
	int getiX();
	int getiY();
	void display();
};

