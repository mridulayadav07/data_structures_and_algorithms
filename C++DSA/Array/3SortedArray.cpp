#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bool isSorted = true;   // assume sorted

    for(int i = 1; i < n; i++){
        if(arr[i] < arr[i-1]){
            isSorted = false;   // found violation
            break;              // no need to check further
        }
    }

    if(isSorted){
        cout << "The Array is Sorted";
    } else {
        cout << "The Array is NOT Sorted";
    }

    return 0;
}