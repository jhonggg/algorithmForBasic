#include<stdio.h>

#define MAX 8
#define SWAP(a,b,temp) (temp=a, a=b, b=temp)
void quickSort(int* numbers, int start, int end);
void output(int* numbers);

int main(void) {

	int numbers[MAX] = { 8,7,6,5,4,3,2,1 };
	quickSort(numbers, 0, MAX - 1);
	output(numbers);
}

void quickSort(int* numbers, int start, int end) {

	if (start >= end) {
		return 0;
	}

	int low = start+1;
	int high = end;
	int pivot = start;
	int temp;
	
	while (low <= high) {
		while (numbers[low] <= numbers[pivot]) {
			low++;
		}
		while (numbers[high] >= numbers[pivot] && high > start) {
			high--;
		}

		if (low > high) {
			SWAP(numbers[high], numbers[pivot], temp);
		}
		else {
			SWAP(numbers[high], numbers[low], temp);
		}
	}
	quickSort(numbers, start, high - 1);
	quickSort(numbers, high+1, end);
}
void output(int* numbers) {
	for (int i = 0; i < MAX; i++) {
		printf("%d ", numbers[i]);
	}
}