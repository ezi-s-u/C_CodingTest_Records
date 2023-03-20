#include<stdio.h>

int main(void) {
	int num, f1 = 0, f2 = 1, f3 = 0;
	printf("몇 개의 피보나치 수열을 출력하시겠습니까\n");
	scanf_s("%d", &num);
	printf("\n0 1 ");
	for (int i = 0; i < num; i++) {
		f3 = f1 + f2;
		printf("%d ", f3);
		f1 = f2;
		f2 = f3;
	}
	return 0;
}