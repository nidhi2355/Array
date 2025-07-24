#include<bits/stdc++.h>
using namespace std;
int largest(vector<int> &arr){
    int l= arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]>l) l=arr[i];
    }
    return l;
}
int main(){
    vector<int> arr;
    int q;
    cin>>q;
    while(q>0){
        int num;
        cin>>num;
        arr.push_back(num);
        q--;
    }
    cout<<largest(arr);
    return(0);
}