#ifndef SIGNAL_STD_FUNCS_H
#define SIGNAL_STD_FUNCS_H

int compare(const void* a, const void* b);
double* remove_duplicates(double* arr, int size, int* new_size);
double calculate_standard_deviation(double* values, int size);
double distance(int m, double ***list_of_matrices, int i, int j, int k, int a, int b, int c, int distance_type);
double* calculate_distance_m(double*** signal_array, int i, int j, int k, int m, int num_rows, int num_cols, int num_matrices, int distance_type);
double distance_m(double*** signal_array, int m, int num_rows, int num_cols, int num_matrices, int distance_type, double sampleo);

#endif