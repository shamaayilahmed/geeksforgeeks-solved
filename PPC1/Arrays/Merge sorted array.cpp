/*Description : We are given two sorted arrays arr1[ ] and arr2[ ] of size m and n. We have to merge these arrays and store the numbers in arr3[ ] of size m+n.
Input
1 3 4 6
2 5 7 8
Output
1 2 3 4 5 6 7 8
Solution : Idea is to traverse both arrays simultaneously and compare the current numbers from the both the Arrays. Pick the smaller element and copy to arr3[ ] and advances the current index of the array, from where smaller element is picked. When we reach the end of one of the array, Copy the remaining elements of another array to arr3[ ].
*/
Pseudo Code
// input arrays - arr1(size m), arr2(size n)
void merge_sorted(arr1, arr2, m, n)
{
    arr3[m+n] // merged array
    i=0,j=0,k=0
    while(i < m && j < n) 
    {
        if arr1[i] < arr2[j] :
            arr3[k++] = arr1[i++]
        else :
            arr3[k++] = arr2[j++]
    }
    while(i < m)
        arr3[k++] = arr1[i++]
    while(j < n)
        arr3[k++] = arr2[j++]
}
