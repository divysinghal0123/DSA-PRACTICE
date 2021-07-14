#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int i,j;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j] == k){
                sum++;
            }
        }
    }
    cout  << "Pairs :  " << sum;
    return 0;
}