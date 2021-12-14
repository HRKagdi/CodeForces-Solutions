//https://codeforces.com/contest/1618/problem/B
//B. Missing Bigram

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<string> v(n-2);
        for(int i=0;i<v.size();i++) cin>>v[i];
        int index=-1; string ans="";
        for(int i=0;i<v.size()-1;i++){
            if(v[i][1]!=v[i+1][0]){
                ans+=v[i][1];
                ans+=v[i+1][0];
                index=i+1;
            }
        }
        string out=v[0];
        int temp=index;
        if(index==-1) index=v.size();
        for(int i=1;i<index;i++)
            out+=v[i][1];
        if(temp!=-1) out+=ans[1];
        for(int i=index;i<v.size();i++)
            out+=v[i][1];
        cout<<out;
        if(temp==-1){
            cout<<v[v.size()-1][1];
        }
        cout<<endl;
        
    }
    return 0;
}
