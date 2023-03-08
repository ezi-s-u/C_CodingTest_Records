#include<stdio.h>

int main(void) {
	int arr[5] = { 0 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	int max = 0, min = 0, total = 0;

	for (int i = 0; i < arrSize; i++) {
		scanf_s("%d", &arr[i]);
	}
}