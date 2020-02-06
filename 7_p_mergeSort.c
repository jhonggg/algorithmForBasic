#include<stdio.h>
#define MAX 8

int sorted[MAX];

#define SWAP(a,b,temp) (temp=a, a=b, b=temp)
void merge(int* numbers, int start, int middle, int end);
void mergeSort(int* numbers, int start, int end);
void output(int* numbers);

int main(void) {

	int numbers[MAX] = { 8,7,6,5,4,3,2,1 };
	int start = 0;
	int end = MAX - 1;
	mergeSort(numbers, start, end);
	output(numbers);
}

void mergeSort(int* numbers, int start, int end) {

	if (start < end) {
		int middle = (start + end) / 2;
		mergeSort(numbers, start, middle);
		mergeSort(numbers, middle + 1, end);
		merge(numbers, start, middle, end);
	}
}

void merge(int* numbers, int start, int middle, int end) {

	int i = start;
	int j = middle + 1;
	int k = start;

	while (i <= middle && j <= end) {
		if (numbers[i] <= numbers[j]) {
			sorted[k] = numbers[i];
			i++;
		}
		else {
			sorted[k] = numbers[j];
			j++;
		}
		k++;
	}
	if (i > middle) {
		for (int t = j; t <= end; t++) {
			sorted[k] = numbers[t];
			k++;
		}
	}
	else {
		for (int t = i; t <= middle; t++) {
			sorted[k] = numbers[t];
			k++;
		}
	}

	for (int t = start; t <= end; t++) {
		numbers[t] = sorted[t];
	}
}

void output(int* numbers) {
	for (int i = 0; i < MAX; i++) {
		printf("%d ", numbers[i]);
	}
}