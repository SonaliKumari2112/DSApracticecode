#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
   vector<vector<int>> v(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    int r;
    cout<<"how many times you want to rotate";
    cin>>r;
     r=r%4;
    for(int i=0;i<r;i++){
            for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(v[i][j],v[j][i]);
        }
    }
    for(int i=0;i<n;i++){
       
            reverse(v[i].begin(),v[i].end());
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }
    return 0;
}