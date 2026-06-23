#include<bits/stdc++.h>
 using namespace std;
int LinearSearch(vector<int>& arr,int num) {
    int n = arr.size();         
    for(int i = 0; i < n; i++){
        if(arr[i] == num){
            cout << "The query number is at " << i << " index!";
        }
        }
        return -1;
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
    int num;
    cout << "Enter the number to be searched:";
    cin >> num;
    LinearSearch(arr,num);
    return 0;
 } 