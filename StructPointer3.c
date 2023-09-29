#include <stdio.h>
struct date {
	int dd;
	int mm;
	int yy;
};
struct person {
	int age;
	int sal;
	struct date doj;   // structure in structure
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
	printf("Please enter the date of date of joining of the person: ");
	scanf("%d", &pp.doj.dd);
	printf("Please enter the month of date of joining of the person: ");
	scanf("%d", &pp.doj.mm);
	printf("Please enter the year of date of joining of the person: ");
	scanf("%d", &pp.doj.yy);
	printf("\n\nsizeof(pp) = %d, sizeof(pp.sal) = %d, sizeof(pp.doj) = %d, sizeof(pp.doj.mm) = %d...",
										sizeof(pp), sizeof(pp.sal), sizeof(pp.doj), sizeof(pp.doj.mm));
	return pp;
}
void person_display(struct person ppp) {
	printf("\n\nSo the entered age is %d...", ppp.age);
	printf("\nSo the entered salary is %d...", ppp.sal);
	printf("\nSo the entered date of joining is %d-%d-%d...", ppp.doj.dd, ppp.doj.mm, ppp.doj.yy);
}
