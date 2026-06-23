#include<bits/stdc++.h>
 using namespace std;

 int main(){
    int n;
    cout << "Enter the array size:";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter " << i << "th element of array:";
        cin >> arr[i];
    }
    //precompute
    map<int,int> mpp;
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }
//iterate in the map!!
    for(auto it : mpp){
        cout << it.first << "-->" << it.second << endl;
    }
    
    int q;
    cout << "Enter the number of queries:";
    cin >> q;
    while(q--){
        int number;
        cout << "Enter the query:";
        cin >> number;
        //fetch
        cout << mpp[number]<< endl;
    }
    return 0;
 } 