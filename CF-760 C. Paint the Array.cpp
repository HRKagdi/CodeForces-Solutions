//https://codeforces.com/contest/1618/problem/C
//C. Paint the Array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n; long long int ans=0;
        vector<long long int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        long long int gcd0,gcd1; gcd0=v[0]; gcd1=v[1];
        for(int i=2;i<v.size();i++){
            if(i%2==0) gcd0=__gcd(gcd0,v[i]);
            else{
                gcd1=__gcd(gcd1,v[i]);
            }
        }
        bool b=true;
        for(int i=0;i<v.size();i+=2){
            if(v[i]%gcd1==0){
                b=false; break;
            } 
        }
        bool x=true;
        for(int i=1;i<v.size();i+=2){
            if(v[i]%gcd0==0){
                x=false; break;
            }
        }
        if(b && x){cout<<gcd0;}
        else if(!x && b) cout<<gcd1;
        else if(!b && x) cout<<gcd0;
        else cout<<"0";
        cout<<endl;
    }
    return 0;
}
