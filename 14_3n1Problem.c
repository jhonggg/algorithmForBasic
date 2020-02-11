#include<stdio.h>
#define SWAP(a,b,temp) (temp=a, a=b, b=temp)

typedef unsigned long int ulong;

int main(int argc, char* argv[]) {

	ulong lbound, ubound;
	ulong lbOrg, ubOrg;
	ulong cnt = 1, maxCnt = 0;
	ulong remainder, temp;
    lbOrg = lbound;
		ubOrg = ubound;
		maxCnt = cnt;
        
	while (scanf_s("%ld %ld", &lbound, &ubound) == 2) {

		if (lbound > ubound) {
			SWAP(lbound, ubound, temp);
		}
		
		
		for (int i = lbound; i <= ubound; i++) {
			int j = i;
			cnt = 1;
			while (j != 1) {
				int remainder = j % 2;
				if (remainder == 0) {
					j = j / 2;
				}
				else {
					j = j * 3 + 1;
				}
				cnt++;
			}
			if (cnt > maxCnt) {
				maxCnt = cnt;
			}
		}
		printf("%d %d %d\n", lbOrg, ubOrg, maxCnt);
	}
	return 0;
}

//SOLUTION
/*
#include <stdio.h>
void main(void){
    long lbound, ubound, lbOrg, ubOrg, temp;
    long i, j, length, max_length;

    while(scanf("%ld %ld", &lbound, &ubound)==2){
        lbOrg = lbound;
        ubOrg = ubound;
        if(lbound > ubound){
            temp = lbound;
            lbound = ubound;
            ubound = temp;
        }
        max_length = 0;
        for (i = lbound; i <= ubound; i++){
            j=i;
            length = 1;
            while(j!=1){
                if(j&1){
                    j = j * 3 +1;
                    length++;
                }
                while(!(j & 1)){
                    j >> = 1;
                    length++;
                }
            }
            if(length > max_length){
                max_length = length;
            }
            printf("%ld %ld %ld\n", lbOrg, ubOrg, max_length);
        }
    }
}

*/