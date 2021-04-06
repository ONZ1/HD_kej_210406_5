#include<stdio.h>

int main(void)
{
	int num;

	printf("1~9중 하나를 입력해주세요:\n");
	scanf_s("%d", &num);
	fseek(stdin, 0, SEEK_END);
	
	printf("%d * 1 = %d\n", num, num * 1);
	printf("%d * 2 = %d\n", num, num * 2);
	printf("%d * 3 = %d\n", num, num * 3);
	printf("%d * 4 = %d\n", num, num * 4);
	printf("%d * 5 = %d\n", num, num * 5);
	printf("%d * 6 = %d\n", num, num * 6);
	printf("%d * 7 = %d\n", num, num * 7);
	printf("%d * 8 = %d\n", num, num * 8);
	printf("%d * 9 = %d\n", num, num * 9);

	fgetc(stdin);
}