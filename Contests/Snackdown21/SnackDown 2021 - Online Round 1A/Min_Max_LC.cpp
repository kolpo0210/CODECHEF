#include <iostream>
#include <bits/stdc++.h>
#include <boost/math/common_factor.hpp>
using namespace std;
int main()
{
    int T;

    cin>>T;

    while(T--)
    {
        long long int X, K, ans;

        cin>>X>>K;

        long long int lcmmax=boost::math::lcm((X*K-1), (X*K));
        cout<<2*X<<' '<<lcmmax<<endl;
    }

    return 0;
}


