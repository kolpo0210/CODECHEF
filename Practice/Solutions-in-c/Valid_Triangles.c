#include <stdio.h>
int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        int a=0, b=0, c=0;

        scanf("%d %d %d", &a, &b, &c);

        if(a+b+c == 180)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
