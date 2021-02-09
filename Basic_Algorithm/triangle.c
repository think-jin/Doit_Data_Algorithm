/* Q16. ���� �̵ �ﰢ���� ����ϴ� �κ��� �Ʒ��� ���� ������ �Լ��� �ۼ��ϼ���.
   void triangleLB(int n); void triangleLU(int n); void triangleRU(int n); void triangleRB(int n); */

#include<stdio.h>

void triangleLB(int n) { // ���� �Ʒ��� ������ �̵ �ﰢ���� ���
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
}

void triangleLU(int n) { // ���� ���� ������ �̵ �ﰢ���� ���
	for (int i = n; i > 0; i--) {
		for (int j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
}

void triangleRU(int n) { // ������ ���� ������ �̵ �ﰢ���� ���
	for (int i = n; i > 0; i--) {
		for (int k = 0; k < n - i; k++)
			printf(" ");
		for (int j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
}

void triangleRB(int n) { // ������ �Ʒ��� ������ �̵ �ﰢ���� ���
	for (int i = 1; i <= n; i++) {
		for (int k = n - i; k > 0; k--)
			printf(" ");
		for (int j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
}
int main() {

	triangleLB(5); 

	triangleLU(5);

	triangleRU(5);

	triangleRB(5);

	return 0;
}