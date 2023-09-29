#include <stdio.h>
struct person {
	int age;
	int sal;
};

int main(void) {
	struct person p;
	
	printf("\n\nPlease enter the age of the person: ");
	scanf("%d", &p.age);
	printf("Please enter the salary of the person: ");
	scanf("%d", &p.sal);
	
	printf("\n\nSo the entered age is %d...", p.age);
	printf("\nSo the entered salary is %d...", p.sal);
	
	printf("\n\nSo sizeof(p) = %d, sizeof(p.age) = %d and sizeof(p.sal) = %d...",
										 sizeof(p), sizeof(p.age), sizeof(p.sal));
	
	printf("\n\nEnd of the program...");
}
