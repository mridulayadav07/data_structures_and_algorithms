#include<bits/stdc++.h>
 using namespace std;

 int main(){
    int N;
    cout << "Enter the Number :" ;
    cin >> N;
    cout << " The extracted digits are:\n";
    while(N > 0){
        int lastdigit = N % 10;
        cout << lastdigit << endl;
        N = N/10;
    }
    return 0;
 } 