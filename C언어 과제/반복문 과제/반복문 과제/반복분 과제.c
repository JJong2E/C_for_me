// ��ǻ�Ͱ� ���� ������ ���ĺ��� ���� ^�ӹ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	long long num;
	int count = 0;

	printf("������ �Է��Ͻÿ�:");
	scanf("%lld", &num);

	do
	{
		count++;
		num /= 10;
	} while (num != 0);

	printf("�� �ڸ��� %lld", count);

	return 0;

}
