/* Q3. �� ���� �ּڰ��� ���ϴ� �Լ� min4�� �ۼ��ϼ���. */

#include<stdio.h>

int min4(int a, int b, int c, int d) {
	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	if (d < min) min = d;

	return min;
}

int main() {
	int a, b, c, d;
	printf("input 4 integer\n");
	printf("a: "); scanf("%d", &a);
	printf("b: "); scanf("%d", &b);
	printf("c: "); scanf("%d", &c);
	printf("d: "); scanf("%d", &d);

	int res = min4(a, b, c, d);
	printf("min: %d", res);

	return 0;
}