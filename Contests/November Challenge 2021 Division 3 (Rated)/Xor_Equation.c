#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];

        for(int i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            int xor_arr = 0;
            for(int j=0; j<n; j++)
            {
                int ar=0;
                ar = arr[j]+i;
                xor_arr = xor_arr ^ ar;
            }
            if(xor_arr == 0)
            {
                printf("%d\n", i);
                break;
            }
            else if(i == n-1)
            {
                printf("-1\n");
            }
        }
    }
    return 0;
}

