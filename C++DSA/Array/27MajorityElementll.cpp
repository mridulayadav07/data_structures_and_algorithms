#include<bits/stdc++.h>
 using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    // vector<int> ls;
    // for(int i = 0; i < nums.size(); i++){
    //     if(ls.size() == 0 || ls[0] != nums[i]){
    //         int count = 0;
    //         for(int j = 0; j < nums.size(); j++){
    //             if(nums[j] == nums[i]){
    //                 count++;
    //             }
                
    //             }
    //             if(count > nums.size()/3){
    //                 ls.push_back(nums[i]);
    //         }
    //     }
    //     if(ls.size() == 2) break;
    // }
    // return ls;

    // unordered_map<int,int> mpp;
    // int n = nums.size();
    // int mm = (n/3) + 1;
    // for(int i = 0; i < n; i++){
    //     mpp[nums[i]]++;
    //     if(mpp[nums[i]] == mm){
    //         ls.push_back(nums[i]);
    //     }
    // }
    // return ls;
    int cnt1 = 0, cnt2 = 0;
    int el1, el2;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        if(cnt1 == 0 && nums[i] != el2){
            cnt1 = 1;
            el1 = nums[i];
        }
        else if(cnt2 == 0 && nums[i] != el1){
            cnt2 = 1;
            el2 = nums[i];
        }
        else if(el1 == nums[i]) cnt1++;
        else if(el2 == nums[i]) cnt2++;
        else{
            cnt1--;
            cnt2--;
        }
    }
    vector<int> ls;
    cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n; i++){
        if(el1 == nums[i]) cnt1++;
        if(el2 == nums[i]) cnt2++;
    }
    int mini = (int)(n/3) + 1;
    if(cnt1 >= mini) ls.push_back(el1);
    if(el1 != el2){
        if(cnt2 >= mini) ls.push_back(el2);
    }
    sort(ls.begin(),ls.end());
    return ls;
    }
};
 int main(){
    int n;
    cout << "Enter the size of array:";
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cout << "Enter " << i << "th element of array:";
        cin >> arr[i];
    } 
    Solution obj;
    vector<int> result = obj.majorityElement(arr);

    cout << "Majority elements: ";
    for(int x : result){
        cout << x << " ";
    }
    cout << endl;

    return 0;
 } 