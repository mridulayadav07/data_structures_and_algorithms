#include<bits/stdc++.h>
 using namespace std;
int i = 1;
 void f(int i,int n){
    if(i > n) return;
    cout << "Mridula"  << endl;
    f(i+1,n);
 }
 int main(){
    int n;
    cout << "Enter n ";
    cin >> n;
    f(i,n);
    
    return 0;
 }