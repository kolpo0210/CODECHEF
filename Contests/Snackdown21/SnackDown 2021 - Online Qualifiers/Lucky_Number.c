#include <stdio.h>

int main(void) {
	int n=0;

	scanf("%d", &n);

	for(int i=0; i<n; i++)
	{
	    int A,B,C;

	    scanf("%d %d %d", &A, &B, &C);

	    if(A == 7||B == 7||C == 7)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }

	    A=0, B=0, C=0;
	}
	return 0;
}
