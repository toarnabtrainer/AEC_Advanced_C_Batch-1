/*
   i ->  1     2     3     4     5     6 
total =  4  +  7  +  4  +  7  +  4  +  7  + ... n terms
a + 1 = 1, a + 0 = a, a + a = a, a + a' = 1
a . 1 = a, a . 0 = 0, a . a = a, a . a' = 0
a ^ 1 = a', a ^ 0 = a, a ^ a = 0, a ^ a' = 1
4 => 100
   ^ 011 => 3
    ----
7 => 111
*/

#include <stdio.h>
#include <math.h>
int main(void) {
	int i, term, total, n;
	
	printf("\nPlease enter the number of terms of the series: ");
	scanf("%d", &n);
	total = 0;
	term = 4;
	printf("\n\nPerforming the calculations for the series formation...");
	for (i = 1; i <= n; i++) {
		total = total + term;
		printf("\nCurrent i = %d, term = %d and total = %d...", i, term, total);
		term = term ^ 3;
		// term = term + pow(-1, i + 1) * 3;
		// term = 5.5 + pow(-1, i + 1) * 1.5;
		// term = (total % 11 == 0)? 4: 7;
		// term = (term != 4)? 4: 7;
		// term = 28 / term;
		// term = 11 - term;
		// term = (i % 2 == 1)? 7: 4;
		// term = (i % 2 == 0)? 4: 7;
		// if (term == 4) term = 7;
		// else term = 4;
	}
	printf("\n\nSo the final total of the series is %d...", total);
	printf("\nEnd of the program...");
}
