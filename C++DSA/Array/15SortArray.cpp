#include<bits/stdc++.h>
 using namespace std;
void SortArray(vector<int>& arr) {
    int n = arr.size();         
    int low = 0, mid = 0, high = n-1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
            }
            else if(arr[mid] == 1) mid++;
            else{
                swap(arr[mid],arr[high]);
                high--;
            }
        }
        for(int i = 0; i< n; i++){
            cout<< arr[i] << " | ";
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
    SortArray(arr);
    return 0;
 } 