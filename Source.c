#include "lab1.h","lab2.h"
#include <stdio.h>
#include <stdlib.h>

void main() {

	int lab_num;
	printf("Choose lab: ");
	scanf_s("%d", &lab_num);

	switch (lab_num) {

		case 1:
			lab1();
			break;
		case 2:
			lab2();
			break;
		default: 
			printf("No matching results found.\n");

	}
	

}