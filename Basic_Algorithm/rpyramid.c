/* Q18. �����ʰ� ���� �Ʒ��� ���� n���� ���� �Ƕ�̵带 ����ϴ� �Լ��� �ۼ��ϼ���. */

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