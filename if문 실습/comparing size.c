#include<stdio.h>

int main(void) {
	int num1, num2, num3;
	printf("���� 3�� �Է� >> ");
	scanf_s("%d%d%d", &num1, &num2, &num3);

	// ���ٹ��1 : �� ���� ũ�⸦ ���Ѵ�.
	// - ���� : �� ���� ũ������� ���ġ�ϴ� ��
	//         ���� ��, ū ���� ã�� �� �ִ�.
	if (num1 >= num2 && num1 >= num3) {
		printf("���� ū ���� %d�Դϴ�.\n", num1);
	}
	else if (num2 >= num1 && num2 >= num3) {
		printf("���� ū ���� %d�Դϴ�.\n", num2);
	}
	else {
		printf("���� ū ���� %d�Դϴ�.\n", num3);
	}
	// ���ٹ��2 : ���� ū ���� ���������� ���Ѵ�.
	// - ���� : �� ���� ũ�� ������
	//         ���ġ�� �ʿ䰡 ����
	int max = num1;
	if (max < num2) max = num2;
	if (max < num3) max = num3;
	printf("���� ū �� : %d\n", max);
	return 0;
}