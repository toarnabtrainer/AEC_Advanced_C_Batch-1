// C:\Program Files (x86)\Dev-Cpp\MinGW64\x86_64-w64-mingw32\include

#include "stdio.h"
#include "conio.h"
#include "myheader.h"

int main(void) {
	int num1, num2, result;
	
	my_welcome();
	num1 = my_input();
	num2 = my_input();
	result = my_addition(num1, num2);
	my_display(num1, num2, result);
	my_goodbye();
}

