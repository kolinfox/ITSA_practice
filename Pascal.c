#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp=1,r,n,c[101][101];

    scanf("%d",&inp);

    for(r=0;r<=inp-1;r++)
    {
        for(n=0;n<=r;n++)
        {
            if(n==0)
            {
                c[r][n] = 1;
                printf("1 ");
            }
            else if(n!=0)
            {
                c[r][n] = c[r-1][n-1] + c[r-1][n];
                printf("%d ",c[r][n]);
            }
        }
        printf("\n");
    }
    return 0;
}
