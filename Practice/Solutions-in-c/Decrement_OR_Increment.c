
#include <stdio.h>

int main(void) {
	int num;
	scanf("%d", &num);
	if(num%4 == 0)
	{
	    num++;
	}
	else{
	    num--;
	}
	printf("%d", num);
	return 0;
}

