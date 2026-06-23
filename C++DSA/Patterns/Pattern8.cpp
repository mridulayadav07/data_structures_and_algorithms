#include <iostream>
using namespace std;

int main(){
    int i,j,k,l,m;
    cout << " Enter the value of m: ";
    cin >> m;
    for(i=m; i > 0; i-- ){
        for(j = m-i; j > 0; j--){
        cout << " ";
        }
        for(j = 2*i - 1; j > 0; j--){
        cout << "*";
        }  
        for(j = m-i; j > 0; j--){
        cout << " ";
        }
        cout << "\n";
    }
    return 0;
}