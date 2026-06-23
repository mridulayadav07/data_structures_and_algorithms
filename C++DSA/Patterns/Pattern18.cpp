#include <iostream>
using namespace std;

int main(){
    int i,m;
    cout << " Enter the value of m: ";
    cin >> m;
    for(i=0; i < m; i++ ){
        for(char ch = 'E' - i; ch <= 'E'; ch++){
        cout << ch;
        }
        cout << "\n";
    }
    return 0;
}