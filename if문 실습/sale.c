#include<stdio.h>

int main(void) {
	int cnt;
	double discount;
	printf("���� ���� �Է�:\t");
	scanf_s("%d", &cnt);
	printf("\n������ ����:\t%d��", 500 * cnt);
	if (cnt >= 50 && cnt < 100) {
		printf("\n���η�:\t10�ۼ�Ʈ");
		discount = 0.9;
	}
	else {
		if (cnt >= 100) {
			printf("\n���η�:\t20�ۼ�Ʈ");
			discount = 0.8;
		}
		else printf("\n���� ����:\t%d", 500 * cnt);
	}
	printf("\n���� ����:\t%.0f��", (500 * cnt) * discount);
	return 0;
}