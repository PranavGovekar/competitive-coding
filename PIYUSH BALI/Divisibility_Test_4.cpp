// God is Great
/* Piyush Bali:- WHY SOMETHING IS IMPOSSIBLE?
*/ 
#include<bits/stdc++.h>
using namespace std;
#define ll                   long long
#define ld                   long double
#define pb                   push_back
#define vi                   vector<int>
#define scf                  scanf
#define pf                   printf
#define MAX                  1e9
#define MIN                  -1e9
#define mod                  1000000007
#define mod9                 1000000009
#define pi                   3.1415926535
#define forci(p,n)           for(ll i=p;i<(ll)n;i++)
#define forcj(p,n)           for(ll j=p;j<(ll)n;j++)
#define bolt                 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define test                 ll t;cin>>t;while(t--)
//https://youtu.be/miZlLXzVL8I

ll gcd(ll a,ll b){    if(b==0) return a;    return gcd(b,a%b);}
ll lcm(ll a,ll b) {    return (a/gcd(a,b)*b);}
ll expo(ll x, ll y) {ll res=1;x=x%mod;while(y>0){if(y&1)res=(1ll*res*x)%mod;
    y=y>>1;x=(1ll*x*x)%mod;} return res;}
ll ncr(ll n,ll r){ ll res=1; if(r>n-r)r=n-r; for(ll i=0;i<r;i++) {  res*=n-i;  res/=i+1; } return res;}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int check(string str) 
{ 
    int n = str.length(); 
    ll oddDigSum = 0, evenDigSum = 0; 
    for (int i=0; i<n; i++) 
    { 
        if (i%2 == 0) 
            oddDigSum += (str[i]-'0'); 
        else
            evenDigSum += (str[i]-'0'); 
    } 
  
    return ((oddDigSum - evenDigSum) % 11 == 0); 
} 

signed main()
{
     string y="YES";
     string n="NO";
     string str;
     test{
         cin>>str;
         check(str)?  cout << y: cout << n; 
         cout<<"\n";
     }
 







































}

//https://www.youtube.com/watch?v=yl2GaxVGUaI