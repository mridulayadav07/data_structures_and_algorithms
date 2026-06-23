#include<bits/stdc++.h>
 using namespace std;
 void f(int N, int n){
    if (N < 1) return;
    f(N-1,n);
    cout << N  << endl;
 }
 int main(){
    int n;
    cout << "Enter n ";
    cin >> n;
    int N = n;
    f(N,n);
    
    return 0;
 }