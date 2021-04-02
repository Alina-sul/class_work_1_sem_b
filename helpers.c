#include "helpers.h"

void print_arr(int *a, int n) {

	for (int i = 0; i < n; i++) {
		printf("%d, ", a[i]);
	}
	printf("\n");
}

void print_arr_char(char *a, int n) {

	for (int i = 0; i < n; i++) {
		printf("%c, ", a[i]);
	}
	printf("\n");
}