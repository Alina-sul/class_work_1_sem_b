#include "lab2.h"
#include <stdio.h>

int* even_odd(int* a, int n, int **a_odd, int *p_even_size, int *p_odd_size);
void print_arr2(int a[], int n);

void lab2() {

	//Q1
	printf("Q1: \n\n");

	int arrQ1[] = { 6 , 57 , 14 , 21 , 11 , 3, 22, 42 , 9 , 15 };
	int N = 10;
	int* odd_array;
	int odd_size = 0; 
	int even_size = 0;
	int* even_array = even_odd(arrQ1, N, &odd_array, &even_size, &odd_size);

	printf("even %d, od %d\n\n", even_size, odd_size);

	printf("first (even) array: \n");
	print_arr2(even_array, even_size);
	printf("\nsecond (odd) array: \n");
	print_arr2(odd_array, odd_size);
	
	free(odd_array);
	free(even_array);

}

int* even_odd(int* a, int n, int** a_odd, int* p_even_size, int* p_odd_size) {

	for (int i = 0; i < n; i++) {

		if (a[i] % 2 == 0) *p_even_size += 1;
		else *p_odd_size += 1;

	}

	int* a_even = (int*)calloc(*p_even_size, sizeof(int));
	int* odd = (int*)calloc(*p_odd_size, sizeof(int));

	for (int i = 0, e = 0, o = 0; i < n; i++) {

		if (a[i] % 2 == 0) { a_even[e] = a[i]; e++; }
		else { odd[o] = a[i]; o++; };

	}

	*a_odd = odd;
	return a_even;

};

//Helper functions
void print_arr2(int a[], int n) {

	for (int i = 0; i < n; i++) {
		printf("%d, ", a[i]);
	}
	printf("\n");
}
