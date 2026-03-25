#include "logic.h"

int main() {
	int array[DEFAULT_SIZE];
	int size;
	int n;
	cout << "Input N: ";
	cin >> n;
	cout << "Input a size of array: ";
	cin >> size;
	cout << "Input an elements of array: ";
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}

	cout << "Quantity of smaller numbers than N: " << count_N(array, size, n);
	return 0;
}