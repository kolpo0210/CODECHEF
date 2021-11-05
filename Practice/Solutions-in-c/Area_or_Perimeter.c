#include <stdio.h>

int main(void) {
    int l, b;
    int area=0, peri=0;

    scanf("%d %d", &l, &b);
    area = l*b;
    peri = 2*(l+b);

    if(area > peri)
    {
        printf("Area\n%d", area);
    }
    else if(peri > area)
    {
        printf("Peri\n%d", peri);
    }
    else
    {
        printf("Eq\n%d", area);
    }
	return 0;
}
