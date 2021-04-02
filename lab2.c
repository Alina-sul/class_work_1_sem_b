#include "lab2.h"
#include "helpers.h" 
#include <stdio.h>
#define NUM 10

int* even_odd(int* a, int n, int **a_odd, int *p_even_size, int *p_odd_size);
void split_by_uppercase(char* a, int n, char** lower_case, char** upper_case, int* lower_size, int* upper_size);

void lab2() {

	//Q1
	printf("\n****************************** Q1: \n\n");

	int arrQ1[] = { 6 , 57 , 14 , 21 , 11 , 3, 22, 42 , 9 , 15 };
	int N = 10;
	int* odd_array = NULL;
	int odd_size = 0; 
	int even_size = 0;
	int* even_array = even_odd(arrQ1, N, &odd_array, &even_size, &odd_size);

	if (odd_array != NULL && even_array != NULL) {

		printf("first (even) array: \n");
		print_arr(even_array, even_size);
		printf("\nsecond (odd) array: \n");
		print_arr(odd_array, odd_size);

	}
	else {
		printf("can't print NULL array.\n");
	}
	
	free(odd_array);
	free(even_array);


	//Q2
	printf("\n\n****************************** Q2: \n\n");

	char arrQ2[6] = {'a','B','C','e','F','g'};
	char* lower_case = NULL;
	char* upper_case = NULL;
	int lower_size = 0, upper_size = 0;


	split_by_uppercase(arrQ2, 6, &lower_case, &upper_case, &lower_size, &upper_size);

	if (lower_case != NULL && upper_case != NULL) {

		printf("\nfirst (lower case) array: \n");
		print_arr_char(lower_case, lower_size);
		printf("\nsecond (upper case) array: \n");
		print_arr_char(upper_case, upper_size);

	};

	free(upper_case);
	free(lower_case);

	//Q3


}

int* even_odd(int* a, int n, int** a_odd, int* p_even_size, int* p_odd_size) {

	for (int i = 0; i < n; i++) {

		if (a[i] % 2 == 0) *p_even_size += 1;
		else *p_odd_size += 1;

	}

	int* a_even = (int*)calloc(*p_even_size, sizeof(int));
	int* odd = (int*)calloc(*p_odd_size, sizeof(int));

	for (int i = 0, e = 0, o = 0; i < n; i++) {

		if (a[i] % 2 == 0 && a_even != NULL) { a_even[e] = a[i]; e++; }
		else if (odd != NULL) { odd[o] = a[i]; o++; };

	}

	*a_odd = odd;
	return a_even;

};

void split_by_uppercase(char* a, int n, char** lower_case, char** upper_case, int* lower_size, int* upper_size) {

	for (int i = 0; i < n; i++) {
		if ((int)a[i] < 97) { *upper_size += 1; }
		else { *lower_size += 1; }
	}


	char *upper = (char*)malloc(*upper_size);
	char *lower = (char*)malloc(*lower_size);

	for (int i = 0, l = 0, u = 0; i < n; i++) {
		if ((int)a[i] < 97 && upper != NULL) { 
			upper[u] = a[i]; u++; 
			printf("lower %c ", a[i]); 
		}
		else if (lower != NULL) { lower[l] = a[i]; l++; }
	}

	print_arr_char(a,n);

	*upper_case = upper;
	*lower_case = lower;
}









