/*
Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. The first line of each test 
case is N and S, where N is the size of array and S is the sum. The second line of each test case contains N space separated integers denoting the array elements.

Output:
For each testcase, in a new line, print the starting and ending positions(1 indexing) of first such occuring subarray from the left if sum equals to subarray, else print -1.

Constraints:
1 <= T <= 100
1 <= N <= 107
1 <= Ai <= 1010

Example:
Input:
2
5 12
1 2 3 7 5
10 15
1 2 3 4 5 6 7 8 9 10
Output:
2 4
1 5
*/
#include <iostream>

using namespace std;

int subarr(int a[],int n,int sum){
    int curr=a[0],start=0,i;
    for(int i=1;i<=n;i++){
        while(curr>sum&&start<i-1){
            curr -= a[start];
            start++;
        }
        if(curr==sum){
            cout<<start+1<<" "<<i<<"\n";
            return 1;
        }
        if(i<n){
            curr += a[i];
        }
    }
    cout<<"-1"<<endl;
}

int main()
{
    int t,n,a[1000000],sum;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>sum;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        subarr(a,n,sum);
    }
    return 0;
}
