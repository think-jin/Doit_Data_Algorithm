/* Q14. �����ʰ� ���� �Է��� ���� �� ������ �ϴ� ���簢���� * ��ȣ�� ����ϴ� ���α׷��� �ۼ��ϼ���. */

#include<stdio.h>

int main() {

	int n;
	printf("�簢���� ����մϴ�.\n");
	printf("�Է��� ��: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}