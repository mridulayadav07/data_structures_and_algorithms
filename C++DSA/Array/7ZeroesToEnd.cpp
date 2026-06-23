#include<bits/stdc++.h>
 using namespace std;
void moveZeroes(vector<int>& arr) {
        int n = arr.size();
        int j = -1;
        for(int i = 0; i < n; i++){
            if(arr[i]==0){
                j = i;
                break;
            } 
        }
        if(j == -1) return;
        for(int i = j+1; i < n; i++){
            if(arr[i]!= 0){
                swap(arr[i],arr[j]);
                j++;
            }
        }
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
    moveZeroes(arr);
    cout << "Array after moving zeroes to end:";
    for(int i=0;i<n;i++){
        cout << arr[i] << " | ";
    }
    return 0;
 } 