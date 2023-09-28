// demonstration of call-by-value and call-by-reference
#include <stdio.h>

int main(void) {
	int a, b;
	void update_call_by_value(int, int);
	void update_call_by_reference(int *, int *);
	
	a = 100;
	b = 200;
	
	printf("\n\nAddress of &a = %x and &b = %x...", &a, &b);
	printf("\nBefore calling the function in main() a = %d and b = %d...",a, b);
	update_call_by_value(a, b);
	printf("\n\nAfter calling the function in main() a = %d and b = %d...",a, b);
	
	printf("\n\n************************************************************************");
	
	printf("\n\nAddress of &a = %x and &b = %x...", &a, &b);
	printf("\nBefore calling the function in main() a = %d and b = %d...",a, b);
	update_call_by_reference(&a, &b);   // passing address as a value, i.e call_by_address
	printf("\n\nAfter calling the function in main() a = %d and b = %d...",a, b);
	
	printf("\n\nEnd of the program...");
}

void update_call_by_value(int aa, int bb) {  // call-by-value function
	printf("\n\nExecuting function update_call_by_value()...");
	printf("\nAddress of &aa = %x and &bb = %x...", &aa, &bb);
	printf("\nBefore update aa = %d and bb = %d...", aa, bb);
	aa = 111;
	bb = 222;
	printf("\nAfter update aa = %d and bb = %d...", aa, bb);
}

void update_call_by_reference(int *aa, int *bb) {  // call-by-reference function
	printf("\n\nExecuting function update_call_by_reference()...");
	printf("\nAddress of &aa = %x and &bb = %x...", &aa, &bb);
	printf("\nAddress in aa = %x and bb = %x...", aa, bb);
	printf("\nBefore update *aa = %d and *bb = %d...", *aa, *bb);
	*aa = 111;
	*bb = 222;
	printf("\nAfter update *aa = %d and *bb = %d...", *aa, *bb);
}
