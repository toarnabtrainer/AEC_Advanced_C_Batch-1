
// total = 1! + 2! + 3! + 4! + 5! + ... n terms

#include <stdio.h>
int main(void) {
	int n, fact, total, i, j;

	printf("\n\nPlease enter the number of terms of the series: ");
	scanf("%d", &n);
	printf("\n\nForming the series...\n");
	total = 0;
	for(i = 1; i <= n; i++) {
		fact = 1;
		for (j = 1; j <= i; j++) fact = fact * j;
		total = total + fact;
		printf("\nSo the current value of the total = %d and fact = %d...", total, fact);
	}
	printf("\n\nSo the final total is %d...", total);
	printf("\n\nEnd of the series...");
}
