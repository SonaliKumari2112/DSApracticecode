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
    int small=INT8_MAX;
    int large=INT8_MIN;
    int small2;
    int large2;

for(int i=0;i<n;i++)
{
    if(v[i]<small){
       small2=small;
       small=v[i];
    }
    
    if(v[i]>large)
{
    large2=large;
    large=v[i];
}}
cout<<"smallest ele-->"<<small<<endl;
cout<<"2nd smallest ele-->"<<small2;
   return 0;
}