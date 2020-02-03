//2_bubbleSort.c
/**************************************************************************
 * 파일   명칭 : 2_bubbleSort.c
 * 기       능 : 10개의 숫자를 버블정렬한다.
 *               (버블정렬 : 우측값과 비교하며 정렬하는 방식)
 * 함수   명칭 : main
 * 출       력 : 10개의 숫자
 * 입       력 : 없음
 * 작   성  자 : 채 종 홍
 * 작성   일자 : 2020/02/03
**************************************************************************/
#include <stdio.h>

#define MAX 10
#define SWAP(a, b, temp) ((temp)=(a)),((a)=(b)),((b)=(temp))
void bubbleSort(int(*numbers));
void output(int(*numbers));

int main(int argc, char* argv[]) {

	int numbers[MAX] = { 1,10,5,8,7,6,4,3,2,9 };
	bubbleSort(numbers);
	output(numbers);

	return 0;
}

void bubbleSort(int(*numbers)) {

	int temp = 0;
	int j = 0;
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < (MAX - 1) - i; j++) {
			if (numbers[j] > numbers[j+1]) {
				SWAP(numbers[j], numbers[j+1], temp);
			}
			printf("\n");
		}
	}
}
void output(int(*numbers)) {
	for (int i = 0; i < MAX; i++) {
		printf("%d ", numbers[i]);
	}
	printf("\n");
}