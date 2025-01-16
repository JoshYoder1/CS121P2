#include <stdio.h>

void printValues(int*);
//void sort(int*);
void swap(int*,int*);

int main(){
	int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
	printf("before:\n");
	printValues(values);

	// test swap
	int x = 3;
	int y = 5;
	printf("x: %d, y: %d \n", x,y);
	swap(&x, &y);
	printf("x: %d, y: %d \n", x,y);
/*
	sort(values);
	printf("After: \n");
	printValues(values);
*/
	return 0;
} // end main

void printValues(int* list){
	for (int i = 0; i < 9; i++) {
	       printf("%d ", list[i]);
	}
	printf("\n");	
}

void swap(int* px, int* py){
	int a = *px;
	*px = *py;
	*py = a;
}

// Some parts were coded with help from a friend
