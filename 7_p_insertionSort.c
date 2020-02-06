#include<stdio.h>

#define MAX 8
#define SWAP(a,b,temp) (temp=a, a=b, b=temp)
void insertionSort(int* numbers);
void output(int* numbers);

int main(void) {

	int numbers[MAX] = { 8,7,6,5,4,3,2,1 };
	insertionSort(numbers);
	output(numbers);
}

void insertionSort(int* numbers) {

	int index, temp;

	for (int i = 0; i < MAX-1; i++) {
		for (int j = i; j >= 0; j--) {
			if (numbers[j] > numbers[j + 1]) {
				SWAP(numbers[j], numbers[j + 1], temp);
			}
		}
	}
}
void output(int* numbers) {
	for (int i = 0; i < MAX; i++) {
		printf("%d ", numbers[i]);
	}
}