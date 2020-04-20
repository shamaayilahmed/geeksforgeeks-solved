#include <iostream>

using namespace std;

int subarr(int a[],int n,int sum){
    int curr=a[0],start=0,i;
    for(int i=1;i<=n;i++){
        while(curr>sum&&start<i-1){
            curr -= a[start];
            start++;
        }
        if(curr==sum){
            cout<<start<<" "<<i-1;
            return 1;
        }
        if(i<n){
            curr += a[i];
        }
    }
    return 0;
}

int main()
{
    int t,n,a[10],sum;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>sum;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        subarr(a,n,sum);
        return 0;
    }
}
