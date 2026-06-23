 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    string s;
    cout << "Enter the string:";
    cin >> s;
    //precompute
    int hash[256] = {0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]]++;
    }
    int q ;
    cout << "Enter the number of characters whose frequency is to be calculated:";
    cin >> q;
    while(q--){
        char c;
        cout << "Enter the character whose frequency is to be calculated:";
        cin >> c;
        //fetch
        cout << hash[c] <<endl;
    }

    return 0;
 } 