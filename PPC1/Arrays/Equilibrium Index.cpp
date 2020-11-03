// n : size of array
int eqindex(arr, n)
{
    sum = 0
    leftsum = 0
    for (i=0 to n-1)
        sum += arr[i]

    for (i=0 to n-1)
    {
        // now sum will be righsum for index i
        sum -= a[i]
        if (sum == leftsum )
            return i
        leftsum += a[i]
    }
}
