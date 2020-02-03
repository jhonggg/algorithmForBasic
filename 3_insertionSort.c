//3_insertionSort.c
/**************************************************************************
 * 파일   명칭 : 3_insertionSort.c
 * 기       능 : 10개의 숫자를 삽입정렬한다.
 *               (삽입정렬 : 우측 숫자와 비교하여 정렬하지만 이미 탐색한 곳은
 *                정렬이 되있음을 가정함)
 * 함수   명칭 : main
 * 출       력 : 10개의 숫자
 * 입       력 : 없음
 * 작   성  자 : 채 종 홍
 * 작성   일자 : 2020/02/03
**************************************************************************/
#include <stdio.h>

#define MAX 10
#define SWAP(a, b, temp) ((temp)=(a)),((a)=(b)),((b)=(temp))
void insertionSort(int(*numbers));
void output(int(*numbers));

int main(int argc, char* argv[]) {

	int numbers[MAX] = { 1,10,5,8,7,6,4,3,2,9 };
	insertionSort(numbers);
	output(numbers);

	return 0;
}

void insertionSort(int(*numbers)) {
    int j = 0;
	int temp = 0;
	for (int i = 0; i < MAX-1; i++) {
        j = i;
        while(numbers[j] > numbers[j+1]){
            SWAP(numbers[j], numbers[j+1], temp);
            j--;
        }
	}
}
void output(int(*numbers)) {
	for (int i = 0; i < MAX; i++) {
		printf("%d ", numbers[i]);
	}
	printf("\n");
}