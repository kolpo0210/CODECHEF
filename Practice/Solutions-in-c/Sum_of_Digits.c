#include<stdio.h>
 int main()
{
    int t=0;

    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        int n=0,sum=0,m=0;
scanf("%d",&n);
while(n>0)
{
m=n%10;
sum=sum+m;
n=n/10;
}
printf("%d\n",sum);
    }
return 0;
}
