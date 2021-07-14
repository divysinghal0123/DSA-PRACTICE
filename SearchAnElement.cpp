                                    //APPROACH -1 
#include<bits/stdc++.h>
 using namespace std;
// int main()
// {
//     int n,m;
//     cin >> n;
//     int a[n][m];
//     int i,j;
//     int target;
//     cin >> target;
//     cout << "Input : " << endl;
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     bool found = false; 
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             if(a[i][j]==target)
//             found = true;
//         }
//     } 
//     if(found)
//     {
//         cout << "found";
//     }else{
//         cout << "not found";
//     }

//     return 0;


// }
                                           //APPROACH -2
int main()
{
     int n ,m;
    cin >> n >> m;
    int a[n][m];
    int i,j;
    int target;
    cin >> target;
    cout << "Input : " << endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin >> a[i][j];
        }
    }
    bool found = false;
    int r=0,c=n-1;
    while(r<m && c>=0){
        if(a[r][c] == target){
            found = true;
        }
        a[r][c] > target ? c--:r++;
    }
    if(found){
        cout <<"found";
    }else{
        cout <<"not found";
    }
    return 0;


}                                           