/* Q10. �����ʰ� ���� �� ���� a,b�� ������ �Է��ϰ� b - a�� ����ϴ� ���α׷��� �ۼ��ϼ���.
   ��, ���� b�� �Է��� ���� a ���ϸ� ���� b�� ���� �ٽ� �Է��ϼ���. */

#include<stdio.h>

int main() {
	int a, b;
	printf("a�� ��: "); scanf("%d", &a);
	while (1) {
		printf("b�� ��: "); scanf("%d", &b);
		if (b > a) break;
		printf("a���� ū ���� �Է��ϼ���!\n");
	}

	printf("b - a�� %d�Դϴ�.", b - a);

	return 0;
}