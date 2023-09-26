/*
   i ->  1     2     3     4     5     6 
total =  4  +  7  +  4  +  7  +  4  +  7  + ... n terms
*/

#include <stdio.h>
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
		if (term == 4) term = 7;
		else term = 4;
	}
	printf("\n\nSo the final total of the series is %d...", total);
	printf("\nEnd of the program...");
}
