#include "logic.h"

int count_even(int array[DEFAULT_SIZE], int size) {
	int even = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[i] % 2 == 0) {
			even++;
		}
	}
	return even;
}
