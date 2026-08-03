#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int l=0;
    int r=n-1;

    while(l<=r){
        if(v[r]<0){
            r--;
        }
        if(v[l]<0){
            swap(v[l],v[r]);
            l++;
            r--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
    return 0;
}