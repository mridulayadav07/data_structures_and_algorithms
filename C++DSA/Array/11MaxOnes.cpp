#include<bits/stdc++.h>
 using namespace std;

void findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                count++;
                maxi = max(maxi,count);
            }
            else{
                count = 0;
            }
        }
        cout << "The maximum time one has been consecutively repeated is:" << maxi;
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
    findMaxConsecutiveOnes(arr);
    return 0;
 } 