#include <bits/stdc++.h>
using namespace std;

int prostock(int a[],int n){
    if(n==1)
        return 0;
    int i=0,sell=0,buy=0;
    while(i<n){
        while((i<n-1)&&(a[i+1]<=a[i]))
            i++;
        if(i==n-1)
            break;
        buy=i++;

        while((i<n)&&(a[i]>=a[i-1]))
            i++;
        sell=i-1;
        cout<<"("<<buy<<" "<<sell<<")"<<" ";
    }
     if(sell==0&&buy==0)
        cout<<"No Profit";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t,n,a[1005];
	cin>>t;
	while(t--){
	    cin>>n;
	    for(int i=0;i<n;i++){
	        cin>>a[i];}
	    prostock(a,n);
	    cout<<endl;
	}
	return 0;
}
