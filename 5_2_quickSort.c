//5_2_quickSort.c
/**************************************************************************
 * 파일   명칭 : 5_2_quickSort.c
 * 기       능 : N개의 수가 주어졌을 때, 이를 오름차순으로 정렬는 프로그램
 * 함수   명칭 : main
 * 출       력 : N개의 숫자
 * 입       력 : 행렬크기, 크기에 따른 원소
 * 작   성  자 : 채 종 홍
 * 작성   일자 : 2020/02/03
**************************************************************************/
/*
백준 온라인
https://www.acmicpc.net/problem/2750

* 입력

첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000)이 주어진다. 
둘째 줄부터 N개의 줄에는 숫자가 주어진다. 
이 수는 절댓값이 1,000보다 작거나 같은 정수이다. 
수는 중복되지 않는다.

* 출력
첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 
한 줄에 하나씩 출력한다.

*/
#include <stdio.h>

#define MAX 1000000
#define SWAP(a,b,temp) ((temp)=(a)),((a)=(b)),((b)=(temp))

void input(int(*numbers), int size);
void quickSort(int(*numbers), int size, int start, int end);
void output(int(*numbers), int size);

int main(int argc, char* argv[]) {

	int(*numbers);
	int size = 0;
	int start = 0;
	scanf("%d", &size);
    
	int end = size - 1;
	numbers = (int*)malloc(sizeof(int) * size);
	input(numbers, size);

	quickSort(numbers, size, start, end);
	output(numbers, size);

	free(numbers);
	return 0;
}

void input(int(*numbers), int size) {
    scanf("%d", numbers + i);
    /*
	for (int i = 0; i < size; i++) {
		while (1) {
			scanf("%d", numbers + i);
			if (numbers[i] >= 1 && numbers[i] <= MAX) {
				break;
			}
		}
	}
    */
}
void quickSort(int(*numbers), int size, int start, int end) {
	
	if (start >= end) {
		return;
	}

	int key = start;
	int low = start + 1;
	int high = end;
	int temp;

	while (low <= high) {
		while (numbers[low] <= numbers[key]) {
			low++;
		}
		while (numbers[high] >= numbers[key] && high > start) {
			high--;
		}

		if (low > high) {
			SWAP(numbers[high], numbers[key], temp);
		}
		else {
			SWAP(numbers[low], numbers[high], temp);
		}
	}
	quickSort(numbers, size, start, high - 1);
	quickSort(numbers, size, high + 1, end);
}
void output(int(*numbers), int size) {
	for (int i = 0; i < size; i++) {
		printf("%d\n", numbers[i]);
	}
}