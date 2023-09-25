#include <stdio.h>
#include <conio.h>

int num1, num2, result;   // global variables

int main(void) {	
	void my_input(int);   // prototype declaration
	void my_addition(void);
	void my_display(void);
	void my_goodbye(void);
	void my_welcome(void);
	
	my_welcome();
	my_input(1);
	my_input(2);
	my_addition();
	my_display();
	my_goodbye();
}

void my_goodbye(void) {
	printf("\n\nEnd of the program...");
	printf("\nGood bye and have a nice day...");
}

void my_display(void) {
	printf("\n\nSo the sum of %d and %d is %d...", num1, num2, result);
}

void my_addition(void) {
	printf("\n\nPerforming the addition operation...");
	result = num1 + num2;
}

void my_input(int turn) {
	int number;
	if (turn == 1) {
		printf("\nPlease enter the first integer number: ");
		scanf("%d", &num1);
	} else {
		printf("\nPlease enter the second integer number: ");
		scanf("%d", &num2);
	}
}

void my_welcome(void) {
	printf("\nWelcome to the WORLD of C-PROGRAMMING...\n");
}
