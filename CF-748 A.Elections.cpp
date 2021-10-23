//https://codeforces.com/contest/1593/problem/A
//A. ELections

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int a,b,c; cin>>a>>b>>c;
        int maxi=max(a,max(b,c));
        int count=(a==maxi)+(b==maxi)+(c==maxi);
        if(a==maxi && count==1){
            cout<<0<<" ";
        }
        else cout<<maxi-a+1<<" ";
        if(b==maxi && count==1){
            cout<<0<<" ";
        }
        else cout<<maxi-b+1<<" ";
        if(c==maxi && count==1){
            cout<<0<<" ";
        }
        else{
            cout<<maxi-c+1;
        }
        cout<<endl;
    }
    return 0;
}
