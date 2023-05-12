#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
long jc(int k)
{
	int d = 1;
	for (int i=2; i <= k; i++)
	{
		d *= i;
	}
	return d;
}
int main()
{
	float S = 1;
	S = 1 + (1 / (1 + (float)jc(4)) + 1 / (1 + (float)jc(4) + (float)jc(7)))
		+ (1 / (1 + (float)jc(4) + (float)jc(7) + (float)jc(10)))
		+ (1 / (1 + (float)jc(4) + (float)jc(7) + (float)jc(10) + (float)jc(13)))
		+ (1 / (1 + (float)jc(4) + (float)jc(7) + (float)jc(10) + (float)jc(13) + (float)jc(16)))
		+ (1 / (1 + (float)jc(4) + (float)jc(7) + (float)jc(10) + (float)jc(13) + (float)jc(16) + (float)jc(19)));
	printf("S=%f", S);
	return 0;
}
