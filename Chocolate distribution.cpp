#include <bits/stdc++.h>
using namespace std;

int getmindiff(int a[],int n,int s){
    if(n==0||s==0)
        return 0;
    sort(a,a+n);
    if(n<s)
        return -1;
    int mindiff=INT_MAX,first=0,last=0;
    for(int i=0;i+s-1<n;i++){
        int diff=a[i+s-1]-a[i];
        if(diff<mindiff){
            mindiff=diff;
            first=i;
            last=i+s-1;
        }
    }
    return a[last]-a[first];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,a[10],s;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cin>>s;
        cout<<getmindiff(a,n,s)<<endl;
    }
}
