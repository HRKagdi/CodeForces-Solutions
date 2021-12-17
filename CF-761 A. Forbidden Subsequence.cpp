//https://codeforces.com/contest/1617/problem/A
//A. Forbidden Subsequence

#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t;
    while(t--){
        string x,y; cin>>x>>y;
        int ca,cb,cc; ca=cb=cc=0;
        for(int i=0;i<x.size();i++){
            if(x[i]=='a') ca++;
            else if(x[i]=='b') cb++;
            else if(x[i]=='c') cc++;
        }
        if(y=="abc" && ca>0) {
            for(int i=0;i<ca;i++) cout<<"a";
            for(int i=0;i<cc;i++) cout<<"c";
            for(int i=0;i<cb;i++) cout<<"b";
        }
        else{
            for(int i=0;i<ca;i++) cout<<"a";
            for(int i=0;i<cb;i++) cout<<"b";
            for(int i=0;i<cc;i++) cout<<"c";
        }
        sort(x.begin(),x.end());
        for(int i=0;i<x.size();i++){
            if(x[i]!='a' && x[i]!='b' && x[i]!='c'){
                cout<<x[i];
            }
        }
        cout<<endl;
    }

    return 0;
}
