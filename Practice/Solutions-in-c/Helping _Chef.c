#include <stdio.h>

int main(void) {
	int t;

	scanf("%d", &t);

	while(t--)
	{
	    int n=0;

	    scanf("%d", &n);

	    if(n < 10)
	    {
	        printf("Thanks for helping Chef!\n");
	    }
	    else
	    {
	        printf("-1\n");
	    }
	}
	return 0;
}
