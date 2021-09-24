#include <iostream>
using namespace std;

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod){
    if(n==1){
        cout << "Move the disk 1 from " <<from_rod << " to "<< to_rod <<endl;
        return;
    }
    towerOfHanoi(n-1,from_rod,aux_rod,to_rod);
    cout << "Move the disk "<<n<<" from "<<from_rod<<" to "<<to_rod<<endl;
    towerOfHanoi(n-1,aux_rod,to_rod,from_rod);
}

int main(){
    int n;
    cout << "Enter the number of disk: ";
    cin >> n;

    towerOfHanoi(n,'A','C','B');
    return 0;
}
