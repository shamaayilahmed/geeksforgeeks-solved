/*
Description: Given an unsorted array of size n. Array elements are in the range from 1 to n. One number from set {1, 2, …n} is missing and one number occurs twice in the array. Our task is to find these two numbers.
Input
[2, 3, 2, 1, 5]
Output
4 2

Solution : Use Sorting Follow the given steps-
 1) Sort the input array.
 2) Traverse the array and check for missing and repeating.
Time Complexity : O(nLogn)
Auxiliary Space: O(1)

Solution : Use Hashing We can create a auxiliary array to count the elements in the Array. We traverse the auxiliary array for finding out missing and repeating number in the array. Can we optimize the space ?
*/
Pseudo Code
//n : size of array
void repeating_missing(arr, n)
{
    count[n+1] = {0}
    for (i=0 to n-1 )
        count[a[i]]++

    for (i=1 to n) {
        if (count[i] == 0 )
            missing = i
        if (count[i] == 2 )
            repeating = i
    }
    print(repeating, missing)
}
Time Complexity: O(n)
Auxiliary Space : O(n)
