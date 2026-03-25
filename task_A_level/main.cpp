#include "logic.h"

int main() {
	int array[DEFAULT_SIZE];
	int size;
	cout << "Input a size of array: ";
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}

	cout << "Quantity of even numbers is: " << count_even(array, size);
	return 0;
}