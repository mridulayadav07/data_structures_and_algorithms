#include<bits/stdc++.h>
 using namespace std;
vector<int> TwoSum(vector<int>& arr, int target ) {
     for (int i = 0; i< arr.size(); i++){
            for (int j = i + 1; j < arr.size(); j++){
                if (arr[j] == target - arr[i]){
                    return {i , j};
                }
            }
        }
        return {};
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
    int target;
    cout << "Enter the target sum: ";
    cin >> target;
    TwoSum(arr,target);
    return 0;
 } 