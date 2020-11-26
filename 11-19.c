#include <stdio.h>
#include <math.h>
main()
{
    printf("Please Input three number:\n");
    float a, b, c, s, area;
    printf("first num:");
    scanf_s("%f", &a);
    printf("second num:");
    scanf_s("%f", &b);
    printf("third num:");
    scanf_s("%f", &c);
    s = (a + b + c) / 2;
    area = (float)sqrt(s * (s - a) * (s - b) * (s - c));
    printf("area=%f\n", area);
    system("pause");
    return 0;
}
