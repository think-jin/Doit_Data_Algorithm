/* Q2. 세 값의 최솟값을 구하는 min3 함수를 작성하세요. */

#include<stdio.h>

int min3(int a, int b, int c) {
	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	return min;
}

int main() {
	int a, b, c;
	printf("input 3 integer\n");
	printf("a: "); scanf("%d", &a);
	printf("b: "); scanf("%d", &b);
	printf("c: "); scanf("%d", &c);

	int res = min3(a, b, c);
	printf("min: %d", res);

	return 0;
}