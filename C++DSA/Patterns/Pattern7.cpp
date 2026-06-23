#include <iostream>
using namespace std;

int main(){
    int i,j,k,l,m;
    cout << " Enter the value of m: ";
    cin >> m;
    for(i=1; i <= m; i++ ){
        for(j = 1; j <= m-i; j++){
        cout << " ";
        }
        for(j = 1; j <= 2*i - 1; j++){
        cout << "*";
        }  
        for(j = 1; j <= m-i; j++){
        cout << " ";
        }
        cout << "\n";
    }
    return 0;
}