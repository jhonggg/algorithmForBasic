//5_1_selectionSort.c
/**************************************************************************
 * 파일   명칭 : 5_1_selectionSort.c
 * 기       능 : N개의 수가 주어졌을 때, 이를 오름차순으로 정렬는 프로그램
 *               (선택정렬 : 가장 작은 값을 선택해서 앞으로 보내는 정렬 방식)
 * 함수   명칭 : main
 * 출       력 : 10개의 숫자
 * 입       력 : 없음
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
#include<stdio.h>

#define MAX 1000

typedef unsigned long int ULong

void input(ULong (*numbers), ULong size);
void selectionSort(ULong (*numbers));
void output(ULong (*numbers));

int main(int argc, char *argv[]){

    ULong numbers[MAX];
    ULong size;

    input(numbers);
    selectionSort(numbers);
    output(numbers);

    return 0;
}


void input(ULong (*numbers)){

    
    
    for(int i=0; i<MAX; i++){
        scanf("%d", numbers + i);
        if(1 <= numbers && numbers <= MAX){
            scanf("%d", numbers + i)
        }
    }
}
void selectionSort(ULong (*numbers)){

}
void output(ULong (*numbers)){

}