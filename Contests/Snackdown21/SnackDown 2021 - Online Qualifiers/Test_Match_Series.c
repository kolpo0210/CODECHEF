#include <stdio.h>
int main()
{
    int n=0;

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        int array[6];
        int india=0;
        int england=0;

        for(int j=0; j<5; j++)
        {
            scanf("%d", &array[j]);
        }
        for(int j=0; j<5; j++)
        {
            if(array[j] == 1)
            {
                india++;
            }
            else if(array[j] == 2)
            {
                england++;
            }
        }

        if(india > england)
        {
            printf("INDIA\n");
        }
        else if(england > india)
        {
            printf("ENGLAND\n");
        }
        else if(england == india)
        {
            printf("DRAW\n");
        }
    }

    return 0;
}

