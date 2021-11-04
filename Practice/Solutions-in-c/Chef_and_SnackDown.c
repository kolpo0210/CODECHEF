#include <stdio.h>

int main(void)
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        int num=0;

        scanf("%d", &num);

        if(num == 2010 || num == 2015 || num == 2016 || num == 2017 || num == 2019)
        {
            printf("HOSTED\n");
        }
        else
        {
            printf("NOT HOSTED\n");
        }

    }
    return 0;
}
