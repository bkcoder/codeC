#include <iostream>
#include "Button.h"
#include "Desktop.h"

int main() {
	Button objButton(0, 0, 4, 2);
	Desktop objDesktop(0, 0, 60, 80, objButton);
	objDesktop.display();
	system("pause");
	return 0;
}