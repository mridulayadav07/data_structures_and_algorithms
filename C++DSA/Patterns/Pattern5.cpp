#include <iostream>
using namespace std;

int main(){
    int i,j,m;
    cout << " Enter the value of m: ";
    cin >> m;
    for(i=m; i > 0; i-- ){
        for(j = i; j > 0; j--){
        cout << "*";
        }
        cout << "\n";
    }
    return 0;
}