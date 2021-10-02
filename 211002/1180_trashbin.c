//1180 trash bin
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	scanf("%d", &num);
	int a = num / 10, b = num % 10;
	int num2 =2*(a+ b*10);

	if (num2 >= 100) {
		num2 = num2 - 100;
	}
	printf("%d", num2);
		if (num2 <= 50) {
			printf("\nGOOD");
		}
		else if (num2 > 50) {
			printf("\nOH MY GOD");
		}
	return 0;
}
