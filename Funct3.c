#include <stdio.h>
#include <conio.h>

int main(void) {
	int my_input1(void);   // prototype declaration
	int my_input2(void);   // prototype declaration
	void my_addition(int, int);
	void my_goodbye(void);
	void my_welcome(void);
	
	my_welcome();
	my_addition(my_input1(), my_input2());
	my_goodbye();
}

void my_goodbye(void) {
	printf("\n\nEnd of the program...");
	printf("\nGood bye and have a nice day...");
}

void my_display(int n1, int n2, int re) {
	printf("\n\nSo the sum of %d and %d is %d...", n1, n2, re);
}

void my_addition(int n1, int n2) {
	printf("\n\nPerforming the addition operation...");
	my_display(n1, n2, n1 + n2);
}

int my_input1(void) {
	int number;
	printf("\nPlease enter the first integer number: ");
	scanf("%d", &number);
	return number;
}
int my_input2(void) {
	int number;
	printf("\nPlease enter the second integer number: ");
	scanf("%d", &number);
	return number;
}
void my_welcome(void) {
	printf("\nWelcome to the WORLD of C-PROGRAMMING...\n");
}
