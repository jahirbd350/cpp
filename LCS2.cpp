#include <bits/stdc++.h>

using namespace std;

void lcs(string x, string y, int m, int n){
    int L[m][n];
    int z=0;
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0){
                L[i][j]=0;
            }else if(x[i]==y[j]){
                L[i][j]=L[i-1][j-1]+1;
            }else{
                L[i][j] = max(L[i-1][j],L[i][j-1]);
            }
            z=L[i][j];
        }

    }

    char lcs[z+1];
    lcs[z+1] = '\0';

    int i=m;
    int j=n;
    while(i>=0 && j>=0){
        if(x[i]==y[j]){
            lcs[z]=x[i];
            i--;j--;z--;
        }else if(L[i-1][j]>L[i][j-1]){
            i--;
        }else{
            j--;
        }
    }
    cout <<lcs;
}

int main(){
    string x,y;
    cin >> x >>y;
    int m = x.length();
    int n = y.length();

    lcs(x,y,m,n);
    return 0;
}
