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



//......Let's Start ........................//
int coutss(int n,int k,vi v)
{
    int count=0;
    for(int i=0; i<=n-k; i++)
    {
        bool hasood=false;
        for(int j=0; j<k; j++)
        {
            if(v[i+j]%2==1)
            {
                hasood=true;
                break;
            }
        }
        if(hasood)
        {
            count++;
        }
    }
    return count;
}


int main(){

    int t;
    cin>>t;
    vi ress;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        vi v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int res=coutss(n,k,v);
        ress.push_back(res);

    }
     for( int res: ress)
        {
            cout<<res<<endl;
        }
    return 0;
}