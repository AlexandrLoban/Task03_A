#include "util.h"

int get_odd_nums(int* array, int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] % 2 != 0) {
			count++;
		}

	}

	return count;
}

bool find_odd_number(int amount_odd_nums) {
	
	return amount_odd_nums > 0;
}