#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int equi(int arr[],int n){
    int sum=0,lt=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    for(int i=0;i<n;i++){
        sum -= arr[i];
        if(lt==sum){
            return (i+1);
        }
        lt += arr[i];
    }
    return -1;
}
int main() {
    int t,n,arr[1000000];
    cin>>t;
    while(t--){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int e=equi(arr,n);
    cout<<e<<" \n";
    }
    return 0;
}