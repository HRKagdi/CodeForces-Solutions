// https://codeforces.com/contest/1605/problem/A
//A. A.M. Deviation

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c;
        cin>>a>>b>>c;
        b+=a; a=0;
        if((b+c)%3==0){
            cout<<"0"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
           
    }
    return 0;
}
