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
	string result = find_odd_number(get_odd_nums(array, size)) ? "TRUE" : "FALSE";

	print(array_str + "\n");
	print("found odd nums: " + result + "\n");

	return 0;
}