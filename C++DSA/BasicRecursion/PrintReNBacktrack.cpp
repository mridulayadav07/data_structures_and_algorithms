#include<bits/stdc++.h>
 using namespace std;
 
int N = 1;
 void f(int N, int n){
    if (N > n) return;
    f(N+1,n);
    cout << N  << endl;
 }
 int main(){
    int n;
    cout << "Enter n ";
    cin >> n;
    f(N,n);
    
    return 0;
 }