#include<bits/stdc++.h>
 using namespace std;

 int main(){
    int N;
    cout << "Enter the Number :" ;
    cin >> N;
    /*for(int i = 1; i <= N ; i++){
        if(N % i == 0){
            cout << i << " ";
        }
    }*/
   vector<int> ls;
    for ( int i = 1; i <= sqrt(N); i++){
        if(N % i == 0){
            ls.push_back(i);
            if ((N/i) != i){
                ls.push_back(N/i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for(auto it : ls) cout << it << " ";
    //can sort using vector and list with t.c O(sqrt N)
    return 0;
 } 