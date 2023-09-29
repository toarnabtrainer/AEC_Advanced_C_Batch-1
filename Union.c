#include <stdio.h>
/*
            338   82   18
850 = 512 + 256 + 64 + 16 + 2 = 0000 0000 0000 0000 0000 0011 0101 0010
                                --------- --------- --------- --------- int_var (850)
                                                              --------- char_var (82 / 'R')
                  65 = 64 + 1 =                               0100 0001 char_var (65 / 'A')                                                             
                                0000 0000 0000 0000 0000 0011 0100 0001 = 512 + 256 + 65 = 33                              
*/
typedef union {
	int int_var;
	char char_var;
} my_data;

int main(void) {
	my_data union_var;
	
	printf("\n\nInitializing the union variable int_var...");
	union_var.int_var = 850;
	
	printf("\n\nThe current value in union_var.int_var = %d...", union_var.int_var);
	printf("\nThe current value in union_var.char_var = %d and %c...",
											union_var.char_var, union_var.char_var);
	
	printf("\n\nInitializing the union variable char_var...");
	union_var.char_var = 'A';
	
	printf("\n\nThe current value in union_var.int_var = %d...", union_var.int_var);
	printf("\nThe current value in union_var.char_var = %d and %c...",
											union_var.char_var, union_var.char_var);
	
	printf("\n\nEnd of the program...");
}
