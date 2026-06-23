#include <iostream>
using namespace std;

int main(){
    int i,j,m;
    cout << " Enter the value of m: ";
    cin >> m;
    for(i=0; i < m; i++ ){
        char ch = 'A' + i;
        for(j = 0; j <= i; j++){
            cout << ch << " ";
        }
        cout << "\n";
    }
    return 0;
}