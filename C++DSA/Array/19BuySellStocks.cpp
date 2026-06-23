#include<bits/stdc++.h>
 using namespace std;
int MaxProfit(vector<int>& arr) {
    int mini = arr[0], profit = 0;
    int n = arr.size();
    for(int i = 0; i < n;i++){
        int cost = arr[i] - mini;
        profit = max(profit,cost);
        mini = min(mini, arr[i]);
    }   
    cout << "The maximum profit is "<< profit;
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
    MaxProfit(arr);
    return 0;
 } 