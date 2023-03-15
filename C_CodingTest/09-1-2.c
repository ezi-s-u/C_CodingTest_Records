#include<stdio.h>

double CelToFah(int c) {
	return 1.8 * c + 32;
}

double FahToCel(int f) {
	return (f - 32) / 1.8;
}

int main() {
	printf("화씨 온도로 변환한 값 : %.1f\n",CelToFah(5));
	printf("섭씨 온도로 변환한 값 : %.1f\n", FahToCel(10));
	return 0;
}