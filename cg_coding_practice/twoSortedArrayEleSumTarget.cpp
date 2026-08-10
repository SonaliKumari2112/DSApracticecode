#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   
    int n,m;
    cout<<"enter the size of array 1";
    cin>>n;
    cout<<"enter the size of array 2";
    cin>>m;
     vector<int>arr1(n);
    vector<int>arr2(m);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
     int cnt=0;
    int l=0;
    int r=m-1;
    int t;
    cin>>t;
    while(l<n&&r>=0){
       
            if(arr1[l]+arr2[r]<=t){
                cnt=r+1;
                l++;
            }else{
                r--;
            
            }
            
    }
    cout<<cnt;

    return 0;
}