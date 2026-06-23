#include<bits/stdc++.h>
 using namespace std;

 int main(){
    int N;
    cout << "Enter the Number :" ;
    cin >> N;
    int DupN = N;
    int sum = 0;
    while(N > 0){
        int lastdigit = N % 10;
        sum = sum + (lastdigit * lastdigit * lastdigit);
        N = N/10;
    }
    if( sum == DupN){
      cout << "True";
    }
    else cout << "False";
    return 0;
 } 