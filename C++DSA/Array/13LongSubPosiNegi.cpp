#include<bits/stdc++.h>
 using namespace std;
  
int getLongestSubarray(vector<int> & arr,long long k){
    int n = arr.size();
    long long sum = 0;
    int MaxLen = 0;
    map<long long,int> preSumMap;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum == k){
        MaxLen = max(MaxLen, i+1);
    }
    int rem = sum - k;
    if( preSumMap.find(rem) != preSumMap.end()){
        int len = i - preSumMap[rem];
        MaxLen = max(MaxLen,len);
    }

    }
    cout << " The length of longest subarray with required sum =" << MaxLen;
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
    getLongestSubarray(arr,k);
    return 0;
 } 