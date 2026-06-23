#include<bits/stdc++.h>
 using namespace std;
  
int SumKLongSub(vector<int>& arr,long long k) {
    int MaxLen = 0;
    long long sum = arr[0];
    int n = arr.size(); 
    int left = 0;
    int right = 0;
    while(right < n){
        if(left <= right && sum > k){
            sum -= arr[left];
            left++;
        }
        if(sum == k){
            MaxLen = max(MaxLen,right - left +1);
        }
        right++;
        if(right < n) sum += arr[right];
    }
    
    cout << "Maximum length of subarray with sum k = " << MaxLen;
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
    int k;
    cout << "Enter the sum required:";
    cin >> k;
    SumKLongSub(arr,k);
    return 0;
 } 