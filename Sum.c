#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,//how many
        b,sum=0,
        i,j;//loop

    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&b);
        for(j=1;j<=b;j++)
        {
            sum = sum + j;
        }
        printf("%d\n",sum);
    }
    return 0;
}
