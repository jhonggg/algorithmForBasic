#include<stdio.h>

#define MAX 8
#define SWAP(a,b,temp) (temp=a, a=b, b=temp)
void selectionSort(int* numbers);
void output(int* numbers);

int main(void) {

	int numbers[MAX] = { 8,7,6,5,4,3,2,1 };
	selectionSort(numbers);
	output(numbers);
}

void selectionSort(int* numbers) {

	int index, temp;

	for (int i = 0; i < MAX; i++) {
		int min = 9999;
		for (int j = i; j < MAX; j++) {
			if (min > numbers[j]) {
				min = numbers[j];
				index = j;
			}
		}
		SWAP(numbers[i], numbers[index], temp);
	}

}
void output(int* numbers) {
	for (int i = 0; i < MAX; i++) {
		printf("%d ", numbers[i]);
	}
}