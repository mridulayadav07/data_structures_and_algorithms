#include<bits/stdc++.h>
 using namespace std;
int MissingNumber(vector<int>& arr,int n) {
    int XOR1 = 0;
    int XOR2 = 0;
    for(int i = 0; i < n-1; i++){
        XOR2 = XOR2 ^ arr[i];
        XOR1 = XOR1 ^ (i+1);
    }
    XOR1 =XOR1 ^ n;
    int miss = XOR1 ^  XOR2;
    cout << "The missing number is :" << miss ;
    }
 int main(){
    int n;
    cout << "Enter the size of array:";
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cout << "Enter " << i << "th element of array:";
        cin >> arr[i];
    } 
    MissingNumber(arr,n);
    return 0;
 } 