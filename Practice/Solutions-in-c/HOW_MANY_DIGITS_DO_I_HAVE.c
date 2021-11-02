#include <stdio.h>

int main(void) {
	int num;

	scanf("%d", &num);

	if(num >= 0 && num < 10)
    {
        printf("1");
    }
    else if(num >= 10 && num < 100)
    {
        printf("2");
    }
    else if(num >= 100 && num < 1000)
    {
        printf("3");
    }
    else
    {
        printf("More than 3 digits");
    }
	return 0;
}


