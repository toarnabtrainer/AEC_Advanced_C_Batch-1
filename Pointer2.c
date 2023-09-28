#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int i;
	int *ptr;
	
	// printf("\n\n&ptr = %x, ptr = %x and *ptr = %d...", &ptr, ptr, *ptr);
	
	if ((ptr = (int *) malloc(sizeof(int))) == NULL) {  // malloc() returns void * means generic pointer, so typecasting is must
		printf("\nNot enough memory to allocate buffer...");
		exit(1);   // terminate the program if out of memory
	}
	
	printf("\n\nAfter memory allocation using malloc() function...");
	printf("\n&ptr = %x, ptr = %x and *ptr = %d...", &ptr, ptr, *ptr);
	*ptr = 500;
	printf("\n&ptr = %x, ptr = %x and *ptr = %d...", &ptr, ptr, *ptr);
	
	printf("\n\nAfter ptr initialization with int variable allocated address...");
	i = 500;
	ptr = (int *)&i;
	printf("\n&i = %x, i = %d, &ptr = %x, ptr = %x and *ptr = %d...", &i, i, &ptr, ptr, *ptr);
	
	printf("\n\nEnd of the program...");
}
