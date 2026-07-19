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
    }else if (v[i] < small2 && v[i] != small) {
            small2 = v[i];
        }
    
    if(v[i]>large)
{
    large2=large;
    large=v[i];
}else if (v[i] > large2 && v[i] != large) {
            large2 = v[i];
        }
}
cout<<"smallest ele-->"<<small<<endl;
cout<<"2nd smallest ele-->"<<small2<<endl;
cout<<"largest element -->"<<large<<endl;
cout<<"2nd largest element -->"<<large2;

   return 0;
}