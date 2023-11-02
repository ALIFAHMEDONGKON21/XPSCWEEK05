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
    
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,h,m;
        cin>>n>>h>>m;

        int ans=INT_MAX;

        for(int i=1; i<=n; i++)
        {
            int hh,mm;
            cin>>hh>>mm;

            int _h=h;
            int _m=m;
            int count =0; 

            while (true)
            {
                /* code */
                if(_h==hh and _m==mm)
                {
                    break;
                }
                count++;
                _m++;
                if(_m==60)
                {
                    _m=0;
                    _h++;
                    if(_h ==24)
                    {
                        _h=0;
                    }
                }
            }
            ans=min(ans,count);
            
        }
        cout<<(ans/60)<<" "<<(ans%60)<<endl;
    }
    
    return 0;
}