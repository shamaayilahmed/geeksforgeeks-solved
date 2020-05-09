/*This would be a basic problem in O(n^2)

As for O(n) we find a pattern from the test cases ;
The prime numbers whose square root is within the range of given numbers ,have Exactly 3 divisors. */
bool isprime(int num,int i=2){
    if(i==num)
        return true;
    if(num%i==0)
        return false;
    else
        isprime(num,i+1);
}

int exactly3Divisors(int N)
{
int count=0;
    for(int i=2;i*i<=N;i++){
        if(isprime(i)){
            count ++;
        }
        else
            continue;
    }
    return count;
}
