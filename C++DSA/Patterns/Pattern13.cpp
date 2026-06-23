#include <iostream>
using namespace std;

int main(){
    int i,j,m;
    cout << " Enter the value of m: ";
    cin >> m;
    int num = 1;
    for(i=1; i <= m; i++ ){
        for(j = 1; j <= i; j++){
            cout << num << " ";
            num = num + 1;
        }
        cout << "\n";
    }
    return 0;
}