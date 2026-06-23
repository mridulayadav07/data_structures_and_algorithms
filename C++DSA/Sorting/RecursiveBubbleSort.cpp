#include<bits/stdc++.h>
 using namespace std;

 void bubble_sort(int arr[], int n){
    if(n == 1) return;
        for(int j = 0; j <= n-2; j++){
            if(arr[j] > arr[j+1]) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    bubble_sort(arr, n-1);
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
    bubble_sort(arr,n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " | ";
    }
    return 0;
 }  