#include<stdio.h>

int max(int a, int b, int c);

int main() {

	return 0;
}

max(int a, int b, int c) {
	int res = 0;
	if (a > b && a > c) {
		res = a;
	}
	else if (b > a && b > c) {
		res = b;
	}
	else {
		res = c;
	}
	return res;
}