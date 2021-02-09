/* Q16. 직각 이등변 삼각형을 출력하는 부분을 아래와 같은 형식의 함수로 작성하세요.
   void triangleLB(int n); void triangleLU(int n); void triangleRU(int n); void triangleRB(int n); */

#include<stdio.h>

void triangleLB(int n) { // 왼쪽 아래가 직각인 이등변 삼각형을 출력
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
}

void triangleLU(int n) { // 왼쪽 위가 직각인 이등변 삼각형을 출력
	for (int i = n; i > 0; i--) {
		for (int j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
}

void triangleRU(int n) { // 오른쪽 위가 직각인 이등변 삼각형을 출력
	for (int i = n; i > 0; i--) {
		for (int k = 0; k < n - i; k++)
			printf(" ");
		for (int j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
}

void triangleRB(int n) { // 오른쪽 아래가 직각인 이등변 삼각형을 출력
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