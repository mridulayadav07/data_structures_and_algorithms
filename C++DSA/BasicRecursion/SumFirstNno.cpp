#include<bits/stdc++.h>
 using namespace std;
int n;
int N = 1;
int sum = 0;
/*Parameterised Recursion
 void f(int N,int sum, int n){
    if (N > n) {cout << sum << endl;
        return;
    }
    f(N+1,sum + N,n);
 }*/
// Functional Recursion
 int f(int n){
    if (n == 0) {
        return 0;
    }
    return n + f(n-1); 
    
 }
 int main(){
    int n;
    cout << "Enter n ";
    cin >> n;
    cout << f(n);
    
    return 0;
 }