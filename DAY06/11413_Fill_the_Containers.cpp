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



int main(){
    
    int n,m;
    while (cin>>n>>m)
    {
        /* code */
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];

        int l=0;
        int r=INT_MAX;
        int ans;

        while (l<=r)
        {
            /* code */
            int cap=l+(r-l)/2;

            int count=1;
            int sum=0;

            for(int i=0; i<n; i++)
            {   
                if(a[i]>cap)
            {
                 count=INT_MAX;
                break;
            }
                sum+=a[i];
                if(sum>cap)
                {
                count++;
                sum=a[i];
                }

            }
            if(count <=m)
            {
                ans=cap;
                r=cap-1;
            }
            else
            {
                l=cap+1;
            }
        }
        cout<<ans<<endl;
        
    }
    
    
    return 0;
}