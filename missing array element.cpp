#include <iostream>
#include<array>
#include<bits/stdc++.h>
using namespace std;

int getmiss(int arr[],int n){
    int total=(n*(n+1))/2;
    for(int i=1;i<n;i++){
        total-=arr[i];
    }
    return total;
}
int main()
{
    int arr[1000],n,t;
    cin>>t;
    while(t--){
    cin>>n;
    for(int i=1;i<n;i++){
        cin>>arr[i];
    }
    int m=getmiss(arr,n);
    cout<<m;
    }
}
