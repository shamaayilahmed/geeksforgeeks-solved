/*#include <iostream>

using namespace std;
int findmaj(int arr[],int n){
    int d[100]={0},f=0;
    for(int i=0;i<n;i++){
        d[arr[i]]++;
        //cout<<d[i]<<" ";
    }

    for(int i=0;i<n;i++){
        if(d[i]>(n/2)){
            cout<<i<<"\n";
            f=1;
            break;
        }
    }
    if(!f){
    cout<<"-1"<<"\n";
    }
    return 0;
}
int main()
{
    int arr[10000],t;
    long long n;
    cin>>t;
    while(t--){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    findmaj(arr,n);
    }
}*/
#include<iostream>
using namespace std;
void findmaj(int arr[],int n){
    int m=0,index=-1;
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j])
                c++;
        }
        if(c>m){
            m=c;
            index=i;
        }
    }
    if(m>n/2)
        cout<<arr[index]<<"\n";
    else
        cout<<"-1"<<"\n";
}
int main(){
    int arr[100000],n,t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        findmaj(arr,n);
    }


}
