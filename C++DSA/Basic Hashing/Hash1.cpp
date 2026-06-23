 #include<bits/stdc++.h>
 using namespace std;
// int arr[1e7]; // can be declared more outside main or globally upto 1e8!!
 int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    int arr[n] ;
    for (int i= 0; i < n; i++){
        cout << "Enter " << i << "th element: ";
        cin >> arr[i];
    }
    //precompute
    int hash[13] = {0};
    for(int i = 0; i < n; i++){
        hash[arr[i]] += 1;
    }

    int q;
    cout << "Enter the number of frequencies to be calculated:";
    cin >> q;
    while(q--){
        int number;
        cout << "Enter the number of which frequencies are to be calculated: ";
        cin >> number;
        //fetch
        cout << hash[number] << endl;
    }
    return 0;
 } 