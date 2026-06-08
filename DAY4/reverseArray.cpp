#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0;
    int r=n-1;
    while(l<r)
    {
        int temp=a[l];
        a[l]=a[r];
        a[r]=temp;
        l++;
        r--;
    }
     for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}