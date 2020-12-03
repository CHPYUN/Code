#include <stdio.h>
int main()
{
    int a,sum;
    for(a=1,sum=0;a<=99;a+=2)
    {
        sum+=a*(a+1);
    }
    printf("%d\n",sum);
    system("pause");
    return 0;
}
