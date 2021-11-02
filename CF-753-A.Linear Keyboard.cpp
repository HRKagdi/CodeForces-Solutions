//https://codeforces.com/contest/1607/problem/A
//Linear Keyboard

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string key,str; cin>>key>>str;
        map<int,int> m;
        for(int i=0;i<key.size();i++){
            m[key[i]-'a']=i;
        }
        int ans=0;
        for(int i=1;i<str.size();i++){
            ans+=abs(m[str[i]-'a']-m[str[i-1]-'a']);
        }
        cout<<ans<<endl;
    }
    return 0;
}
