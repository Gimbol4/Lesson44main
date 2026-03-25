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

	cout << "Quantity of bigger numbers than mid: " << count_big_than_mid(array, size);
	return 0;
}