// JAY SWAMINARAYAN //
// DIGANT SHELADIYA //

#include<iostream>
#include<stdio.h>
#include <sstream>
#include <cstdio>
#include<fstream>
#include<algorithm>
#include<vector>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <numeric>
#include <vector>
#include<unordered_map>
#include<unordered_set>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;
#define test int t; cin>>t; while(t--)
#define pi (3.141592653589)
#define ll long long int
#define of(i, x, n) for (ll i = x; i >= n; i--)
#define f(i, x, n) for (ll i = x; i < n; i++)
#define fr(i, m) for (auto i : m)
#define vl vector<long long>
#define vs vector<string>
#define sl set<ll>
#define ss set<string>
#define sc set<char>
#define mll map<ll,ll>
#define mcl map<char,ll>
#define msi map<string,int>
#define msl map<string,ll>
#define pb push_back
#define pp pop_back
#define float double
#define all(v) (v).begin(), (v).end()
#define bll(v) (v).begin(), (v).end(),greater<int>()
#define fi first
#define se second
#define maxi *max_element
#define mini *min_element
#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define M 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define rtn return
ll gcd(ll a, ll b)
{if (b == 0){rtn a;}rtn gcd(b, a % b);}
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll binpow(ll x,ll y)
{
    x%=M;
    ll ans=1;
    while(y>0)
    {
        if(y&1)ans=ans*x%M;
        x=x*x%M;
        y>>=1;
    }
    return ans%M;
}
bool perfectsq(double x)
{
    if (x>=0)
    {ll sr = sqrt(x); rtn (sr*sr==x);}
    rtn false;
}
bool isprime(ll number)
{
    if (number <= 1)
        rtn false;
    if (number == 2)
        rtn true;
    if (number % 2 == 0)
        rtn false;
    ll boundary = (ll)floor(sqrt(number));
    for (ll i = 3; i <= boundary; i += 2)
        if (number % i == 0)
            rtn false;
    rtn true;
}
vl prime;
void primeFactors(ll n)
{
    ll c=2;
    while(n>1){if(n%c==0){prime.pb(c); n/=c;} else c++;}
}
// !(n&(n-1)) --> n==2^x n&(n-1) --> n!=2^x
const ll N=1e6;
ll n,m;
vl g[N];
ll vis[N];
//ll cat;
ll a[N];
ll ct=0;
void dfs(ll node,ll cat)
{
  vis[node]=1;
  if(cat>m)rtn;
  if(a[node])cat++;
  else cat=0;
    ll tmp=0;
   fr(child,g[node])
   {
      if(!vis[child])
      {
          tmp++;
          dfs(child,cat);
      }
   }
   if(!tmp&&cat<=m)
      ct++;
}

void solve()
{
    cin>>n>>m;
    f(i,1,n+1)cin>>a[i];
    n--;
    while(n--){
        ll x,y;
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
//        f(i,2,n+1){
//            if(g[i].size()==1)path++;
        }
        dfs(1,0);
    cout<<ct<<endl;
    
    
    
    
    
}
int main()
{
    fast;
//    test
    solve();
    rtn 0;
}
