/* A9. ���� a,b�� �����Ͽ� �� ������ ��� ������ ���� ���ϴ� �Ʒ� �Լ��� �ۼ��ϼ���. */

#include<stdio.h>

int sumof(int a, int b) { // a�� b�� ��Ұ��迡 ������� ���� ���ϼ���.
	int sum = 0;
	if (a - b > 0) {
		for (int i = b; i <= a; i++)
			sum += i;
	}
	else
		for (int i = a; i <= b; i++) {
			sum += i;
		}

	return sum;
}

int main() {
	int x, y;
	printf("input 2 integer: ");
	scanf("%d %d", &x, &y);
	
	int res = sumof(x, y);
	printf("%d �� %d������ ��� �������� ��: %d", x, y, res);

	return 0;
}