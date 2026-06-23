#include<bits/stdc++.h>
 using namespace std;
void MaxSubarray(vector<int>& arr) {
    long long sum = 0;
    long long maxi = LONG_MIN;
    int n = arr.size();
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum > maxi){
            maxi = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    cout << "The maximuma subarray sum is "<< maxi;
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
    MaxSubarray(arr);
    return 0;
 } 