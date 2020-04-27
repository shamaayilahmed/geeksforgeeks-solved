#include <iostream>
#include<algorithm>
using namespace std;

int kthsmall(int a[],int n,int k){
    sort(a,a+n);
    return a[k-1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ios_base::syn
        int n;cin>>n;
        int a[100000];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int k;cin>>k;
        cout<<kthsmall(a,n,k);
        cout<<"\n";
    }
	//code
	return 0;
}
