#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int a[n][m];
    int i,j;
    int temp;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
   for (i = 0; i < n * m - 1; ++i) {
		for (j = 0; j < n * m - 1 - i; ++j) {
			// row = j/m
			// column = j%m
			if (a[j / m][j % m] > a[(j + 1) / m][(j + 1) % m]) {

				temp = a[(j + 1) / m][(j + 1) % m];
				a[(j + 1) / m][(j + 1) % m] = a[j / m][j % m];
				a[j / m][j % m] = temp;

			}
		}
	}
    cout << "Sorting" << endl;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout <<  a[i][j]  << " ";
        }
    }
    cout  << endl;
    cout << "Median" << endl;
    int number = (1+n*m)/2;
    cout << number;

    return 0;

}