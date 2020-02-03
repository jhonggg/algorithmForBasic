//4_quickSort.c
/**************************************************************************
 * 파일   명칭 : 4_quickSort.c
 * 기       능 : 10개의 숫자를 퀵정렬한다.
 *               (퀵정렬 : 원소를 두 집합으로 나눠 정렬하는 방식)
 * 함수   명칭 : main
 * 출       력 : 10개의 숫자
 * 입       력 : 없음
 * 작   성  자 : 채 종 홍
 * 작성   일자 : 2020/02/03
 * 시간 복잡도 : N(logN), logN : 1/2를 뜻함 
**************************************************************************/
#include <stdio.h>

#define MAX 10
#define SWAP(a, b, temp) ((temp)=(a)),((a)=(b)),((b)=(temp))
void quickSort(int(*numbers));
void output(int(*numbers));

int main(int argc, char* argv[]) {
	int numbers[MAX] = { 1,10,5,8,7,6,4,3,2,9 };
	quickSort(numbers, 0, MAX-1);
	output(numbers);

	return 0;
}

void quickSort(int(*numbers), int start, int end) {
	//원소가 1개인 경우
	if(start >= end){
		return;
	}
	//키는 첫번째 원소
	int key = start;
	int low = start+1;
	int high = end;
	int temp;

	// 엇갈릴 때까지 반복한다.
	while(low <= high){
		while(numbers[low] <= numbers[key]){
			low++;
		}
		while(numbers[high] >= numbers[key] && high > start){
			high--;
		}
		if(low > high){
			SWAP(numbers[high], numbers[key], temp);
		}else{
			SWAP(numbers[low], numbers[high], temp);
		}
	}
	quickSort(numbers, start, high-1);
	quickSort(numbers, high+1, end);
}
void output(int(*numbers)) {
	for (int i = 0; i < MAX; i++) {
		printf("%d ", numbers[i]);
	}
	printf("\n");
}