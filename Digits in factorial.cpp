
#include<bits/stdc++.h>
using namespace std;
/* The actual fact lies in storing the factorial af larger number
So here we take log of each number till given number,sum it and take floor value increamented by one*?


int digitsInFactorial(int N)
{
    
    if(N==0 || N==1){
        return 1;
    }
    
    
    double dig=0;
    for(int i=2;i<=N;i++){
        dig += log10(i);
    }
    
    return floor(dig)+1;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<digitsInFactorial(N)<<endl;
    }
    return 0;
}
