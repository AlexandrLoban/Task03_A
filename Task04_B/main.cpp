#include "util.h"

int main() {
	srand(time(NULL));

	int size;
	int array[DEFAULT_SIZE];
	int divisible;

	do {
		system("cls");
		print("Input size of your array: ");
		cin >> size;
	} while (size <0 or size > DEFAULT_SIZE);

	init_array(array, size, -50, 50);

	string arr_str = convert(array, size);

	print(arr_str + "\n");
	print("Enter divisible: ");
	cin >> divisible;
	print("number_of_multiples: " + to_string(number_of_multiples(array, size, divisible)));

	return 0;
}