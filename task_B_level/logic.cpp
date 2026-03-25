#include "logic.h"

int count_N(int array[DEFAULT_SIZE], int size, int n) {
	int small_n = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[i] < n) {
			small_n++;
		}
	}
	return small_n;
}
