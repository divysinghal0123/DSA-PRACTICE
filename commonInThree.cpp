#include<bits/stdc++.h>
using namespace std;

void common(int a1[],int a2[],int a3[],int n1,int n2,int n3)
{
    int i,j,k;
    i=j=k=0;
    while(i < n1 && j < n2 && k < n3){
        if(a1[i] == a2[j] && a2[j] == a3[k]){
            cout << " " << a1[i];
            i++;
            j++;
            k++;

        }
        else if(a1[i] < a2[j]){
            i++;
        }
        else if(a2[j] < a1[i]){
            j++;
        }
        else{
            k++;
        }
    }
}
int main()
{
    int n1,n2,n3;
    cin >>n1 >>n2 >>n3;
    int a1[n1],a2[n2],a3[n3];
    int a,b,c;
    for(a=0;a<n1;a++){
        cin >> a1[a];
    }
    for(b=0;b<n2;b++){
        cin >> a2[b];
    }
    for(c=0;c<n3;c++){
        cin >> a3[c];
    }
     cout <<"Common : ";
    common(a1,a2,a3,n1,n2,n3);
   
    return 0;

}