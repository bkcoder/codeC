#pragma once
class Button
{
private:
	int iX;
	int iY;
	int width;
	int height;
public:
	Button(const int x, const int y, const int width, const int height);
	void Display();
	Button();
	~Button();
	int getX();
	int getY();
	int getWidth();
	int getHeight();
	void setX(int x);
	void setY(int y);
	void setWidth(int with);
	void setHeight(int height);
};

