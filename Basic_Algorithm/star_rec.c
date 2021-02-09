/* Q14. 오른쪽과 같이 입력한 높이와 너비에 맞는 직사각형을 * 기호로 출력하는 프로그램을 작성하세요. */

#include<stdio.h>

int main() {

	int n, m;
	printf("직사각형을 출력합니다.\n");
	printf("높이: ");
	scanf("%d", &n);
	printf("너비: ");
	scanf("%d", &m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}