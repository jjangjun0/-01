#include <stdio.h>
int main(void)
{
	// ���� �Է�
	int num;
	printf("-128���� 127������ ������ ���� �ϳ��� �Է��ϼ��� : ");
	scanf_s("%d", &num);

	// ���� ������ ��
	if (num >= 0 && num <= 127) {
		int n1, n2, n3, n4, n5, n6, n7, n8;
		int temp_num = num;
		n1 = num % 2;
		num /= 2;
		n2 = num % 2;
		num /= 2;
		n3 = num % 2;
		num /= 2;
		n4 = num % 2;
		num /= 2;
		n5 = num % 2;
		num /= 2;
		n6 = num % 2;
		num /= 2;
		n7 = num % 2;
		num /= 2;
		n8 = num % 2;

		// 2���� ���
		printf("%d�� �������� %d%d%d%d %d%d%d%d �Դϴ�.\n", temp_num, n8, n7, n6, n5, n4, n3, n2, n1);
	}
	// ���� ������ ��
	else if (num < 0 && num >= -128) {
		int n1, n2, n3, n4, n5, n6, n7, n8;
		int temp_num = num;
		num *= -1;
		n1 = num % 2;
		num /= 2;
		n2 = num % 2;
		num /= 2;
		n3 = num % 2;
		num /= 2;
		n4 = num % 2;
		num /= 2;
		n5 = num % 2;
		num /= 2;
		n6 = num % 2;
		num /= 2;
		n7 = num % 2;
		num /= 2;
		n8 = num % 2;

		// num�� ���� 1�� ���� ���ϱ�
		if (temp_num == -128)
			0;
		else {
			n1 += (n1 == 1) ? -1 : 1;
			n2 += (n2 == 1) ? -1 : 1;
			n3 += (n3 == 1) ? -1 : 1;
			n4 += (n4 == 1) ? -1 : 1;
			n5 += (n5 == 1) ? -1 : 1;
			n6 += (n6 == 1) ? -1 : 1;
			n7 += (n7 == 1) ? -1 : 1;
			n8 += (n8 == 1) ? -1 : 1;

			// num�� 1�� ���� + 1
			n1 += 1;
			if (n1 == 2) {
				n1 = 0;
				n2 += 1;
			}
			if (n2 == 2) {
				n2 = 0;
				n3 += 1;
			}
			if (n3 == 2) {
				n3 = 0;
				n4 += 1;
			}
			if (n4 == 2) {
				n4 = 0;
				n5 += 1;
			}

			if (n5 == 2) {
				n5 = 0;
				n6 += 1;
			}
			if (n6 == 2) {
				n6 = 0;
				n7 += 1;
			}
			if (n7 == 2) {
				n7 = 0;
				n8 += 1;
			}
			if (n8 == 2) {
				n8 = 0;
				// 8��Ʈ������ ���
			}
		}
		// 2���� ���
		printf("%d�� �������� %d%d%d%d %d%d%d%d �Դϴ�.\n", temp_num, n8, n7, n6, n5, n4, n3, n2, n1);
	}
	return 0;
}
