#include <bits/stdc++.h>
using namespace std;

/*You are given two numbers a and b. You need to find the sum of a and b under modulo M.
Note: Take M as 10^9+7  */

int sumUnderModulo(long long a,long long b)
{
    int M=1000000007;
    unsigned long int sum=a+b;
    sum=sum%M;
    return sum;
    //your code here
    cout<<endl;
}

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    long long a;
	    long long b;
	    cin>>a>>b;
	    cout<<sumUnderModulo(a,b)<<endl;
	}
	return 0;
}
