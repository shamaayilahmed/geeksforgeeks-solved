#include <iostream>
using namespace std;

int main()
{
    int t,n,r,a[100];
    cin>>t;
    while(t--){
        cin>>n;
         cin>>r;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        r=r%n;
        for(int i=0;i<n;i++){
        cout<<(a[(r+i)%n])<<" ";
        }
        cout<<"\n";
    }
}
