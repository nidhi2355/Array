#include<bits/stdc++.h>
using namespace std;
//return particular element
int ncr(int row, int cols){
    int result=1;
    int n=row-1;
    int r=cols-1;
    for(int i=0;i<r;i++){
        result=result*(n-i);
        result=result/(i+1);
    }
    return result;
}
//return entire row
void pascalt(int row){
    int ans=1;
    cout<<ans<<" ";
    for(int i=1;i<row;i++){
        ans=ans*(row-i);
        ans=ans/i;
        cout<<ans<<" ";
    }
}
//print entire triangle
vector<int> printrow(int row){
    vector<int> ans;
    ans.push_back(1);
    int a=1;
    for(int i=0;i<row;i++){
        a*=(row-i);
        a/=(i+1);
        ans.push_back(a);
    }
    return ans;
}
vector<vector<int>> printtriangle(int row){
    vector<vector<int>> ans;
    for(int i=0;i<row;i++){
        ans.push_back(printrow(i));
    }
    return ans;
}
int main(){
    int row,cols;
    cin>>row>>cols;
    //print particular element
    int elem=ncr(row,cols);
    cout<<elem<<endl;
    cout<<endl;
    //print entire row
    pascalt(row);
    cout<<endl;
    cout<<endl;
    //print entire triangle 
    vector<vector<int>> ans=printtriangle(row);
    for(auto it: ans){
        for(auto col:it){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return(0);
}
