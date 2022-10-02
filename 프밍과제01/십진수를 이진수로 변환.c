#include <stdio.h>
int main(void)
{
	// 정수 입력
	int num;
	printf("-128부터 127까지의 십진수 정수 하나를 입력하세요 : ");
	scanf_s("%d", &num);

	// 양의 정수일 때
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

		// 2진수 출력
		printf("%d의 이진수는 %d%d%d%d %d%d%d%d 입니다.\n", temp_num, n8, n7, n6, n5, n4, n3, n2, n1);
	}
	// 음의 정수일 때
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

		// num에 대해 1의 보수 취하기
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

			// num의 1의 보수 + 1
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
				// 8비트까지만 출력
			}
		}
		// 2진수 출력
		printf("%d의 이진수는 %d%d%d%d %d%d%d%d 입니다.\n", temp_num, n8, n7, n6, n5, n4, n3, n2, n1);
	}
	return 0;
}
