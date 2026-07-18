#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"position";
    int k;
    cin>>k;
    reverse(a.begin(),a.begin()+k);
    reverse(a.begin()+k,a.end());
    reverse(a.begin(),a.end());

     for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}