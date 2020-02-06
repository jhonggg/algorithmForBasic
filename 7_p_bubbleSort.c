#include<stdio.h>

#define MAX 8
#define SWAP(a,b,temp) (temp=a, a=b, b=temp)
void bubbleSort(int* numbers);
void output(int* numbers);

int main(void) {

	int numbers[MAX] = { 8,7,6,5,4,3,2,1 };
	bubbleSort(numbers);
	output(numbers);
}

void bubbleSort(int* numbers) {

	int index, temp;

	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < (MAX-1)-i; j++) {
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