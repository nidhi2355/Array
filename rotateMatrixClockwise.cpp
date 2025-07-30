#include<bits/stdc++.h>
using namespace std;
void rotateMatricClockwise(vector<vector<int>> &matrix,int n){
    //transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    //reverse all elements
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}
int main(){
    vector<vector<int>> matrix={{2,1,0},{3,0,1},{4,1,1}};
    int n;
    n=matrix.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    rotateMatricClockwise(matrix,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}