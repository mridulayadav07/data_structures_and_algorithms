#include<bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int>& nums) { 
    int n = nums.size();
    int ind = -1;
    for(int i = n-2;i >= 0; i-- ){
        if(nums[i] < nums[i+1]){
            ind = i;
            break;
        }
    }
    if(ind == -1){
        reverse(nums.begin(),nums.end());
        cout << "The Next Permutation is: ";
        for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
        }
        cout << endl; 
    }
    for(int i = n-1; i > ind; i--){
        if(nums[i] > nums[ind]){
            swap(nums[i],nums[ind]);
            break;
        }
    }
    reverse(nums.begin() + ind + 1, nums.end());
    cout << "The Next Permutation is: ";
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
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
    nextPermutation(arr);
    return 0;
 }   