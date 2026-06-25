#include<bits/stdc++.h>
 using namespace std;
  
int XORasK(vector<int>& arr,long long k) {
    int n = arr.size();
    int xr = 0;
    int cnt = 0;
    map<int,int> mpp;
    mpp[xr]++;
    for(int i = 0; i< n; i++){
        xr = xr ^ arr[i];
        int x = xr^k;
        cnt += mpp[x];
        mpp[xr]++;
    }

    
    cout << "The number of subarrays with XOR as k: "<< cnt ;
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
    cout << "Enter the XOR required:";
    cin >> k;
    XORasK(arr,k);
    return 0;
 } 