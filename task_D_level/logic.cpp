#include "logic.h"

int is_all_even(int array[DEFAULT_SIZE], int size) {
	bool is_even = true;

	for (int i = 0; i < size; i++)
	{
		if (array[i] % 2 == 1) {
			is_even = false;
			break;
		}
	}
	return is_even;
}
