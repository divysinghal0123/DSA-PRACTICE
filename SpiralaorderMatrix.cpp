#include<iostream>
using namespace std;
int main()
{
    int n,m;
    int i,j;
    cin >> n >> m;
    int a[100][100];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    int rows=0,rowe=n-1,cols=0,cole=m-1;
    while(rows <= rowe && cols <= cole)
    {
        int row,col;
        for(col=cols;col<=cole;col++){
            cout << a[rows][col]<<" ";
        }
        rows++;
        for(row=rows;row<=rowe;row++){
            cout << a[row][cole]<<" ";
        }
        cole--;
        for(col=cole;col>=cols;col--){
            cout<<a[rowe][col]<<" ";
        }
        rowe--;
        for(row=rowe;row>=rows;row--){
            cout<<a[row][cols]<<" ";
        }
        cols++;
    }
    cout << "\n";
    return 0;

}