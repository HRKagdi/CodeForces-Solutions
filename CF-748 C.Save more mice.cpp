//https://codeforces.com/contest/1593/problem/C
//C. Save more mice

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int k,n; cin>>k>>n;
        vector<int> v(n); int ans=0;
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        int index=0;
        for(int i=n-1;i>=0;i--){
            if(v[i]>index){
                ans++; index+=k-v[i]; v[i]=-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
