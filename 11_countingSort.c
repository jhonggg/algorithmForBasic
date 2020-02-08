#include<stdio.h>
#define NUMBERS 5
#define MAX 30

int main(void) {
	int temp;
	int count[NUMBERS];
	int array[MAX] = { 1,3,2,4,3,2,5,3,1,2,
					   3,4,4,3,5,1,2,3,5,2,
					   3,1,4,3,5,1,2,1,1,1 };
					   
	for (int i = 0; i < NUMBERS; i++) {
		count[i] = 0;
	}
	for (int i = 0; i < MAX; i++) {
		count[array[i] - 1]++;
	}
	for (int i = 0; i < NUMBERS; i++) {
		if (count[i] != 0) {
			for (int j = 0; j < count[i]; j++) {
				printf("%d", i + 1);
			}
		}
	}

}