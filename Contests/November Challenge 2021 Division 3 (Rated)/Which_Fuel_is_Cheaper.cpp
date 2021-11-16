#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--)
	{
	    int x,y,a,b,k;

	    cin>>x>>y>>a>>b>>k;
	    x = x + (k*a);
	    y = y + (k*b);

	    if(x>y)
	    {
	        cout<<"DIESEL"<<endl;
	    }
	    else if(y>x)
	    {
	        cout<<"PETROL"<<endl;
	    }
	    else
	    {
	        cout<<"SAME PRICE"<<endl;
	    }
	}
	return 0;
}

