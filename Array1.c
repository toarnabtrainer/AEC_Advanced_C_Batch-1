// dealing with menu driven array operations
#include <stdio.h>
int arr[10], n, maxloc;

int main(void) {
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
