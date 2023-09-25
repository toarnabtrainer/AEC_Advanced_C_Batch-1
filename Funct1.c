#include <stdio.h>
#include <conio.h>

int main(void) {
	int num1, num2, result;
	
	printf("Welcome to the WORLD of C-PROGRAMMING...");
	
	printf("\nPlease enter the first number: ");
	scanf("%d", &num1);
	
	printf("\nPlease enter the second number: ");
	scanf("%d", &num2);
	
	result = num1 + num2;
	
	printf("\nSo the sum of %d and %d is %d...", num1, num2, result);
	
	printf("\nEnd of the program...");
}
