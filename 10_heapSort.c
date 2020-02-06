//you should try again....dammmmmm

#include <stdio.h>
#define SWAP(a,b,temp) (temp=a, a=b, b=temp)
int number = 9;
int heap[9] = { 7,6,5,8,3,5,9,1,6 };

int main(void) {
	//1. 최대 힙 구조로 만든다.
	for (int i = 1; i < number; i++) {
		//1.2. 자식 노드를 지정한다.
		int c = i;
		do {
			//1.3. 루트 노드를 지정한다.
			int root = (c - 1) / 2;
			//1.4. 만약 루트 노드가 자식 노드보다 작다면
			if (heap[root] < heap[c]) {
				int temp;
				//1.4.1. 위치를 교환한다.
				SWAP(heap[root], heap[c], temp);
			}
			//1.2. 자식 노드를 지정한다.
			c = root;
		} while (c != 0);
	}
	//2. 크기를 줄여가며 반복적으로 힙을 구성
	for (int i = number - 1; i >= 0; i--) {
		int temp;
		//2.1. 루트 노드의 값을 가장 마지막 노드의 값과 교환
		SWAP(heap[0], heap[i], temp);
		int root = 0;
		int c = 1;
		//2.2. 최대 힙 구조를 다시 재구성한다.
		do {
			//2.3. 자식 노드를 지정한다.
			c = 2 * root + 1;
			//2.4. 자식 중에 더 큰 값을 찾는다.
			if(heap[c] < heap[c+1] && c < i - 1){
				c++;
			}
			//2.5. 만약 루트 노드가 자식 보다 작다면
			if (heap[root] < heap[c] && c < i) {
				int temp;
				//2.5.1. 위치를 교환한다.
				SWAP(heap[root], heap[c], temp);
			}
			root = c;
		} while (c < i);
	}
}