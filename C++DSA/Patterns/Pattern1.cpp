#include <iostream>
using namespace std;

int main(){
    int i,j,m,n;
    cout << " Enter the value of m(rows): ";
    cin >> m;
    cout << " Enter the value of n(coloumns): ";
    cin >> n;
    for(i=1; i <= m; i++ ){
        for(j = 1; j <= n; j++){
        cout << "*";
        }
        cout << "\n";
    }
    return 0;
}