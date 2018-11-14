#include <stdio.h>

int main()
{
    int time_a1,time_a2,time_b1,time_b2,
        interval,money;

    scanf("%d%d",&time_a1,&time_a2);
    scanf("%d%d",&time_b1,&time_b2);

    if((time_b1-time_a1)<0)
    {
        if((time_b2-time_a2)<0)
        {
            interval = (24 - (time_a1 - time_b1) - 1)*60 + (60 - (time_a2 - time_b2));
        }
        else if((time_b2-time_a2)>0)
        {
            interval = (24 - (time_a1 - time_b1))*60 + (time_b2 - time_a2);
        }
        else
        {
            interval = (24 - (time_a1 - time_b1))*60;
        }
    }
    else if((time_b1-time_a1)>0)
    {
        if((time_b2-time_a2)<0)
        {
            interval = ((time_b1 - time_a1) - 1)*60 + (60 - (time_a2 - time_b2));
        }
        else if((time_b2-time_a2)>0)
        {
            interval = (time_b1 - time_a1)*60 + (time_b2 - time_a2);
        }
        else
        {
            interval = (time_b1 - time_a1)*60;
        }
    }
    else
    {
        if((time_b2-time_a2)>0)
        {
            interval = (time_a2 - time_b2);
        }
        else
        {
            interval = 0;
        }
    }
    /* */
    if(interval <= 120)
    {
        money = interval / 30 * 30;
    }
    else if(interval > 240)
    {
        money = ((interval-240) / 30) * 60;
        money = money + 280;
    }
    else
    {
        money = ((interval-120) / 30) * 40;
        money = money + 120;
    }

    printf("%d\n",money);

    return 0;
}
