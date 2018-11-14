#include <stdio.h>

int main()
{
    int x,y;
    double d;

    scanf("%d%d",&x,&y);
    d = x*x + y*y;

    if(d <= 10000)
    {
        printf("inside\n");
    }
    else
    {
        printf("outside\n");
    }
    return 0;
}
