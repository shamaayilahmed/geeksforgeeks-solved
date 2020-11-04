/*Description - We are given an sorted boolean array, We have to find out the index of first 1 in the Array
Input : arr[] = [0, 0, 0, 0, 0, 0, 1, 1, 1, 1]
Output : 6
The index of first 1 in the array is 6.
Solution - One simple solution can be traverse the Array and find out the first index of 1. Since the array is sorted, we can optimize the solution using binary search by reducing the effective search space in each step.
*/
Pseudo Code
int indexOfFirstOne(arr[], low, high) 
{
    while (low <= high) 
    {
        int mid = (low + high) / 2

        if (arr[mid] == 1 && (mid == 0 || arr[mid - 1] == 0)) :
            return mid
        else if (arr[mid] == 1) :
            high = mid - 1
        else :
            low = mid + 1
    }
}
