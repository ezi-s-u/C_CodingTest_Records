#include<stdio.h>

int CelToFah(int c) {
	return 1.8 * c + 32;
}

int main() {
	printf("ȭ�� �µ� : %d",CelToFah(5));
	return 0;
}