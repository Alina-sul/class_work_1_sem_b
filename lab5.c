#include "lab5.h"
#include "helpers.h"
#include "student_init_data.h"
#include "student_processed_data.h"
#include "statistics.h"
#include <stdio.h>
#include <stdlib.h>

#define NUM 3

//Q1

int* Input_Data(int num_of_exams); //return array of grades
double Student_Average(int* grades_array);// return Average grade of the recieved array
double Total_Average(int* all_avg);//recieve dynamic arrray of all averages and calculates total average
void Classification(student_init_data* init_students_data, int size_init_students_data, statistics* stats);
//Classify each student according to the student's average grade
void Print_Tab(statistics); //print an elemnt of type 'statistics'
void Free_Memory(int *ptr_arr, int size_ptr_arr);

//HELPERS

void Print_Tab(statistics stats); //prints an element of type 'statistics'
void Free_Memory(int* arr, int n);


void lab5() {

	student_init_data students_init_data_arr[NUM];

	printf("Please enter students data. \n\n");

	for (int i = 0; i < NUM; i++) {
		
		printf("Enter id: ");
		scanf_s("%d", &students_init_data_arr[i].id);
		
		printf("\nEnter number of exams: ");
		scanf_s("%d", &students_init_data_arr[i].num_of_exams);
		
		int* grades = (int*)calloc(students_init_data_arr[i].num_of_exams, sizeof(int)); // FREE LATER!

		printf("\nEnter grades: ");
		for (int j = 0; j < students_init_data_arr[i].num_of_exams; j++) {
			scanf_s("%d", &grades[j]);
		}


		students_init_data_arr[i].grades = *grades;

	}




}