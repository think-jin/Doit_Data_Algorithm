/* Q8. 1부터 10까지의 합은 (1+10) * 5와 같은 방법으로 구할 수 있습니다. 가우스의 덧셈이라는 이 방법을 이용하여 1부터 n까지의 정수 합을 구하는 프로그램을 작성하세요. */

#include<stdio.h>

int sum_by_gauss(int n) {
	if (n % 2 == 0)
		return (1 + n) * n / 2;
	else
		return (1 + n) * (n / 2 + 1);
}

int main() {
	int n;
	printf("input n: ");
	scanf("%d", &n);

	int res = sum_by_gauss(n);
	printf("sum(1~%d): %d", n, res);

	return 0;
}