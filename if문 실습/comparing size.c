#include<stdio.h>

int main(void) {
	int num1, num2, num3;
	printf("정수 3개 입력 >> ");
	scanf_s("%d%d%d", &num1, &num2, &num3);

	// 접근방법1 : 세 수의 크기를 비교한다.
	// - 이유 : 세 수를 크기순으로 재배치하는 겸
	//         작은 값, 큰 값을 찾을 수 있다.
	if (num1 >= num2 && num1 >= num3) {
		printf("제일 큰 수는 %d입니다.\n", num1);
	}
	else if (num2 >= num1 && num2 >= num3) {
		printf("제일 큰 수는 %d입니다.\n", num2);
	}
	else {
		printf("제일 큰 수는 %d입니다.\n", num3);
	}
	// 접근방버2 : 가장 큰 수를 무지성으로 비교한다.
	// - 이유 : 세 수를 크기 순으로
	//         재배치할 필요가 없음
	int max = num1;
	if (max < num2) max = num2;
	if (max < num3) max = num3;
	printf("제일 큰 수 : %d\n", max);
	return 0;
}