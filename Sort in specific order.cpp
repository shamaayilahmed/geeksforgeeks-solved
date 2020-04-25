#include <bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll n,a;
        cin>>n;
        vector<ll>v1,v2;
        while(n--){
            cin>>a;
            if(a%2==0){
                v2.push_back(a);
            }
            else
                v1.push_back(a);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());int i;
        for(i=v1.size()-1;i>=0;i--)
            cout<<v1[i]<<" ";
        for(i=0;i<v2.size();i++)
            cout<<v2[i]<<" ";
        cout<<endl;
    }
}
