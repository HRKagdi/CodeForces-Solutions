// https://codeforces.com/contest/1602/problem/A
// A.Two Subsequences

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string str; cin>>str;
        int x=26; int index;
        for(int i=0;i<str.size();i++){
            int z=str[i]-'a';
            if(z<x){
                x=z; index=i;
            }
        }
        char a=str[index];
        string b="";
        for(int i=0;i<index;i++) b+=str[i];
        for(int i=index+1;i<str.size();i++) b+=str[i];
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
