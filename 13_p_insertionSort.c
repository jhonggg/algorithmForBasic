#include<stdio.h>
#define MAX 5

int main(int argc, char* argv[]) {

	int temp;
	int array[MAX] = { 1,7,8,3,5 };
	for (int i = 1; i < MAX; i++) {
		for (int j = i; j > 0; j--) {
			if (array[j - 1] > array[j]) {
				temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
			}
		}
	}
	for (int k = 0; k < MAX; k++) {
		printf("%d ", array[k]);
	}

	return 0;
}