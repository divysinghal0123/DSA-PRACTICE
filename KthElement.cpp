#include <iostream>
#include <algorithm>
using namespace std;
int smallest(int arr[],int n,int k)
{
	sort(arr, arr + n);
	return arr[k - 1];
}
int main()
{
    int N,k;
    cin>>N;
	int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    cin>>k;
	cout<<smallest(arr,N,k);
	return 0;
}