#include "util.h"

int main() {
	srand(time(NULL));

	int size;
	int array[DEFAULT_SIZE];

	do {
		system("cls");
		print("Input size of your array: ");
		cin >> size;
	} while (size <0 or size > DEFAULT_SIZE);

	init_array(array, size, -50, 50);
	string array_str = convert(array, size);

	print(array_str + "\n");
	print("Amount of zero nums: " + to_string(get_zero_nums(array, size)) + "\n");


	return 0;
}