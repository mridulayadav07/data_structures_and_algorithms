#include<bits/stdc++.h>
 using namespace std;

 void insertion_sort(int arr[], int n, int i){
    if(i == n) return;
    int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
        int temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = temp;
        j--;
        }
        insertion_sort(arr,n,i+1);
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
    insertion_sort(arr,n,0);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " | ";
    }
    return 0;
 }  