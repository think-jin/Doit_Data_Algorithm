/* Q7. �ǽ� 1-5 ���α׷��� �����Ͽ� n�� 7�̸� '1+2+3+4+5+6+7 = 28'�� ����ϴ� ���α׷��� �ۼ��ϼ���. */

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