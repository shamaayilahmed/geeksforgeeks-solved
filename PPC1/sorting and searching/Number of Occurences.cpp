/*Description - Given a sorted array arr[ ] and a number x, We have to count the occurrences of x in arr[ ].
Input : [1, 1, 2, 2, 2, 2, 3] , x = 2
Output : 4
Solution : Linear Search We can traverse the array and count the number of occurences of x in the given input array.
Time Complexity : O(n)
Since Array is sorted, can we optimize the solution using binary search.

Solution: Binary Search We can solve this problem using binary search by reducing the effective search space in each step. We will be using these steps -
Use Binary search to get the index of the first occurrence of x in arr[ ]. Let the index of the first occurrence be i.
Use Binary search to get the index of the last occurrence of x in arr[ ]. Let the index of the last occurrence be j.
Return the count as difference between first and last indices (j – i + 1);
*/
Pseudo Code
int first_index(arr, low, high, x, n)
{

    if(high >= low) 
    {
        mid = (low + high)/2  /*low + (high - low)/2*/
        if( ( mid == 0 || x > arr[mid-1]) && arr[mid] == x) :
            return mid
        else if(x > arr[mid]) :
            return first_index(arr, (mid + 1), high, x, n)
        else :
            return first_index(arr, low, (mid -1), x, n)
    }
}

int last_index(arr, low, high, x, n):
{
    if (high >= low) 
    {
        int mid = (low + high)/2  /*low + (high - low)/2*/
        if( ( mid == n-1 || x < arr[mid+1]) && arr[mid] == x ) 
            return mid
        else if(x < arr[mid]) :
            return last_index(arr, low, (mid -1), x, n)
        else :
            return last_index(arr, (mid + 1), high, x, n)
    }
}
