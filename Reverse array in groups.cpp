#include <iostream>
using namespace std;

int main() {
    int n,t,a[10],s;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i+=s){
            int left=i;
            int right=min(i+s-1,n-1);
            while(left<right){
                swap(a[left++],a[right--]);
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
	//code
	return 0;
}
