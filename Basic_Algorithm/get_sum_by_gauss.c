/* Q8. 1���� 10������ ���� (1+10) * 5�� ���� ������� ���� �� �ֽ��ϴ�. ���콺�� �����̶�� �� ����� �̿��Ͽ� 1���� n������ ���� ���� ���ϴ� ���α׷��� �ۼ��ϼ���. */

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