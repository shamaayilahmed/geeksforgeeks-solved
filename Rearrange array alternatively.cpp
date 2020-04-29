#include<bits/stdc++.h>
using namespace std;
/* GIVEN AN SORTED ARRAY REARRANGE IN MAX-MIN FASHION
  SAMPLE
  1               test case
  6               size of array
  1 2 3 4 5 6     input array
  6 1 5 2 4 3     output first max 6,first min 1,so on..
*/

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
        if((l%2)!=0)
            cout<<a[l/2];
        cout<<"\n";
    }
    return 0;
}
