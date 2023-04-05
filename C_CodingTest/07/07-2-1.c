#include<stdio.h>

int main(void) {
	int res = 0, i = 0, total = 0;
	while (i < 5) {
		printf("정수를 입력하세요 : ");
		scanf_s("%d", &res);
		while (res <= 0) {
			printf("0보다 큰 수를 입력하세요 : ");
			scanf_s("%d", &res);
		}
		total += res;
		res = 0;
		i++;
	}
	printf("%d", total);

	return 0;
}
