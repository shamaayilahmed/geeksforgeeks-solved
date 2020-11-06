/*
Given an array arr of N integers. Find the contiguous sub-array with maximum sum.

Example 1:

Input:
N = 5
arr[] = {1,2,3,-2,5}
Output: 9
Explanation: Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.
*/
int maxSubarraySum(int arr[], int n){
    int current=arr[0],answer=arr[0];
    for(int i=1;i<n;i++){
        current=max(arr[i],current+arr[i]);
        answer=max(answer,current);
    }
    return answer;
    // Your code here
    
}
