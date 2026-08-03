#include<iostream>
#include<stack>
#include<sstream>
using namespace std;
int main(){
    string s,word;
    getline(cin,s);

    stack<string>st;
    stringstream ss(s);

    while(ss>>word){
        st.push(word);
    }

    for(int i=st.size();i>=0;i++){
        string n=st.top();
        st.pop();
    cout<<n<<" ";

    }
    
    return 0;
}
