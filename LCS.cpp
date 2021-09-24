#include<bits/stdc++.h>

using namespace std;

void lcs (string x, string y, int m, int n){
    int L[m+1][n+1];
    //int z;
    for(int i=0;i<=m;i++){
        for(int j=0; j<=n;j++){
            //cout<<"x[i]= "<<x[i]<<"| y[i]= "<<y[i]<<endl;
            if(i==0 || j==0){
                L[i][j]=0;
            }else if(x[i]==y[j]){
                L[i][j]=L[i-1][j-1]+1;
            }else{
                L[i][j]=max(L[i-1][j],L[i][j-1]);
            }
            //z = L[i][j];
        }
    }
    //cout << z;

    int z = L[m][n];

   char lcs[z+1];
   lcs[z] = '\0';

    int i=m, j=n;
    while(i>=0 && j>=0){
            //cout<<"x[i]= "<<x[i]<<"| y[i]= "<<y[i]<<endl;
        if(x[i] == y[j]){
            lcs[z-1]=x[i];
            //cout<<lcs;
            i--;j--;z--;
        }else if(L[i-1][j]>L[i][j-1]){
            i--;
        }else{
            j--;
        }
    }
    cout<<lcs;
}

int main(){
    string x,y;
    cin>>x;
    cin>>y;

    int m = x.length();
    int n = y.length();
    lcs(x,y,m,n);
    return 0;
}
