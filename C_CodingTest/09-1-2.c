#include<stdio.h>

double CelToFah(int c) {
	return 1.8 * c + 32;
}

double FahToCel(int f) {
	return (f - 32) / 1.8;
}

int main() {
	printf("ȭ�� �µ��� ��ȯ�� �� : %.1f\n",CelToFah(5));
	printf("���� �µ��� ��ȯ�� �� : %.1f\n", FahToCel(10));
	return 0;
}