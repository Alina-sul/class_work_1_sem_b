#include "lab1.h" 
#include "helpers.h"
#include <stdio.h>
#include <stdlib.h>

//Q1
void rebuiled_array_min(int* arr, int n);
//Q2
void odd_and_even_arrays(int* arr, int n);

void lab1() {

	printf("************************ Q1: \n\n");
	int arr[] = { 10, 10, 20, 30, 30, 30, 42, 42, 42, 51, 64, 64, 77 }; //Q1

	print_arr(arr, 13);
	rebuiled_array_min(arr, 13);

	printf("\n\n************************ Q2: \n\n");
	int arr2[] = { 6 , 57 , 14 , 21 , 11 , 3, 22, 42 , 9 , 15 }; //Q2
	print_arr(arr2, 10);

	odd_and_even_arrays(arr2, 10);

}

//Q1
void rebuiled_array_min(int* arr, int n)
{
	int count_unique = 0;

	for (int i = 1; i < n; i++) {
		if (arr[i] != arr[i - 1]) count_unique++;
	}

	printf("count %d\n", count_unique);


	int* new_arr;
	new_arr = (int*)calloc(count_unique + 1, sizeof(int));

	for (int i = 1, j = 0; i < n;) {

		if (i + 1 <= n && arr[i] != arr[i + 1]) {
			if (new_arr != NULL) {
				new_arr[j] = arr[i];
				j++;
				i++;
			}
		}
		else i++;
	}

	print_arr(new_arr, count_unique + 1);
	free(new_arr);

}
//Q2
void odd_and_even_arrays(int* arr, int n)
{
	int count_odd = 0, count_even = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) count_even++;
		else count_odd++;
	};

	int* odd_arr, * even_arr;
	odd_arr = (int*)calloc(count_odd, sizeof(int));
	even_arr = (int*)calloc(count_even, sizeof(int));

	for (int i = 0, e = 0, o = 0; i < n; i++) {

		if (arr[i] % 2 == 0) {
			if (even_arr != NULL) {
				even_arr[e] = arr[i];
				e++;
			}

		}
		else {
			if (odd_arr != NULL) {
				odd_arr[o] = arr[i];
				o++;
			}
		}

	}

	printf("EVEN: \n");
	print_arr(even_arr, count_even);
	printf("ODD: \n");
	print_arr(odd_arr, count_odd);

	free(odd_arr);
	free(even_arr);

}


