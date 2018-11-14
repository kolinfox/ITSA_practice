#include <stdio.h>
#include <stdlib.h>

/* unsigned */

int main()
{
    int inp,res[8]={0},i;

    scanf("%d",&inp);

    if(inp<0)
    {
        inp = -inp;//regard as +
        for(i=7;i>=0;i--)
        {
            res[i] = inp % 2;
            inp = inp / 2;
        }
        for(i=7;i>=0;i--)//complement
        {
            switch(res[i])
            {
            case 1:
                res[i] = 0;
                break;
            case 0:
                res[i] = 1;
                break;
            }
        }
        res[7]++;//+1
        for(i=7;i>=1;i--)
        {
            if(res[i]==2)
            {
                res[i]=0;
                res[i-1]++;
            }
            else if(res[i]<2)
            {
                break;
            }
        }
        res[0] = 1;
    }
    else//inp>0
    {
        for(i=7;i>=0;i--)
        {
            res[i] = inp % 2;
            inp = inp / 2;
        }
    }
    for(i=0;i<=7;i++)
    {
        printf("%d",res[i]);
    }
    printf("\n");
    return 0;
}

/*
res[0][1][2][3][4][5][6][7]
*/
