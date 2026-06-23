 #include<bits/stdc++.h>
 using namespace std;

 int main(){
    int n1 ,n2;
    cout << "Enter the First Number :" ;
    cin >> n1;
    cout << "Enter the Second Number :" ;
    cin >> n2;
    for(int i = min(n1,n2); i >= 1; i--){
        if(n1 % i == 0 && n2 % i == 0){
            cout << i;
            break;
        }
    }
    return 0;
 } 