#include<bits/stdc++.h>
 using namespace std;

 int main(){
    int n;
    cout << "Enter the size of array:";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter " << i << "th element of array:";
        cin >> arr[i];
    } 
    int largest = arr[0];
    for(int i = 0; i < n; i++){ 
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << "The largest element in given array is:" << largest;
    return 0;
 } 