#include<bits/stdc++.h>
 using namespace std;
int n;
int N = 1;
 void f(int N, int n){
    if (N > n) return;
    cout << N  << endl;
    f(N+1,n);
 }
 int main(){
    int n;
    cout << "Enter n ";
    cin >> n;
    f(N,n);
    
    return 0;
 }