#include <stdio.h>

int main(void)
{
    int withdrow;
    float current_balance;

    scanf("%d %f", &withdrow, &current_balance);

	if(withdrow%5==0&&withdrow+0.5<=current_balance)
    {
	   printf("%.2f",current_balance-withdrow-0.50);
	}
	else
	{
	    printf("%.2f",current_balance);
	}
    return 0;
}


