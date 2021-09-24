#include<bits/stdc++.h>

using namespace std;

void knapsack (int n, int wt, int w[], int v[]){
    int K[n+1][wt+1];

    for(int i =0; i<=n; i++){
            //cout << w[i] <<" "<< v[i]<<endl;
        for (int j=0; j<=wt; j++){
            if(i ==0 || j==0){
                K[i][j]=0;
            }else if (w[i]<=j){
                K[i][j]=max(v[i] + K[i-1][j-w[i]], K[i-1][j]);
            }else{
                K[i][j] = K[i-1][j];
            }
            cout << K[i][j] <<" ";
        }
        cout<<endl;
    }
    cout<<K[n][wt];
}

int main(){
    int n;
    int wt;
    cin >> n >> wt;
    int w[n];
    int v[n];
    for (int i=1; i<=n; i++){
        cin >> w[i] >> v[i];
    }

//    for (int i=0; i<n; i++){
//        cout << w[i] <<" "<< v[i]<<endl;
//    }

    knapsack(n,wt,w,v);
    return 0;
}
