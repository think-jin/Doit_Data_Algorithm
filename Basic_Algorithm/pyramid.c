/* Q17. n단의 피라미드를 출력하는 함수를 작성하세요. */

#include<stdio.h>

void spira(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++)
			printf(" ");
		for (int k = 1; k <= 2 * i - 1; k++)
			printf("*");
		printf("\n");
	}
}

int main() {

	spira(4);

	return 9;
}