#include <iostream>
using namespace std;

int main(){
    int i,j,m;
    cout << " Enter the value of m(rows): ";
    cin >> m;
    int space = 2 * (m-1);
    for(i=1; i <= m; i++ ){
        for(j = 1; j <= i; j++){
            cout << j;
        }
        for(j = 1; j<= space; j++){
            cout << " ";
        }
        for(j = i; j >= 1; j--){
            cout << j;
        }
        cout << "\n";
        space -= 2;
    }
    return 0;
}