#include <iostream>
using namespace std;

int main(){
    int i,j,m;
    cout << " Enter the value of m(rows): ";
    cin >> m;
    int start = 1;
    for(i=1; i <= m; i++ ){
        if(i%2 == 0) start =0;
        else start = 1;
        for (int j = 1; j <= i; j++){
            cout << start;
            start = 1 - start;
        }
        cout << "\n";
    }
    return 0;
}