#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if(nums.size() == 0) return 0;

    int i = 0;

    for(int j = 1; j < nums.size(); j++){
        if(nums[j] != nums[i]){
            nums[i + 1] = nums[j];
            i++;
        }
    }
    return i + 1;
}

int main() {
    int n;
    cout << "Enter size of array:  ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements (sorted): ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int newSize = removeDuplicates(nums);

    cout << "Array after removing duplicates: ";
    for(int i = 0; i < newSize; i++){
        cout << nums[i] << " ";
    }

    cout << "\nNew size: " << newSize;

    return 0;
}