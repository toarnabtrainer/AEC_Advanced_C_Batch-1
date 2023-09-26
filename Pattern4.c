/*
user input n = 11 (ODD Number)      m = (n + 1) / 2 = 6
                   i    .    *
                -----------------
.....*             1    5    1       (n, i, m)
....***            2    4    3  . => (m - i)
...*****           3    3    5
..*******          4    2    7  * => (2 * i - 1)
.*********         5    1    9
***********     ___6____0___11___
.*********         7    1    9
..*******          8    2    7  . => (i - m)
...*****           9    3    5
....***           10    4    3  * => (2 * (n - i) + 1)
.....*            11    5    1
                -----------------
                  Tracing Table
*/                  
#include <stdio.h>
int main(void) {
	int i, j, n, m, s, b;
	while(1) {
		printf("\n\nPlease enter the number ODD of layers: ");
		scanf("%d", &n);
		if (n % 2 == 1) break;
	}
	m = (n + 1) / 2;
	for (i = 1; i <= n; i++) {
		if (i > m) {
			b = (i - m);
			s = (2 * (n - i) + 1);
		} else { 
			b = (m - i);
			s = (2 * i - 1);
		}
		for (j = 1; j <= b; j++) printf(".");
		for (j = 1; j <= s; j++) printf("*");
		printf("\n");
	}
	printf("\n\nEnd of the pattern printing...");
}




