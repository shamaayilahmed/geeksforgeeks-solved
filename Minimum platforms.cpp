#include <iostream>
#include<algorithm>
using namespace std;
/*Given arrival and departure times of all trains that reach a railway station.
Your task is to find the minimum number of platforms required for the railway station so that no train waits.

Note: Consider that all the trains arrive on the same day and leave on the same day.
    Also, arrival and departure times will not be same for a train, but we can have
    arrival time of one train equal to departure of the other. In such cases,
    we need different platforms, i.e at any given instance of time, same platform can not be used
    for both departure of a train and arrival of another.

Example:
Input:
2
6                                 number of trains
0900  0940 0950  1100 1500 1800   arrival
0910 1200 1120 1130 1900 2000     departure
3
0900 1100 1235
1000 1200 1240

Output:
3
1
*/

int minPlatform(int arrivalTime[],int departureTime[],int numTrains){
    sort(arrivalTime,arrivalTime+numTrains);
    sort(departureTime,departureTime+numTrains);
    
    int i=1,j=0,platform=1,result=1;  //'i' is 1 because initially we require 1 platform
    while(i<numTrains && j<numTrains){
        if(arrivalTime[i]<=departureTime[j]){
            platform++;
            i++;
        }
        else if(arrivalTime[i]>departureTime[j]){
            platform--;
            j++;
        }
        if(platform>result)
            result=platform;
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int test,numTrains;
    cin>>test;
    while(test--){
        cin>>numTrains;
        int arrivalTime[numTrains],departureTime[numTrains];
        for(int i=0;i<numTrains;i++){
            cin>>arrivalTime[i];
        }
        for(int i=0;i<numTrains;i++){
            cin>>departureTime[i];
        }
        cout<<minPlatform(arrivalTime,departureTime,numTrains)<<endl;
    }
    return 0;
}
