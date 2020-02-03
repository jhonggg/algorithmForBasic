//5_3_quickSortSolution.c
/**************************************************************************
 * 파일   명칭 : 5_3_quickSortSolution.c
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

int number, data[1000001];

void quickSort(int* data, int start, int end) {
	if (start >= end) {
		return;
	}

	int key = start;
	int i = start + 1;
	int j = end;
	int temp;

	while (i <= j) {
		while (data[i] <= data[key]) {
			i++;
		}
		while (data[j] >= data[key] && j > start) {
			j--;
		}
		if (i > j) {
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else {
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}
	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
}

int main(void) {
	scanf("%d", &number);
	for (int i = 0; i < number; i++) {
		scanf("%d", &data[i]);
	}
	quickSort(data, 0, number - 1);
	for (int i = 0; i < number; i++) {
		printf("%d\n", data[i]);
	}
}