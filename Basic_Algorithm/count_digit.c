/* Q11. 양의 정수를 입력하고 자릿수를 출력하는 프로그램을 작성하세요. 예를 들어 135를 입력하면 '그 수는 3자리입니다.'라고 출력하고,
	1314를 입력하면 '그 수는 4자리입니다.'라고 출력하면 됩니다. */

#include<stdio.h>

int main() {
	int cnt = 0;
	int n;
	printf("input integer (n > 0): ");
	scanf("%d", &n);
	while (n) {
		cnt++;
		n /= 10;
	}

	printf("그 수는 %d자리입니다.", cnt);

	return 0;
}