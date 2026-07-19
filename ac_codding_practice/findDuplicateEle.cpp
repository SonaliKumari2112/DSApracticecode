#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<int,int>u;
    for(int i=0;i<n;i++){
        u[v[i]]++;
    }
    for(auto it:u){
        if(it.second>1){
            cout<<it.first<<"-->"<<it.second<<endl;
        }
    }
    return 0;
}