#include<iostream>
#include"Button.h"
#include"Desktop.h"

using std::cout;
using std::endl;

int main()
{
	Button objButton(0, 0, 4, 2);

	objButton.Display();

	Desktop objDesktop(0, 0, 60, 80, objButton);
	objDesktop.hienthi();

	system("pause");
	return 0;
}