#include <iostream>
using namespace std;

int main(){
    int i,j,m;
    cout << "Enter the value of m: ";
    cin >> m;

    for(i = 0; i < m; i++){

        // spaces
        for(j = 0; j < m-i-1; j++){
            cout << " ";
        }

        char ch = 'A';
        int breakpoint = i + 1;

        for(int j = 1; j <= 2*i+1; j++){
            cout << ch;
            if(j < breakpoint) ch++;
            else ch--;
        }

        cout << "\n";
    }

    return 0;
}