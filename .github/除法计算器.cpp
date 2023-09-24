#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    double a = 0;
    double b = 0;
    scanf("%lf\n %lf", &a, &b);
   double sum = a / b;
    printf("sum=%lf", sum);
    return 0;
}