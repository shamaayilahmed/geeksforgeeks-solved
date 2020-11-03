/*Description : We are given an array of positive and negative integers. We have to find the subarray having maximum sum.
Input
[-3, 4, -1, -2, 1, 5]
Output
7
(4+(-1)+(-2)+1+5)
Solution : Simple idea is to look for all positive contiguous segments of the array (max_ending_here is used for this). And keep track of maximum sum contiguous segment among all positive segments (max_so_far is used for this). Each time we get a positive sum compare it with max_so_far and if,it is greater than max_so_far, update max_so_far.
*/
Pseudo Code
//n : size of array
int largestsum(arr, n)
{
    max_so_far = INT_MIN
    max_ending_here = 0

    for (i=0 to n-1)
    {
        max_ending_here += arr[i]
        if max_so_far < max_ending_here :
            max_so_far = max_ending_here

        if max_ending_here < 0 :
            max_ending_here = 0
    }

    return max_so_far
}
