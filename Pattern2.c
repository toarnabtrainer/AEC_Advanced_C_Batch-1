
user input n = 6   
                   i    .    *
                -----------------
***********        1    0   11       (n, i)
.*********         2    1    9  . => (???)
..*******          3    2    7
...*****           4    3    5  * => (???)
....***            5    4    3
.....*             6    5    1
                -----------------
                  Tracing Table
*/                  
#include <stdio.h>
int main(void) {
	int i, j, n;
	printf("\n\nPlease enter the number of layers: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= (???); j++) printf(".");
		for (j = 1; j <= (???); j++) printf("*");
		printf("\n");
	}
	printf("\n\nEnd of the pattern printing...");
}




