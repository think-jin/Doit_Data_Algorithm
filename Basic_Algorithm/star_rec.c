/* Q14. �����ʰ� ���� �Է��� ���̿� �ʺ� �´� ���簢���� * ��ȣ�� ����ϴ� ���α׷��� �ۼ��ϼ���. */

#include<stdio.h>

int main() {

	int n, m;
	printf("���簢���� ����մϴ�.\n");
	printf("����: ");
	scanf("%d", &n);
	printf("�ʺ�: ");
	scanf("%d", &m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}