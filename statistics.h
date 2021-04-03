#ifndef STATISTICS_DOT_H 
#define STATISTICS_DOT_H 

#include "student_processed_data.h";

typedef struct Statistics
{
    student_processed_data* group1_above_or_avg;
    student_processed_data* group2_below_avg;
    int size_group1_above_or_avg;
    int size_group2_above_or_avg;
    double total_average;

} statistics;

#endif 