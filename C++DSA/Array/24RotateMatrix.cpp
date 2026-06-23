#include<bits/stdc++.h>
using namespace std;

void spiralMatrix(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    int left = 0, right = n-1;
    int top = 0, bottom = m-1;
    vector<int> ans;
    while (top <= bottom && left <= right){
        for(int i = left; i <= right; i++){
            ans.push_back(matrix[top][i]);
        }
        top++;
        for(int i = top; i <= bottom; i++){
            ans.push_back(matrix[i][right]);
        }
        right--;
        if(top <= bottom){
            for(int i = right; i >= left; i--){
                ans.push_back(matrix[bottom][i]);
            }
        bottom--;
        }
        if(left <= right){
            for(int i = bottom; i >= top; i--){
                ans.push_back(matrix[i][left]);
            }
        left++;
        }
    }
    cout << "\nThe Rearranged Array is: ";
    for(int i = 0; i < n*m; i++){
        cout << ans[i] << " ";
    }
    cout << endl; 
    
}

int main(){
    int n,m;
    cout << "Enter the columns of array:";
    cin >> m;
    cout << "Enter the rows of array:";
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(m));
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    spiralMatrix(arr);
    
    return 0;
 } 