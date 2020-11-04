/*Description - We are given an array of distinct integers. We have to find the peak element ( The element which is greater than both the neighbours ). 
There can be many such elements we need to return any of them.
Input : [10, 20, 15, 2, 23, 90, 67]
Output : 20 or 90
Solution : A simple solution is to traverse the array and as soon as we find a peak element, we return it. The worst case time complexity of this method would be O(n).
Can we find a peak element in worst time complexity better than O(n)?
We can use the Divide and Conquer. The idea is Binary Search-based, we compare the middle element with its neighbors. If the middle element is not smaller than any of its
neighbors, then we return it. If the middle element is smaller than its left neighbor, then there is always a peak in the left half. If the middle element is smaller than its 
right neighbor, then there is always a peak in the right half (due to the same reason as left half).
*/
Pseudo Code

int findPeak(arr[], low, high, n) 
{
    int mid = low + (high - low)/2 /* (low + high)/2 */
  
    if ((mid == 0 || arr[mid-1] <= arr[mid]) && 
            (mid == n-1 || arr[mid+1] <= arr[mid])) :
        return arr[mid]
  
    // If middle element is not peak and its left neighbour is greater  
    // than it, then left half must have a peak element 
    else if (mid > 0 && arr[mid-1] > arr[mid]) :
        return findPeak(arr, low, (mid -1), n)
  
    // If middle element is not peak and its right neighbour is greater 
    // than it, then right half must have a peak element 
    else :
        return findPeak(arr, (mid + 1), high, n)
} 
