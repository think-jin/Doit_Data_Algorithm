/* A9. 정수 a,b를 포함하여 그 사이의 모든 정수의 합을 구하는 아래 함수를 작성하세요. */

#include<stdio.h>

int sumof(int a, int b) { // a와 b의 대소관계에 상관없이 합을 구하세요.
	int sum = 0;
	if (a - b > 0) {
		for (int i = b; i <= a; i++)
			sum += i;
	}
	else
		for (int i = a; i <= b; i++) {
			sum += i;
		}

	return sum;
}

int main() {
	int x, y;
	printf("input 2 integer: ");
	scanf("%d %d", &x, &y);
	
	int res = sumof(x, y);
	printf("%d 와 %d사이의 모든 정수들의 합: %d", x, y, res);

	return 0;
}