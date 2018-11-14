#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*variables*/
    int inpu,inp[4];//input
    char res[5][23] = {32};//result
    int i,j,k,l;//loop

    /*input*/
    printf("Please enter a number of 4 digits :");
    scanf("%d",&inpu);

    /* 4 digits of inp */
    for(k=3;k>=0;k--)
    {
        inp[k] = inpu % 10;
        inpu = inpu / 10;
    }

    for(k=0;k<=3;k++)
    {
        /*replace*/
        switch(inp[k])
        {
        case 0:
            for(l=0;l<=4;l++)//1&5 five*
            {
                res[0][6*k + l] = '*';//1
                res[4][6*k + l] = '*';//5
            }
            for(l=1;l<=3;l++)//2&3&4
            {
                res[l][6*k] = '*';
                res[l][6*k + 4] = '*';
            }
            break;
        case 1:
            for(l=0;l<=4;l++)//all
            {
                res[l][6*k + 4] = '*';
            }
            break;
        case 2:
            for(l=0;l<=4;l++)//1&3&5 five*
            {
                res[0][6*k + l] = '*';
                res[2][6*k + l] = '*';
                res[4][6*k + l] = '*';
            }
            res[1][6*k + 4] = '*';//2
            res[3][6*k] = '*';//4
            break;
        case 3:
            for(l=0;l<=4;l++)//1&3&5 five*
            {
                res[0][6*k + l] = '*';
                res[2][6*k + l] = '*';
                res[4][6*k + l] = '*';
            }
            res[1][6*k + 4] = '*';//2
            res[3][6*k + 4] = '*';//4
            break;
        case 4:
            for(l=0;l<=4;l++)//3 five*
            {
                res[2][6*k + l] = '*';
            }
            for(l=0;l<=1;l++)//1&2 - 1,5
            {
                res[l][6*k] = '*';
                res[l][6*k + 4] = '*';
            }
            res[3][6*k + 4] = '*';//4-5
            res[4][6*k + 4] = '*';//5-5
            break;
        case 5:
            for(l=0;l<=4;l++)//1&3&5 five*
            {
                res[0][6*k + l] = '*';
                res[2][6*k + l] = '*';
                res[4][6*k + l] = '*';
            }
            res[3][6*k + 4] = '*';//4
            res[1][6*k] = '*';//2
            break;
        case 6:
            for(l=0;l<=4;l++)//1&3&5 five*
            {
                res[0][6*k + l] = '*';
                res[2][6*k + l] = '*';
                res[4][6*k + l] = '*';
            }
            res[1][6*k] = '*';//2-1
            res[3][6*k] = '*';//4-1
            res[3][6*k + 4] = '*';//4-5
            break;
        case 7:
            for(l=0;l<=4;l++)//1 five*
            {
                res[0][6*k + l] = '*';
            }
            for(l=1;l<=4;l++)//2&3&4&5 - 5
            {
                res[l][6*k + 4] = '*';
            }
            break;
        case 8:
            for(l=0;l<=4;l++)//1&3&5 five*
            {
                res[0][6*k + l] = '*';
                res[2][6*k + l] = '*';
                res[4][6*k + l] = '*';
            }
            for(l=1;l<=2;l++)
            {
                res[2*l - 1][6*k] = '*';
                res[2*l - 1][6*k + 4] = '*';
            }
            break;
        case 9:
            for(l=0;l<=4;l++)//1&3 five*
            {
                res[0][6*k + l] = '*';
                res[2][6*k + l] = '*';
            }
            res[1][6*k] = '*';
            res[1][6*k + 4] = '*';
            res[3][6*k + 4] = '*';
            res[4][6*k + 4] = '*';
        }
    }

    /*print*/
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=22;j++)
        {
            printf("%c",res[i][j]);
        }
        printf("\n");
    }

    return 0;
}

