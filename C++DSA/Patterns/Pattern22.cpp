#include <iostream>
using namespace std;

int main(){
    int i,j,m;
    cout << " Enter the value of m(rows): ";
    cin >> m;
    for(i=1; i <= 2*m-1; i++ ){
        for(j = 1; j <= m*2-1; j++){
            int top = i-1;
            int left = j-1;
            int right = ( 2*m -1) -j;
            int down = (2*m - 1) -i;
            cout << (m - min(min(top,down), min(left,right)));
            
        }
        
        cout << "\n";
    }
    return 0;
}