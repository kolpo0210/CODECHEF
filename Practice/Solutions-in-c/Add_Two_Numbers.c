#include <stdio.h>
int main()
{
    int t=0;

    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        int a,b;

        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
        a=0;
        b=0;
    }
}
