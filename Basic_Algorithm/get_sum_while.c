/* Q6. �ǽ� 1-4���� while���� ����� �� ���� i ���� n + 1�� ���� Ȯ���ϼ���. */

#include<stdio.h>

int main() {
	int n;
	int i = 1, sum = 0;
	printf("1���� n������ ���� ���մϴ�.\n");
	printf("n: ");
	scanf("%d", &n);

	while (i <= n) {
		sum += i;
		i++;
	}

	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);
	printf("i: %d", i);

	return 0;
}