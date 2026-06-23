#include <iostream>
using namespace std;

int main(){
    int i,m;
    cout << " Enter the value of m: ";
    cin >> m;
    int iniS = 0;
    for(i=0; i < m; i++ ){
        //stars
        for (int j = 1; j <= m-i; j++ ){
            cout << "*";
        }
        //spaces
        for (int j = 0; j< iniS; j++){
            cout << " ";
        }
        //stars
        for (int j = 1; j <= m-i; j++ ){
            cout << "*";
        }
        iniS += 2;
        cout << "\n";
    }
    iniS = 8;
    for(i=1; i <= m; i++ ){
        //stars
        for (int j = 1; j <= i; j++ ){
            cout << "*";
        }
        //spaces
        for (int j = 0; j< iniS; j++){
            cout << " ";
        }
        //stars
        for (int j = 1; j <= i; j++ ){
            cout << "*";
        }
        iniS -= 2;
        cout << "\n";
    }
    return 0;
}