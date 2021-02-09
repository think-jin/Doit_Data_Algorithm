/* Q6. 실습 1-4에서 while문이 종료될 때 변수 i 값이 n + 1이 됨을 확인하세요. */

#include<stdio.h>

int main() {
	int n;
	int i = 1, sum = 0;
	printf("1부터 n까지의 합을 구합니다.\n");
	printf("n: ");
	scanf("%d", &n);

	while (i <= n) {
		sum += i;
		i++;
	}

	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
	printf("i: %d", i);

	return 0;
}