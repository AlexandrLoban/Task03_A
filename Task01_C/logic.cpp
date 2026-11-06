#include "util.h"

double find_average(int* array, int size) {
	double sum = 0;

	for (int i = 0; i < size; i++) {
		sum += array[i];
	}

	return sum / size;
}

int find_amount_smaller_nums(int* array, int size, double average) {
	int count = 0;

	for (int i = 0; i < size; i++) {
		if (array[i] < average) {
			count++;
		}


	}

	return count;
}