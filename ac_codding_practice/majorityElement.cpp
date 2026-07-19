#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int thres=n/2;
    unordered_map<int ,int>um;
    for(int i=0;i<n;i++){
        um[v[i]]++;
    }
    for(auto it:um){
        if(it.second>=thres){
            cout<<"majority element -->"<<it.first;
        }
    }
    return 0;
}