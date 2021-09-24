#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of element: ";
    cin >> n;

    int A[n];
    cout << "Enter the elements : ";
    for(int i = 1 ; i<=n; i++)
        cin >> A[i];

    A[0] = -999;

    for(int i = 0 ; i<=n; i++)
        cout << A[i] << " " ;

    for(int k=2; k<=n; k++){
        int temp = A[k];
        int ptr = k-1;

        while(temp<A[ptr]){
            A[ptr+1] = A[ptr];
            ptr = ptr-1;
        }
        A[ptr+1]=temp;
    }

    cout << "Elements after insertion sort : ";
    for(int i=1; i<=n; i++)
        cout << A[i] <<" ";
}
