/* Q17. n���� �Ƕ�̵带 ����ϴ� �Լ��� �ۼ��ϼ���. */

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