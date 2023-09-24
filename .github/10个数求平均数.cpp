#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	float a[10] = {0};
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%f\n", &a[i]);
	}
	float sum = 0;
	for (i = 0; i < 10; i++)
	{
		sum = sum + a[i];
	}
	float x = sum/10;
	printf("%lf", x);
	return 0;
}
