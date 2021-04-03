#include "lab5.h"
#include "helpers.h"
#include "student_init_data.h"
#include "student_processed_data.h"
#include "statistics.h"
#include <stdio.h>
#include <stdlib.h>

//Q1
int* Input_Data(int num_of_exams); //return array of grades
double Student_Average(int* grades_array);// return Average grade of the recieved array
double Total_Average(int* all_avg);//recieve dynamic arrray of all averages and calculates total average
void Classification(student_init_data* init_students_data, int size_init_students_data, statistics* stats);
//Classify each student according to the student's average grade
void Print_Tab(statistics); //print an elemnt of type 'statistics'
void Free_Memory(int *ptr_arr, int size_ptr_arr);






void lab5() {

}