#include "logic.h"

int get_zero_nums(int* array, int size) {
	int amount = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] == 0) {
			amount++;
		}
	}

	return amount;
}