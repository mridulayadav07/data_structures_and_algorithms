#include<bits/stdc++.h>
 using namespace std;

 int main(){
    int N;
    cout << "Enter the Number :" ;
    cin >> N;
    int count = 0;
    for(int i = 1; i*i <= N; i++){
        if(N % i == 0){
            count++;
            if ((N/i)!= i) count ++;
        }
    }
    if(count == 2){
        cout << "True!";
    }
    else cout << "False";
    return 0;
 } 