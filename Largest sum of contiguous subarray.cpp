#include <bits/stdc++.h>
using namespace std;

int countsum(int arr[],int n){
    int curr=arr[0],get=a[0];
    for(int i=1;i<n;i++){
        curr=max(arr[i],arr[i]+curr);
        get=max(curr,get);
    }
    return get;
    }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,arr[1000];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int sum=countsum(arr,n);
        cout<<sum<<endl;
    }
}
