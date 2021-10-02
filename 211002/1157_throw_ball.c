//1157 throw ball
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double d;
	scanf("%lf", &d);
	if (d >= 50 && d <= 60) {
		printf("win\n");
	}
	else {
		printf("lose\n");
	}

	return 0;
}
