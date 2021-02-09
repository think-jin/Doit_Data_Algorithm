/* Q7. 실습 1-5 프로그램을 참고하여 n이 7이면 '1+2+3+4+5+6+7 = 28'로 출력하는 프로그램을 작성하세요. */

#include<stdio.h>

int main() {
	int n;
	int sum = 0;
	
	printf("input n: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum += i;
		if (i == n) {
			printf("%d = %d", i, sum);
			continue;
		}
		printf("%d+", i);
	}

	return 0;
}