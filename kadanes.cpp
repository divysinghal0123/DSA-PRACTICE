#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    int currsum = 0;
    int maxSum = INT_MIN;
    for(i=0;i<n;i++){
        currsum+=arr[i];
        if(currsum < 0){
            currsum = 0;
        }
        maxSum = max(maxSum,currsum);
    }
    cout << maxSum << endl;
    return 0;
}