#include <stdio.h>
int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        int x, y, ans=0;

        scanf("%d %d", &x, &y);
        ans=x/2;
        if(ans <= y)
        {
            printf("%d\n", ans);
        }
        else
        {
            printf("%d\n", y);
        }
    }

    return 0;
}
