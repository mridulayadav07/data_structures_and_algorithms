#include<bits/stdc++.h>
 using namespace std;

 int main(){
    int N;
    cout << "Enter the Number :" ;
    cin >> N;
    int DupN = N;
    int revNum = 0;
    int sign = (N < 0) ? -1 : 1;  
        N = abs(N);
    while(N > 0){
        int lastdigit = N % 10;
        revNum = (revNum * 10 ) + lastdigit;
        N = N/10;
    }
     revNum = sign * revNum;
     if (revNum == DupN ){
        cout<< "The number is a palimdrome number";
     }
     else {
        cout<< " The number is not palindrome";
     }   
     
 } 