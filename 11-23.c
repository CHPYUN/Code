#include <stdio.h>
int main()
{
    double a, b, c;
    printf("请输入三条边：");
    scanf_s("%lf %lf %lf", &a, &b, &c);
    if (a == b == c)
    {
        printf("该三角形为等腰三角形\n");
    }
    else if (c * c == a * a + b * b)
    {
        printf("该三角形为直角三角形\n");
    }
    else if ((a + b > c) && (a - b < c))
    {
        printf("该三角形为一般三角形\n");
    }
    else if (a + b<c || a - b>c)
        printf("三边不成三角形\n");
    return 0;
}
