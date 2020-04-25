#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        v.erase(unique(v.begin(),v.end()),v.end());
        for(int i=0;i<n;i++)
            cout<<v[i]<<" ";
        int minDiff=abs(v[0]-k);
        int i; cout<<"\n";
        for(i=1;i<n;i++){
            if(abs(v[i]-k)<=minDiff){
                minDiff=abs(v[i]-k);
            }
            else break;
        }
        cout<<v[i-1]<<'\n';
    }
    return 0;
}
