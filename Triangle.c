#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp,i,j;

    scanf("%d",&inp);

    for(i=1;i<=inp;i++)
    {
        for(j=1;j<=inp-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*   
     *
    **
   ***
  ****
 *****
******

*/
