/* Q14. 오른쪽과 같이 입력한 수를 한 변으로 하는 정사각형을 * 기호로 출력하는 프로그램을 작성하세요. */

#include<stdio.h>

int main() {

	int n;
	printf("사각형을 출력합니다.\n");
	printf("입력할 수: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}