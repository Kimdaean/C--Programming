#include<stdio.h>

int main(void) {
	int cnt;
	double discount;
	printf("만두 개수 입력:\t");
	scanf_s("%d", &cnt);
	printf("\n할인전 가격:\t%d원", 500 * cnt);
	if (cnt >= 50 && cnt < 100) {
		printf("\n할인률:\t10퍼센트");
		discount = 0.9;
	}
	else {
		if (cnt >= 100) {
			printf("\n할인률:\t20퍼센트");
			discount = 0.8;
		}
		else printf("\n최종 가격:\t%d", 500 * cnt);
	}
	printf("\n최종 가격:\t%.0f원", (500 * cnt) * discount);
	return 0;
}