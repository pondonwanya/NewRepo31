#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int m[3][4],c;
	for (int r = 0; r <= 2; r++) {
		for (int c = 0; c <= 3; c++) {
			printf("Value[%d][%d] : ", r, c);
			scanf("%d", &m[r][c]);
		}
	}
		/*****Show Matrix****/
	printf("\n");
	for (int r = 0; r <= 2; r++) {
		for (int c = 0; c <= 3; c++) {
			printf("%4d", m[r][c]);
		}
		printf("\n");
	}
	return 0;
}