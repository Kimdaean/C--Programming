#include<stdio.h>

int main(void) {
	int korea, english, math;
	double average;
	char score;
	printf("����, ����, ���� ������ ���ʴ�� �Է����ּ���: ");
	scanf_s("%d%d%d", &korea, &english, &math);
	average = (korea + english + math) / 3.0;
	if (average >= 90) score = 'A';
	else if (average >= 80) score = 'B';
	else if (average >= 70) score = 'C';
	else if (average >= 60) score = 'D';
	else score = 'F';
	printf("\n���: %c\n���: %.1f��", score, average);
	return 0;
}