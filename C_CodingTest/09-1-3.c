#include<stdio.h>

int main(void) {
	int num, fi = 0, fi2 = 1;
	printf("몇 개의 피보나치 수열을 출력하시겠습니까\n");
	scanf_s("%d", &num);
	printf("\n0 1");
	for (int i = 0; i < num; i++) {
		fi += fi2;
		fi2 = fi;
		printf("%d ", fi);
	}
	return 0;
}