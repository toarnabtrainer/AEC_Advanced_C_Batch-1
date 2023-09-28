// dealing with array pointer
#include <stdio.h>
int main(void) {
	int arr[10];
	void array_initialize(int []);
	void array_display(const int []);
	
	array_initialize(arr);
	array_display(arr);
	
	printf("\n\nEnd of the program...");
}
// void array_display(int c[]) {
// void array_display(int *c) {
// void array_display(int c[10000]) {
void array_display(const int c[2]) {
	int i;
	printf("\n\nDisplaying the content of the array...");
	// c[3] = 1000;
	for (i = 0; i < 10; i++) {
		printf("\nLocation number -> %d and Content -> %d, %d, %d...", i, c[i], *(c + i), i[c]);
	}	
}
void array_initialize(int b[]) {
	int i;
	printf("\n\nInitializing the content of the array...");
	for (i = 0; i < 10; i++) {
		b[i] = (i + 1) * 10 + 1;
	}
}




