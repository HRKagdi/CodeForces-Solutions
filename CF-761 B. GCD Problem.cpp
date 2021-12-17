//https://codeforces.com/contest/1617/problem/B
//B. GCD Problem

#include<bits/stdc++.h>
using namespace std;
bool isCoprime(int x, int y)
{
    if(__gcd(x,y)==1) return true;
    return false;
}

pair<int,int> helper(int n){
     
    int temp = n/2;
    pair<int,int> p;
    for (int i = temp; i >= 1; i--) {
        if (isCoprime(i, n - i) == 1) {
            p=make_pair(i,n-i);
            break;
        }
    }
    return p;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        pair<int,int> ans=helper(n-1);
        cout<<ans.first<<" "<<ans.second<<" 1"<<endl;
    }
    return 0;
}
