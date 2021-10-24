//https://codeforces.com/contest/1582/problem/A
//A. Luntik and Concerts

#include<bits/stdc++.h>
using namespace std;


int main() {
   int t; cin>>t;
   while(t--){
       int a,b,c; cin>>a>>b>>c;
       if(a==b && b==c){
           cout<<0<<endl; continue;
       }
       int temp=a*1+b*2+c*3;
       int avg=(temp)/2;
       int rem=temp-avg;
       cout<<abs(rem-avg)<<endl; 
   }
   return 0;
}
