/*
     i -> 1    2    3    4    5   
total = - 1! + 3! - 5! + 7! - 9! + ... n terms
   i   term1   term2
-----------------------
   1   2       3   (2 * i), (2 * i + 1)
   2   4       5
   3   6       7
-----------------------
*/
#include <stdio.h>
#include <math.h>
int main(void) {
	int n, fact, total, i, j;

	printf("\n\nPlease enter the number of terms of the series: ");
	scanf("%d", &n);
	printf("\n\nForming the series...\n");
	total = 0;
	fact = 1;
	for(i = 1; i <= n; i++) {
		total = total + pow(-1, i) * fact;
		printf("\nSo the current value of the total = %d and fact = %d...", total, fact);
		fact = fact * (2 * i) * (2 * i + 1);
	}
	
	printf("\n\nSo the final total is %d...", total);
	printf("\n\nEnd of the series...");
}

