#include<bits/stdc++.h>
 using namespace std;
void MaxSubarray(vector<int>& arr) {
    long long sum = 0;
    long long maxi = LONG_MIN;
    int n = arr.size();
    int start;
    int ansStart = -1, ansEnd = -1;
    for(int i = 0; i < n; i++){
        if(sum == 0) start = i;
        sum += arr[i];
        if(sum > maxi){
            maxi = sum;
            ansStart = start, ansEnd = i;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    cout << "The maximum subarray sum is "<< maxi;
    cout << "\nThe Maximum sum subarray is: ";
    for(int i = ansStart; i <= ansEnd; i++){
        cout << arr[i] << " ";
    }
    cout << endl;    
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