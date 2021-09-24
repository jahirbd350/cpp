//#include <bits/stdc++.h>
//#include <stdio.h>
//#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){
    int i,j,k,loc,n,mn;
    cout << "Enter the number of element: ";
    cin >> n;
    int data[n];

    cout << "Enter the data elements: ";
    for(i=0;i<n;++i){
        cin >> data[i];
    }

    for(i=0;i<n;++i){
        mn = data[i];
        loc = i;

        for(j=i+1;j<n;++j){
          if(mn<data[j]){
            mn = data[j];
            loc = j;
          }
        }
        swap(data[i],data[loc]);
    }

    cout <<"Sorted Data: ";
    for(i=n-1 ;i>=0;--i){
        cout << data[i] <<" ";
    }
}
