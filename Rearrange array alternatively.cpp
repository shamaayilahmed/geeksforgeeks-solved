#include <vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,l=0;
    cin>>t;
    while(t--){
        cin>>l;
        int a[l];
        int j;
        for(j=0;j<l;j++){
            cin>>a[j];
        }

        int i;
        for(i=0;i<l/2;i++){
        cout<<a[l-1-i]<<" "<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
