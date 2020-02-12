//CODE VERSION #2
//2020.02.12
/*
개선사항 : 각 여행가는 사람의 사용한 금액이 같아야되기 때문에 
금액 평균보다 낮은 사람에게 돈이 가야된다. 이 기능을 추가한다.
*/
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main(void) {

	int n;
	double sum = 0, devSum = 0, avg = 0;
	double backMoney;

	while (1) {
		//1.여행가는 사람 수(variable : n)를 입력한다.
		printf("여행가는 사람 수를 입력하세요.\n");
		printf(">");
		scanf("%d", &n);
		if (n == 0) break;

		double* dev = malloc(sizeof(double) * n);
		double* paidMoney = malloc(sizeof(double) * n);

		//2. 지불한 금액(variable : paidMoney)을 입력한다.
		printf("차례대로 지불한 금액을 입력하세요.\n");
		for (int i = 0; i < n; i++) {
			printf(">");
			scanf("%lf", &paidMoney[i]);
			paidMoney[i] *= 100; // 소수점 처리
			sum += paidMoney[i];
		}
		printf("\n");
		//3. 평균(variable : avg)을 구한다.
		avg = sum / n;

		//4. 편차(variable : dev)를 구한다.
		for (int i = 0; i < n; i++) {
			dev[i] = avg - paidMoney[i];
			if (dev[i] < 0) {
				dev[i] = 0;
			}
			devSum += (int)dev[i]; // int로 cast하여 소수점이하 버림
		}

		//5. 최소 전달 총 금액(variable : backMoney)을 구한다.
		backMoney = devSum / 100;

		printf("최소 지불 금액은 %.2lf입니다.\n", backMoney);

		free(dev);
		free(paidMoney);
	}
}
/*
//CODING VERSION #1
//2020.02.12
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main(void) {

	int n;
	double sum=0, devSum=0, avg=0;
	double backMoney;
	
	while (1) {
		//1.여행가는 사람 수(variable : n)를 입력한다.
		printf("여행가는 사람 수를 입력하세요.\n");
		printf(">");
		scanf("%d", &n);
		if (n == 0) break;

		double *dev = malloc(sizeof(double) * n);
		double *paidMoney = malloc(sizeof(double) * n);

		//2. 지불한 금액(variable : paidMoney)을 입력한다.
		printf("차례대로 지불한 금액을 입력하세요.\n");
		for (int i = 0; i < n; i++) {
			printf(">");
			scanf("%lf", &paidMoney[i]);
			paidMoney[i] *= 100; // 소수점 처리
			sum += paidMoney[i];
		}
		printf("\n");
		//3. 평균(variable : avg)을 구한다.
		avg = sum / n;

		//4. 편차(variable : dev)를 구한다.
		for (int i = 0; i < n; i++) {
			dev[i] = abs(paidMoney[i] - avg);
			devSum += dev[i];
		}
		//5. 최소 전달 금액(variable : backMoney)을 구한다.
		backMoney = (devSum / 2) / 100;

		printf("최소 지불 금액은 %.2lf입니다.\n", backMoney);

		free(dev);
		free(paidMoney);
	}

}
*/