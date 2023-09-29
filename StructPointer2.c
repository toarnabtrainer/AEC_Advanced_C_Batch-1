#include <stdio.h>
struct person {
	int age;
	int sal;
};
int main(void) {
	struct person p;
	struct person person_input(void);
	void person_display(struct person);
	
	p = person_input();
	person_display(p);
	
	printf("\n\nEnd of the program...");
}
struct person person_input() {
	struct person pp;
	
	printf("\n\nPlease enter the age of the person: ");
	scanf("%d", &pp.age);
	printf("Please enter the salary of the person: ");
	scanf("%d", &pp.sal);
	
	return pp;
}
void person_display(struct person ppp) {
	printf("\n\nSo the entered age is %d...", ppp.age);
	printf("\nSo the entered salary is %d...", ppp.sal);
}
