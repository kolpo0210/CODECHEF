#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int num,root;
        scanf("%d",&num);
        root=sqrt(num);
        printf("%d\n",root);
    }
    return 0;
}
