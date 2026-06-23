#include<bits/stdc++.h>
 using namespace std;
  
int SumKLongSub(vector<int>& arr,long long k) {
    /*int count = 0; 
        int n = nums.size();
        for(int i = 0; i < n; i++){
                int sum = 0;
            for(int j = i; j < n; j++){
                sum += nums[j];
                if(sum == k) count++;
            }
        }
        return count;*/
    int count = 0;
    int n = arr.size();
    long long presum = 0;
    map<long long,int> preSumMap;
    preSumMap[0] = 1;
    for(int i = 0; i < n; i++){
        presum += arr[i];
        int remove = presum - k;
        count += preSumMap[remove];
        preSumMap[presum] += 1;
    } 
    
    cout << "Total number of subarray with sum k = " << count;
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