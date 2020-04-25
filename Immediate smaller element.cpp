#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n,a[1000];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(i==(n-1)){
                cout<<"-1";
                break;
            }
            if(a[i]>a[i+1]){
                cout<<a[i+1]<<" ";
            }
            else{
                cout<<"-1"<<" ";
            }
        }
        cout<<"\n";
    }
	//code
	return -1;
}
