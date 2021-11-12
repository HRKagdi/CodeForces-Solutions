//https://codeforces.com/contest/1605/problem/B
//B. Reverse Sort

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        string str; cin>>str;
        bool b=true;
        vector<int> v0,v1;
        int c0,c1; c1=c0=0;
        for(int i=0;i<n-1;i++){
            if(str[i]>str[i+1]){
                b=false;
            }
            if(str[i]=='0'){ v0.push_back(i); c0++;}
            else {v1.push_back(i); c1++;}
        }
        if(str[n-1]=='0'){ v0.push_back(n-1); c0++;}
        else{v1.push_back(n-1); c1++;}
        if(b){ cout<<"0"<<endl; continue;}
        cout<<"1"<<endl;
        vector<int> a1,a2;
        c0--;
        for(int i=0;i<v0.size();i++){
            if(v0[i]>c0){a1.push_back(v0[i]);}
        }
        for(int i=0;i<v1.size();i++){
            if(v1[i]<=c0){a2.push_back(v1[i]);}
        }
        vector<int> ans;
        if(a1.size()<a2.size()){
            for(int i=0;i<a1.size();i++) ans.push_back(a1[i]);
            for(int i=0;i<a1.size();i++) ans.push_back(a2[i]);
        }
        else{
            for(int i=0;i<a2.size();i++) ans.push_back(a2[i]);
            for(int i=0;i<a2.size();i++) ans.push_back(a1[i]);
        }
        sort(ans.begin(),ans.end()); cout<<ans.size()<<" ";
        for(int i=0;i<ans.size();i++) cout<<ans[i]+1<<" ";
        cout<<endl;
           
    }
    return 0;
}
