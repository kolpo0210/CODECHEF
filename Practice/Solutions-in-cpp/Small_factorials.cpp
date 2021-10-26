#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using boost:: multiprecision::cpp_int;
using namespace std;

int main() {

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        cpp_int fact=1;
        for (int i=2 ; i<=n; i++) {
            fact *= i;
        }

        cout<<fact<<endl;
    }


	return 0;
}

