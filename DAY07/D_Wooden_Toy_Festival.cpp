#include<bits/stdc++.h>
using namespace std;
#define     ll                              long long int
#define     ull                             unsigned long long int
#define     ui                              unsigned int
//STL :
#define     vi                              vector<int>
#define     vb                              vector<bool>
#define     vs                              vector<string>
#define     vl                              vector<ll>
#define     si                              set<int>
#define     sl                              set<ll>
#define     ip                              pair<int,int>
#define     lp                              pair<ll,ll>
#define     ips                             pair<string,int>
#define     lps                             pair<string,ll>
#define     ipc                             pair<char,int>
#define     lpc                             pair<char,ll>
#define     vip                             vector<ip>
#define     PQ                              priority_queue
#define     vlp                             vector<lp>
#define     hashmap                         unordered_map
#define     all(x)                          x.begin(),x.end()
#define     forI                             (i,s,n) for(int i=s; i<n; i++)
#define     in_range_back(i,x,y)            for(int i=y;i>=x;i--)
#define     cin_the_array(x,o,n)            for(int i=o;i<=n;i++){cin>>x[i];}
#define     cout_the_array(x,o,n)           for(int i=o;i<=n;i++){cout<<x[i]<<" ";}cout<<endl;
ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}


//......Let's Start ........................//
void  sloved()
{
    ll n;
    cin>>n;

    vi v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    
    sort(v.begin(),v.end());

    ll l=0;
    ll r=INT_MAX;

    while (l<=r)
    {
        /* code */
        ll mid=l+(r-l)/2;

        ll count=0;
        ll st=v[0];

        for(int i=0; i<n; i++ )
        {
            if((ceil_div(v[i]-st,2))>mid)
            {   
                st=v[i];
                count++;

            }
        }
        if(count<3)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }

    }
    cout<<l<<endl;
    
}


int main(){
    
    int t;
    cin>>t;

    while(t--)
    {
        sloved();
    }
    
    return 0;
}