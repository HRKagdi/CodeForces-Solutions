//https://codeforces.com/contest/1593/problem/D1
//D.All are same

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end()); 
        vector<int> temp;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(v[j]-v[i]!=0) temp.push_back(v[j]-v[i]);
            }
        }
        sort(temp.begin(),temp.end());
        bool b=true;
        for(int i=1;i<temp.size();i++){
            if((temp[i]%temp[0])!=0){
                b=false; break;
            }
        }
        int ans=0;
        for(int i=0;i<temp.size();i++) ans=__gcd(ans,temp[i]);
        if(ans==0) cout<<"-1"<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}
