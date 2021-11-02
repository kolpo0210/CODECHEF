#include <stdio.h>

int main(void) {
    int t;

    scanf("%d", &t);

    while(t--)
    {
        int a=0, b=0, c=0, d=0;

        scanf("%d %d %d %d", &a, &b, &c, &d);

        if((a == b && c == d) || (a == c && d == b) || (a == d && b == c))
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


