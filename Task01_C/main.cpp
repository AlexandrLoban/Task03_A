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

	init_array(array, size, -40, 40);
	double average = find_average(array, size);

	string arr_str = convert(array, size);

	print("Your array: " + arr_str + "\n");
	print("Average: " + to_string(average) + "\n");
	print("amount of smaller nums: "
		+ to_string(find_amount_smaller_nums(array, size, average)) + "\n");

	return 0;
}