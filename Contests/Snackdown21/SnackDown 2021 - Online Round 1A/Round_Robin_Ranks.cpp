#include <iostream>
using namespace std;
int main()
{
    int T;

    cin>>T;

    while(T--)
    {
        int X, K, ans;

        cin>>X>>K;
        ans=(2*X-K-1)/2;
        cout<<2*ans<<endl;
    }

    return 0;
}


