#include "logic.h"

int count_big_than_mid(int array[DEFAULT_SIZE], int size) {
	int big_than_mid = 0;
	int mid = 0;
	int num_mid = 0;

	for (int i = 0; i < size; i++)
	{
		num_mid = num_mid + array[i];
	}

	mid = num_mid / size;

	for (int i = 0; i < size; i++)
	{
		if (array[i] > mid) {
			big_than_mid++;
		}
	}
	return big_than_mid;
}
