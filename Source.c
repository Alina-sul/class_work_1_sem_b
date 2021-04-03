#include "lab1.h"
#include "lab2.h"
#include "lab3.h"
#include "lab5.h"
#include <stdio.h>

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
		case 3:
			lab3();
			break;
		case 5:
			lab5();
			break;
		default: 
			printf("No matching results found.\n");

	}
	

}