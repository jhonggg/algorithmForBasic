//SOLUTION #1
//http://codingdojang.com/scode/421?orderby=time&langby=cpp
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>	
int main(void) {
	
	int row, col;
	scanf("%d %d", &row, &col);
	char** map = malloc(sizeof(char*)*(row+2));
	char* temp = malloc(sizeof(char)*(col + 2));

	//Initialization row value
	for (int i = 0; i < row + 2; i++)
	{
		map[i] = malloc(sizeof(char) * (col + 2));
		if (i = 0 || (i == row + 1))
			memset(map[i], '.', sizeof(char) * (col + 2));
	}

	//Initialization col value 
	for (int i = 1; i < row + 1; i++) {
		scanf("%s", temp);
		for (int j = 1; j < col; j++) {
			map[i][j] = temp[j - 1];
			map[i][0] = '.';
			map[i][col + 1] = '.';
		}
	}

	//Searching land mine and count this
	for (int i = 1; i < row + 1; i++) {
		for (int j = 1; j < col + 1; j++) {
			if (map[i][j] != '*') {
				char cnt = 0;
				for (int p = i - 1; p < row + 1; p++) {
					for (int q = j - 1; j < col + 1; q++) {
						if (map[p][q] == '*') {
							cnt++;
						}
					}
				}
				map[i][j] = cnt + 48;
			}
			else {
				continue;
			}
		}
	}

	//Output
	for (int i = 1; i < row + 1; i++) {
		for (int j = 1; j < col + 1; j++) {
			printf("%s", map[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < row + 2; i++)
		free(map[i]);
	free(map);
	free(temp);
	return 0;
}


/*
#include<stdio.h>
#define INT_MINE 42 //cast to integer of '*'
#define INT_NOMINE 45 //cast to integer of '-'
int main(void) {
	
	int row, col;
	int cnt = 0;
	//1. 입력이 없을 때까지 row와 col을 입력받는다.
	while(scanf_s("%d %d", &row, &col) == 2){
		int **array = malloc(sizeof(int*) * row);
		for (int i = 0; i < row; i++) {
			array[i] = malloc(sizeof(int) * col);
		}
		//2. i가 row보다 작을 때 반복한다.
		for (int i = 0; i < row; i++) {
			//2.1. '*'(지뢰) 혹은 '-'(지뢰없음)을 입력받는다.
			cnt++;
			for (int j = 0; j < col; j++) {
				scanf_s("%d", &array);
			}
			printf("\n");
		}
		for (int i = 0; i < row; i++) {
			printf("Field #%d\n", cnt);
			for (int j = 0; j < col; j++) {
				printf("%d ", array[i][j]);
			}
			printf("\n");
		}
	}
}

//3. 필드 메시지를 출력한다.
//4. i가 row보다 작을때 반복한다.
//4.1. j가 col보다 작을때 반복한다.
//4.1.1. '*'이라면 j에 1을 더한다.
//4.1.2. '-'이라면 주변지뢰개수를 센다.
//4.1.2.1. 주변지뢰개수를 출력한다.
//5. 끝낸다.
*/