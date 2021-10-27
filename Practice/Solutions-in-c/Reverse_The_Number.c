#include<stdio.h>
int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        int n, reverse=0, rem;
        scanf("%d", &n);
        while(n!=0)
        {
            rem=n%10;
            reverse=reverse*10+rem;
            n/=10;
        }
        printf("%d\n",reverse);
    }
    return 0;
}
