//https://codeforces.com/contest/1582/problem/B
//B. Luntik and Subsequences

#include<bits/stdc++.h>
using namespace std;
long long int power(int a, int b){
    long long int ans=1;
    for(int i=1;i<=b;i++) ans*=a;
    return ans;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n; vector<long long int>v(n);
        long long int c0,c1; c0=c1=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==0) c0++;
            if(v[i]==1) c1++;
        }
        if(c1==0){cout<<0<<endl; continue;}
        if(c0==0){cout<<c1<<endl; continue;}
        cout<<power(2,c0)*c1<<endl;
    }
    return 0;
}
