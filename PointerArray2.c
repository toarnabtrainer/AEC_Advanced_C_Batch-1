// dealing with menu driven array operations
#include <stdio.h>
int main(void) {
	int arr[10], n, choice, maxloc;
	void arr_initialize(int [], int *, int);
	void arr_insert(int [], int *, int);
	void arr_delete(int [], int *);
	void arr_sort(int [], int);
	void arr_search(const int [], int);
	void arr_update(int [], int);
	void arr_display(const int [], int);
	void arr_quit(void);
	int arr_menu(void);
	
	choice = 0;
	maxloc = 10;
	n = 0;
	while (choice != 8) {
		choice = arr_menu();
		switch(choice) {
			case 1:
				arr_initialize(arr, &n, maxloc);
				break;
			case 2:
				arr_insert(arr, &n, maxloc);
				break;
			case 3:
				arr_delete(arr, &n);
				break;
			case 4:
				arr_search(arr, n);
				break;
			case 5:
				arr_sort(arr, n);
				break;
			case 6:
				arr_update(arr, n);
				break;
			case 7:
				arr_display(arr, n);
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

void arr_initialize(int a[], int *nn, int maxl) {
	int i;
	printf("\n\nArray INITIALIZE Operation has been selected...");
	printf("\nPlease enter the number of items (Less than 10): ");
	scanf("%d", nn);
	if (*nn > maxl) {
		printf("\nINVALID value has been provided...");
	} else {
		printf("\nNow enter %d number of data items...\n", *nn);
		for(i = 0; i < *nn; i++) {
			printf("Enter data for location number %d --> ", i);
			scanf("%d", &a[i]);
		}
		printf("\n\nINITIALIZE Operation has been completed successfully...");
	}
}
/*
  Index ->   0   1   2   3   4   5   6   7   8   9 
  Data  ->  34  45  23  17  46  99  21  76  ..  ..
                     ^
                     |
                    99 
  n = 8, loc = 2, item = 99
  Source Location (7 to 2) -> Target Location (8 to 3)
  Source Location (n-1 to loc) -> Target Location (n to loc+1)
  i => Source Location
  for i = (n-1) to loc step -1
     arr[i+1] = arr[i] 
  i => Target Location
  for i = n to (loc+1) step -1
     arr[i] = arr[i-1] 
*/
void arr_insert(int a[], int *nn, int maxl) {
	int loc, item, i;
	printf("\n\nArray INSERT Operation has been selected...");
	if (*nn == maxl) {
		printf("\n\nO V E R F L O W !!!");
		printf("\nNo Space for INSERT Operation...");
	} else {
		printf("\n\nPlease enter the location number: ");
		scanf("%d", &loc);
		printf("Please enter the item value to be inserted: ");
		scanf("%d", &item);
		printf("\nPerforming insertion of %d at location %d...", item, loc);
		for (i = *nn; i >= (loc + 1); i--) {
			a[i] = a[i - 1];
		}
		a[loc] = item;
		(*nn)++;
		printf("\n\nINSERT Operation has been completed successfully...");
	}
}
/*
  Index ->   0   1   2   3   4   5   6   7   8   9 
  Data  ->  34  45  23  17  46  99  21  76  ..  ..
                     ^
                     |
                    item = ? 
  n = 8, loc = 2, item = ???
  Source Location (3 to 7) -> Target Location (2 to 6)
  Source Location (loc+1 to n-1) -> Target Location (loc to n-2)
  i => Source Location
  for i = (loc+1) to n-1 step 1
     arr[i-1] = arr[i] 
  i => Target Location
  for i = loc to (n-2) step 1
     arr[i] = arr[i+1] 
*/
void arr_delete(int a[], int *nn) {
	int loc, item, i;
	printf("\n\nArray DELETE Operation has been selected...");
	if (*nn == 0) {
		printf("\n\nU N D E R F L O W !!!");
		printf("\nNo data for DELETE Operation...");
	} else {
		printf("\n\nPlease enter the location number: ");
		scanf("%d", &loc);
		item = a[loc];
		printf("\nPerforming deletion of %d at location %d...", item, loc);
		for (i = (loc + 1); i <= (*nn - 1); i++) {
			a[i - 1] = a[i];
		}
		(*nn)--;
		printf("\n\nDELETE Operation has been completed successfully...");
	}
}
/*
BUBBLE_SORT_ALGORITHM ARR(1:N)
for i = 1 to (n - 1)
	for j = 1 to (n - i)
		if (arr[j] > arr[j + 1])
			swap a[j], a[j + 1]
		end if
	end for
end for
*/
void arr_sort(int a[], int nn) {
	int i, j, temp;
	printf("\n\nArray SORT Operation has been selected...");
	for (i = 1; i <= (nn - 1); i++) {
		for (j = 1; j <= (nn - i); j++) {
			if (a[j - 1] > a[j]) {
				temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\n\nSORT Operation has been completed successfully...");
}
void arr_search(const int a[], int nn) {
	int i, item;
	printf("\n\nArray SEARCH Operation has been selected...");
	printf("\nPlease enter your search item: ");
	scanf("%d", &item);
	for (i = 0; i < nn; i++) {
		if (a[i] == item) {
			printf("\n\n%d has been found successfully at location %d...", item, i);
			break;
		}
	}
	if (i == nn) {
		printf("\n\nData item %d has not been found in the array...", item);
	}
	printf("\n\nSEARCH Operation has been completed successfully...");
}
void arr_update(int a[], int nn) {
	int i, item, new_item;
	printf("\n\nArray UPDATE Operation has been selected...");
	printf("\nPlease enter your search item: ");
	scanf("%d", &item);
	printf("\nPlease enter your search item: ");
	scanf("%d", &new_item);
	for (i = 0; i < nn; i++) {
		if (a[i] == item) {
			printf("\n\n%d has been found successfully at location %d...", item, i);
			a[i] = new_item;
			printf("\n\n%d has been used to update the content of the location %d...", new_item, i);
			break;
		}
	}
	if (i == nn) {
		printf("\n\nData item %d has not been found in the array...", item);
	}
	printf("\n\nUPDATE Operation has been completed successfully...");
}
void arr_display(const int a[], int nn) {
	int i;
	printf("\n\nArray DISPLAY Operation has been selected...");
	if (nn == 0) {
		printf("\nArray is EMPTY...");
		printf("\nDISPLAY Operation can not be carried out...");
	} else {
		printf("\nDisplaying the current content of the array...\n");
		for (i = 0; i < nn; i++) {
			printf("\nLocation Number -> %d and Content -> %d...", i, a[i]);
		}
		printf("\n\nDISPLAY Operation has been completed successfully...");
	}
}
void arr_quit(void) {
	printf("\n\nArray QUIT Operation has been selected...");
	printf("\nEnd of the program...");
}








