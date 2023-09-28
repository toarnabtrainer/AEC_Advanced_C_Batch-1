/*
int *ptr;  means ptr is a variable, which holds a memory location's address and the data type of the content
of that address is an integer quantity.

char *ptr;  means ptr is a variable, which holds a memory location's address and the data type of the content
of that address is a character quantity.

double *ptr;  means ptr is a variable, which holds a memory location's address and the data type of the content
of that address is a double quantity.
             488   232   104  40
1000 = 512 + 256 + 128 + 64 + 32 + 8 = 0000 0000 0000 0000 0000 0011 1110 1000 = -24 = -(0001 0111 + 1) = -(0001 1000) = -24
                                       --------- --------- --------- ---------
                                        Byte-3    Byte-2    Byte-1    Byte-0
                                        (4003)    (4002)    (4001)    (4000)
                                        (0)       (0)       (3)       (232 = -24)
             188   60   28   12
700  = 512 + 128 + 32 + 16 + 8 + 4 = 0000 0000 0000 0000 0000 0010 1011 1100 = -68 = -(0100 0011 + 1) = -(0100 0100) = -68
                                     --------- --------- --------- ---------
                                      Byte-3    Byte-2    Byte-1    Byte-0
                                      (4003)    (4002)    (4001)    (4000)
                                      (0)       (0)       (2)       (188 = -68)
                                      
             88   24
600  = 512 + 64 + 16 + 8 = 0000 0000 0000 0000 0000 0010 0101 1000
                           --------- --------- --------- ---------   low endian
                             Byte-3    Byte-2    Byte-1    Byte-0
                             (4003)    (4002)    (4001)    (4000)
                             (0)       (0)       (2)       (88)
*/

#include <stdio.h>

int main(void) {
	int i;
	int *ptr;
	char *ch_ptr;
	
	i = 700;
	ptr = &i;
	
	printf("\n\n&i = %x, i = %d, &ptr = %x, ptr = %x, *ptr = %d...", &i, i, &ptr, ptr, *ptr);
	printf("\n&i = %X, i = %d, &ptr = %X, ptr = %X, *ptr = %d...", &i, i, &ptr, ptr, *ptr);
	printf("\nsizeof(i) = %d, sizeof(ptr) = %d and sizeof(*ptr) = %d...", sizeof(i), sizeof(ptr), sizeof(*ptr));
	
	ch_ptr = (char *)&i;
	
	printf("\n\n&i = %x, i = %d, &ch_ptr = %x, ch_ptr = %x, *ch_ptr = %d...", &i, i, &ch_ptr, ch_ptr, *ch_ptr);
	printf("\n&i = %X, i = %d, &ch_ptr = %X, ch_ptr = %X, *ch_ptr = %d...", &i, i, &ch_ptr, ch_ptr, *ch_ptr);
	printf("\nsizeof(i) = %d, sizeof(ch_ptr) = %d and sizeof(*ch_ptr) = %d...", sizeof(i), sizeof(ch_ptr), sizeof(*ch_ptr));
	
	printf("\n\n*ch_ptr = %d...", *ch_ptr);
	printf("\n*(ch_ptr + 1) = %d...", *(ch_ptr + 1));
	printf("\n*(ch_ptr + 2) = %d...", *(ch_ptr + 2));
	printf("\n*(ch_ptr + 3) = %d...", *(ch_ptr + 3));
	
	printf("\n\nCurrent address in ptr = %x...", ptr);
	ptr++;
	printf("\nCurrent address in ptr = %x...", ptr);
	++ptr;
	printf("\nCurrent address in ptr = %x...", ptr);
	ptr += 1;
	printf("\nCurrent address in ptr = %x...", ptr);
	ptr = ptr + 1;
	printf("\nCurrent address in ptr = %x...", ptr);
	
	printf("\n\nCurrent address in ch_ptr = %x...", ch_ptr);
	ch_ptr++;
	printf("\nCurrent address in ch_ptr = %x...", ch_ptr);
	++ch_ptr;
	printf("\nCurrent address in ch_ptr = %x...", ch_ptr);
	ch_ptr += 1;
	printf("\nCurrent address in ch_ptr = %x...", ch_ptr);
	ch_ptr = ch_ptr + 1;
	printf("\nCurrent address in ch_ptr = %x...", ch_ptr);
		
	printf("\n\nEnd of the program...");
}














