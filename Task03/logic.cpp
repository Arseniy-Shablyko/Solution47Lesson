// Среднее арифметическое неэкстремальных элементов
// [The arithmetic mean of non - extreme elements]
//
// Дан вектор натуральных чисел. Необходимо разработать 
// функцию, которая вычисляет среднее рифметическое элементов
// вектора без учета минимального и максимального элементов.
#include "logic.h"
int find_min(int* array, int size) {
	int min = array[0];
	for (int i = 1; i < size; i++) {
		if (min < array[i]) {
			min = array[i];
		}
	}
	return min;
}

int find_max(int* array, int size) {
	int max = array[0];
	for (int i = 1; i < size; i++) {
		if (max > array[i]) {
			max = array[i];
		}
	}
	return max;
}

int calculate_sum(int* array, int size) {
	int sum = 0;
	int max = find_max(array, size);
	int min = find_min(array, size);
	for (int i = 0; i < size; i++) {
		if ((array[i] != max) && (array[i] != min)) {
			sum += array[i];
		}
	}

	return sum;
}

int count_not_extrem_numbers(int* array, int size) {
	int sum = 0;
	int max = find_max(array, size);
	int min = find_min(array, size);
	for (int i = 0; i < size; i++) {
		if ((array[i] != max) && (array[i] != min)) {
			sum += array[i];
		}
	}

	return sum;
}

double calculate_arithmetical_mean_of_nonextreme_elements(int* array, int size) {
	if (size < 1) {
		return 0;
	}

	int sum = calculate_sum(array, size);
	double arithmetical_mean = ((sum / 1.0) / size);
	return arithmetical_mean;
}