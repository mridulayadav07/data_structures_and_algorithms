#include<bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int>& nums) { 
    int n = nums.size();
    if(n== 0) return ;
    int longest = 1;
    unordered_set<int> st;
    for(int i = 0; i < n; i++){
        st.insert(nums[i]);
    }
    for(auto it : st){
        if(st.find(it - 1) == st.end()){
            int cnt = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                x = x+1;
                cnt = cnt+1;
            }
            longest = max(longest, cnt);
        }
    }
    cout << "The Longest Consecutive Sequence Elements Number is: "<< longest;
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