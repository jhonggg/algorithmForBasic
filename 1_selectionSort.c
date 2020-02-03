//1_selectionSort.c
/**************************************************************************
 * 파일   명칭 : 1_selectionSort.c
 * 기       능 : 10개의 숫자를 선택정렬한다.
 * 함수   명칭 : main
 * 출       력 : 10개의 숫자
 * 입       력 : 없음
 * 작   성  자 : 채 종 홍
 * 작성   일자 : 2020/02/03
**************************************************************************/
#include <stdio.h>

#define MAX 10
#define SWAP(a, b, temp) ((temp)=(a), (a)=(b), (b)=(temp))

void Arrage(int(*numbers));
void Output(int(*numbers));

int main(int argv, char* argc[]) {
    //1. 수를 입력한다.
	int numbers[MAX] = {1,10,5,8,7,6,4,3,2,9};
    //2. 수를 정렬한다.
	Arrage(numbers);
    //3. 수를 출력한다.
	Output(numbers);
	return 0;
}

void Arrage(int(*numbers)) {

	int temp;
	for (int i = 0; i < MAX - 1; i++) {
		for (int j = i + 1; j < MAX; j++) {
			if (numbers[i] > numbers[j]) {
				SWAP(numbers[i], numbers[j], temp);
				/*
				temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
				*/
			}
		}
	}
}

void Output(int(*numbers)) {
	for (int i = 0; i < MAX; i++) {
		printf("%d ", numbers[i]);
	}
	printf("\n");
}