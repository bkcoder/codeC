#include"Button.h"
#include"Desktop.h"
#include<conio.h>
int main()
{
	Button objButton(0, 0, 4, 2);
	Desktop objDesktop(0, 0, 60, 80, objButton);
	objDesktop.Display();
	_getch();
}