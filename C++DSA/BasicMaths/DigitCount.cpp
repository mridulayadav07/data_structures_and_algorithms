#include<bits/stdc++.h>
 using namespace std;
 int count (int n){
    int cnt =0;
    while (n >0){
        cnt = cnt + 1;
        n = n /10;
// int cnt = (int) (log 10(n) + 1);
    }
    return cnt;
 }
 int main(){
    int n;
    cout << "Enter the Number:";
    cin >> n;
    int result = count(n);
    cout << "The no. of digits are:" << result;
    return 0;
 } 