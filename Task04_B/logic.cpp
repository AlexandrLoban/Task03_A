#include "util.h"

bool number_is_multiple(int number, int div) {
	return number % div == 0;
}

int number_of_multiples(int* array, int size, int user_num) {
	int count = 0;

	for (int i = 0; i < size; i++) {
		if (number_is_multiple(array[i], user_num)) {
			count++;

		}

	}

	return count;
}