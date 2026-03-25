#include "logic.h"

int main() {
	int array[DEFAULT_SIZE];
	int size;
	int n;

	cout << "Input a size of array: ";
	cin >> size;
	cout << "Input an elements of array: ";
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}

	cout << (is_all_even(array, size) ? "All numbers are even." : "Not all numbers even.");
	return 0;
}