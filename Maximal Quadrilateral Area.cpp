#include<bits/stdc++.h>
/*#include<iostream>
#include<algorithm>
#include<string>
#include<stack>
#include<queue>
#include<map>
#include<vector>
#include<math>
#include<set>
#include<iterator>
#include<tuple>*/
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define ff first
#define ss second
#define fr(i,a,b) for(ll i=a;i<b;i++)
#define frn(i,a,b) for(ll i=a;i<=b;i++)
#define frb(i,a,b) for(ll i=a;i>=b;i--)
#define ssi(a) scanf("%lld",&a)
#define si(a) scanf("%d",&a)
#define mod 1000000007
#define pii pair<ll,ll>
const int N=100007;
int main()
{
    ios_base::sync_with_stdio(false);
    double s,a,b,c,d,r,ans;
    ll t;
    cin>>t;
    while(t--)
    {
        //Brahmgupta's formula;
        cin>>a>>b>>c>>d;
        s=(a+b+c+d)/2.0;
        r=(s-a)*(s-b)*(s-c)*(s-d);
        ans=sqrt(r);
        printf("%.2lf\n",ans);
    }
    return 0;
}
