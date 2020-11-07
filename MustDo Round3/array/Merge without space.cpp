/*
Given two sorted arrays arr1[] and arr2[] in non-decreasing order with size n and m. The task is to merge the two sorted arrays in place, i. e., we need to consider all n + m 
elements in sorted order, then we need to put first n elements of these sorted in first array and remaining m elements in second array.

Note: Expected time complexity is O((n+m) log(n+m)). DO NOT use extra space.  We need to modify existing arrays as follows.

Example 1:

Input: 
N = 4, arr1[] = [1 3 5 7] 
m = 5, arr2[] = [0 2 6 8 9]
Output: 
arr1[] = [0 1 2 3]
arr2[] = [5 6 7 8 9]
Explanation: After merging the two non-decreasing 
arrays, we have, 0 1 2 3 5 6 7 8 9.
*/

void merge(int arr1[], int arr2[], int n, int m) 
{ 
    //Your code here
    //n is size of arr1
    //m is size of arr2
    int i=n-1,j=0;
    while(i>=0 && j<m){
        if(arr1[i]>arr2[j]){
            swap(arr1[i],arr2[j]);
            i--;
            j++;
        }
        else{
            break;
        }
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    
} 
