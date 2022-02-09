#include <stdio.h>

int main(void)
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        int n, x;

        scanf("%d %d", &n, &x);

        if(x<=n)
        {
           printf("%d\n", x);
        }
        else
        {
            while(x>n)
            {
                x=x-n-1;
            }
            printf("%d\n", x);
        }
    }
}
