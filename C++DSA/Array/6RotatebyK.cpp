#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArray(int arr[], int n, int k){
    k = k % n;  // ✅ important

    reverse(arr, 0, n-k-1);   // ✅ fixed
    reverse(arr, n-k, n-1);
    reverse(arr, 0, n-1);
}

int main(){
    int n;
    cout << "Enter the size of array:";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cout << "Enter " << i << "th element of array:";
        cin >> arr[i];
    }

    int k;
    cout << "Enter the value of k:";
    cin >> k;

    rotateArray(arr, n, k);

    cout << "Rotated Array is:";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " | ";
    }

    return 0;
}