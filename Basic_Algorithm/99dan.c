/* Q12. 오른쪽과 같이 위쪽과 왼쪽에 곱하는 수가 있는 곱셈표를 출력하는 프로그램을 작성하세요. */

#include<stdio.h>

int main() {

	printf("   |");
	for (int i = 1; i <= 9; i++)
		printf("%3d", i);
	printf("\n");

	printf("---+");
	for (int i = 1; i <= 9; i++)
		printf("---");
	printf("\n");

	for (int i = 1; i <= 9; i++) {
		printf("%3d|", i);
		for (int j = 1; j <= 9; j++)
			printf("%3d", i * j);
		printf("\n");
	}

	return 0;
}