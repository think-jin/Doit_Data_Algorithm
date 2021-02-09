/* Q1. 네 값의 최댓값을 구하는 함수 max4를 작성하세요. */

#include<stdio.h>

int max4(int a, int b, int c, int d) {
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if (d > max) max = d;

	return max;
}

int main() {
	int a, b, c, d;
	printf("input 4 integer\n");
	printf("a: "); scanf("%d", &a);
	printf("b: "); scanf("%d", &b);
	printf("c: "); scanf("%d", &c);
	printf("d: "); scanf("%d", &d);

	int res = max4(a, b, c, d);
	printf("max: %d", res);

	return 0;
}