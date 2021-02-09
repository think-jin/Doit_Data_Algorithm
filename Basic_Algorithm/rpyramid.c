/* Q18. 오른쪽과 같이 아래를 향한 n단의 숫자 피라미드를 출력하는 함수를 작성하세요. */

#include<stdio.h>

void nrpira(int n) {
	for (int i = 1; i <= n; i++) {
		for (int k = 0; k < i-1; k++)
			printf(" ");
		for (int j = 2 * (n - i) + 1; j > 0; j--)
			printf("%d", i % 10);
		printf("\n");
	}
}

int main() {

	nrpira(10);

	return 0;
}