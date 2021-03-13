#include <stdio.h>
#include <stdlib.h>

void print_arr(int a[], int n);

//EX1
void rebuiled_array_min(int* arr, int n);
//EX2
void odd_and_even_arrays(int* arr, int n);

void main() {

	int arr[] = { 10, 10, 20, 30, 30, 30, 42, 42, 42, 51, 64, 64, 77 }; //EX1
	
	print_arr(arr, 13);
	rebuiled_array_min(arr, 13);

	int arr[] = { 6 , 57 , 14 , 21 , 11 , 3, 22, 42 , 9 , 15 }; //EX2


}

//EX1
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

	print_arr(new_arr, count_unique+1);
	free(new_arr);

}

void odd_and_even_arrays(int* arr, int n)
{
	int count_odd = 0, count_even = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) count_even++;
		else count_odd++;
	};

	int *odd_arr, *even_arr;
	odd_arr = (int*)calloc(count_odd, sizeof(int));



}

//Helper functions

void print_arr(int a[], int n) {

	for (int i = 0; i < n; i++) {
		printf("%d, ", a[i]);
	}
	printf("\n");
}
