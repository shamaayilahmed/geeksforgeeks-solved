
#include<bits/stdc++.h>
using namespace std;

void pendulum(int a[],int n){
        sort(a,a+n);
        int op[n];
        int mid=(n-1)/2;  //formula middle element
        op[mid]=a[0];
        int i=1,j=1;

        //for(int i=1;i<=mid;i++)
        while(j<n)
        {
            op[mid+i]=a[j++]; //next number(after smallest) to right
            op[mid-i]=a[j++]; //3rd number to left
            i++;
        }
        /*if(n%2==0){
            op[mid+i]=a[j];

        }*/
        for(int i=0;i<n;i++){
            cout<<op[i]<<" ";
        }
}

int main()
{
    int n,t,a[100];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        pendulum(a,n);
        cout<<"\n";
    }
    return 0;
}
