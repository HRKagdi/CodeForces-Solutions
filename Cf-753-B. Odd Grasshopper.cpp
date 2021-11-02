//https://codeforces.com/contest/1607/problem/B
//B. Odd Grasshopper

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long t;
    cin >> t;
    while(t--) {
        long long x,y; cin>>x>>y;
        vector<long long> v;
        long long current=x;
        for(long long i = 0 ; i < 4 ; i++) {
            long long min=i+1;
            if(current&1) {
                current+=min;
            } else {
                current-=min;
            }
            v.push_back(current);
        }
        long long tp = y%4;
 
        if(tp==2 or tp==0) {
            if(tp==0)
                tp+=4;
            cout << v[tp-1] << "\n";
        } else {
            if(tp==1) {
                y--;
                long long quo = y/4.0;
                if(x&1) {
                    cout << v[tp-1]+quo*4 << endl;
                } else {
                    cout << v[tp-1]-quo*4 << endl;
                }
            } else {
                y--;
                long long quo = y/4.0;
 
                if(x&1) {
                    cout << v[tp-1]-quo*4 << endl;
                } else {
                    cout << v[tp-1]+quo*4 << endl;
                }
            }
        }
    }
    return 0;
}
