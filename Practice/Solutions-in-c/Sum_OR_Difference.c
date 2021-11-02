#include <stdio.h>
int main()
{
    int N1, N2;
    int answer=0;

    scanf("%d %d", &N1, &N2);

    if(N1 > N2)
    {
        answer=N1-N2;
    }
    else
    {
        answer=N1+N2;
    }

    printf("%d", answer);

    return 0;
}
