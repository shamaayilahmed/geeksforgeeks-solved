#include <iostream>

using namespace std;

int main()
{
    int t,n,r,a[200],first;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cin>>r;
        r=r%n;
        for(int i=0;i<r;i++){
        first=a[0];
        for(int i=0;i<n;i++){
            a[i]=a[i+1];
        }
        a[n-1]=first;
        }

        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
}
