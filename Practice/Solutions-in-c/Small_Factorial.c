#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int num, fact=1;
	    scanf("%d", &num);
	    for(int i=1; i<=num; i++)
	    {
	        fact=fact*i;
	    }
	    printf("%d\n", fact);

	}
	return 0;
}

