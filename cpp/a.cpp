#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
ll query(ll l,ll r){
    cout<<"? "<<l<<" "<<r<<"\n";
    fflush(stdout);
    ll x;
    cin>>x;
    return x;
}
int main(){
 ll n;
 cin>>n;
 ll l=1,r=n;ll ans=0;
 map<pair<ll,ll>,ll>m;
 while(l<r){
     ll x=query(l,r);
     ll x1,x2;
     if(r==l+1){
         if(x==l){
             ans=r;
         }
         else
         ans=l;
     }
     if(l!=x)
      x1=query(l,x);
     if(x!=r)
      x2=query(x,r);
     if(l!=x&&x1==x){
         r=x1-1;
     }
     else if(r!=x&&x2==x){
         l=x2+1;
     }
 }
 cout<<"! "<<ans<<"\n";  
fflush(stdout);
}
int main()(){
    
}





















