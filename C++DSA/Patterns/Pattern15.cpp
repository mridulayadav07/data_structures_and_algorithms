#include <iostream>
using namespace std;

int main(){
    int i,m;
    cout << " Enter the value of m: ";
    cin >> m;
    for(i=0; i < m; i++ ){
        for(char ch = 'A'; ch <= 'A' + (m-i-1); ch++){
        cout << ch;
        }
        cout << "\n";
    }
    return 0;
}