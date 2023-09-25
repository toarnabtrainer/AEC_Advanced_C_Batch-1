#include <stdio.h>
#include <conio.h>

int main(void) {
	int num1, num2, result;
	int my_input(void);   // prototype declaration
	int my_addition(int, int);
	void my_display(int, int, int);
	void my_goodbye(void);
	void my_welcome(void);
	
	my_welcome();
	num1 = my_input();
	num2 = my_input();
	result = my_addition(num1, num2);
	my_display(num1, num2, result);
	my_goodbye();
}

void my_goodbye(void) {
	printf("\n\nEnd of the program...");
	printf("\nGood bye and have a nice day...");
}

void my_display(int n1, int n2, int re) {
	printf("\n\nSo the sum of %d and %d is %d...", n1, n2, re);
}

int my_addition(int n1, int n2) {
	printf("\n\nPerforming the addition operation...");
	return n1 + n2;
}

int my_input(void) {
	int number;
	printf("\nPlease enter one integer number: ");
	scanf("%d", &number);
	return number;
}

void my_welcome(void) {
	printf("\nWelcome to the WORLD of C-PROGRAMMING...\n");
}
