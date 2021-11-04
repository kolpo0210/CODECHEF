#include <stdio.h>

int main(void) {
	int t;

	scanf("%d", &t);

	while(t--)
	{
	    int k=0;
	    int ans=0;

	    scanf("%d", &k);
	    for(int i=1; i<=k; i++)
	    {
	        if(i%2 == 0)
	        {
	            ans = ans-1;
	        }
	        else
	        {
	            ans = ans+3;
	        }
	    }
	    printf("%d\n", ans);
	}
	return 0;
}


