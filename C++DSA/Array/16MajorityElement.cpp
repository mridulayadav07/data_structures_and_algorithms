#include<bits/stdc++.h>
 using namespace std;
void MajorityElement(vector<int>& arr) {
    int count = 0;
    int elm;
    int n = arr.size();
    for(int i = 0; i < n; i++){
        if(count == 0){
            count = 1;
            elm = arr[i];
        }
        else if(arr[i] == elm){
            count++;
        }
        else{
            count--;
        }
    }
    int count1 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == elm) count1++;
        if(count1 > n/2){
            cout << "The Majority Element is " << elm;
        }
    }
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
    MajorityElement(arr);
    return 0;
 } 