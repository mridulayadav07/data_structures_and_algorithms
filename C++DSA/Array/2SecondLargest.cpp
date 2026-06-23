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
    int Slargest = -1;
    for(int i = 0; i < n; i++){ 
        if(arr[i] > largest){
            Slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > Slargest){
            Slargest = arr[i];
        }
    }
    cout << "The second largest element in given array is:" << Slargest;
    return 0;
 } 