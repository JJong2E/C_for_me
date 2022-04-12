// 컴퓨터가 내준 정수를 맞쳐보는 게임 ^ㅣ발
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	long long num;
	int count = 0;

	printf("정수를 입력하시오:");
	scanf("%lld", &num);

	do
	{
		count++;
		num /= 10;
	} while (num != 0);

	printf("총 자릿수 %lld", count);

	return 0;

}
