// dealing with menu driven array operations
#include <stdio.h>
int arr[10], n, maxloc;

int main(void) {
	void arr_initialize(void);
	void arr_insert(void);
	void arr_delete(void);
	void arr_sort(void);
	void arr_search(void);
	void arr_update(void);
	void arr_display(void);
	void arr_quit(void);
	int arr_menu(void);
	
	int choice = 0;
	maxloc = 10;
	while (choice != 8) {
		choice = arr_menu();
		switch(choice) {
			case 1:
				arr_initialize();
				break;
			case 2:
				arr_insert();
				break;
			case 3:
				arr_delete();
				break;
			case 4:
				arr_search();
				break;
			case 5:
				arr_sort();
				break;
			case 6:
				arr_update();
				break;
			case 7:
				arr_display();
				break;
			case 8:
				arr_quit();
				break;
		}
	}
}

int arr_menu(void) {
	int ch = 0;
	while (ch < 1 || ch > 8) {
		printf("\n\nM A I N  M E N U ...");
		printf("\n--------------------");
		printf("\n1 >  I N I T I A L I Z E  O P E R A T I O N ...");
		printf("\n2 >  I N S E R T  O P E R A T I O N ...");
		printf("\n3 >  D E L E T E  O P E R A T I O N ...");
		printf("\n4 >  S E A R C H  O P E R A T I O N ...");
		printf("\n5 >  S O R T  O P E R A T I O N ...");
		printf("\n6 >  U P D A T E  O P E R A T I O N ...");
		printf("\n7 >  D I S P L A Y  O P E R A T I O N ...");
		printf("\n8 >  Q U I T  O P E R A T I O N ...");
		printf("\n\nPlease enter your choice number: ");
		scanf("%d", &ch);
	}
	return ch;
}

void arr_initialize(void) {
	int i;
	printf("\n\nArray INITIALIZE Operation has been selected...");
	printf("\nPlease enter the number of items (Less than 10): ");
	scanf("%d", &n);
	if (n > 10) {
		printf("\nINVALID value has been provided...");
	} else {
		printf("\nNow enter %d number of data items...\n", n);
		for(i = 0; i < n; i++) {
			printf("Enter data for location number %d --> ", i);
			scanf("%d", &arr[i]);
		}
		printf("\n\nINITIALIZE Operation has been completed successfully...");
	}
}
void arr_insert(void) {
	printf("\n\nArray INSERT Operation has been selected...");
}
void arr_delete(void) {
	printf("\n\nArray DELETE Operation has been selected...");
}
void arr_sort(void) {
	printf("\n\nArray SORT Operation has been selected...");
}
void arr_search(void) {
	printf("\n\nArray SEARCH Operation has been selected...");
}
void arr_update(void) {
	printf("\n\nArray UPDATE Operation has been selected...");
}
void arr_display(void) {
	int i;
	printf("\n\nArray DISPLAY Operation has been selected...");
	if (n == 0) {
		printf("\nArray is EMPTY...");
		printf("\nDISPLAY Operation can not be carried out...");
	} else {
		printf("\nDisplaying the current content of the array...\n");
		for (i = 0; i < n; i++) {
			printf("\nLocation Number -> %d and Content -> %d...", i, arr[i]);
		}
		printf("\n\nDISPLAY Operation has been completed successfully...");
	}
}
void arr_quit(void) {
	printf("\n\nArray QUIT Operation has been selected...");
	printf("\nEnd of the program...");
}








