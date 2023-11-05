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

long long solved(long long n, long long s)
{
    long long l=1;
    long long r=n;

    long long count=0;
    while(l<=r)
    {
        long long  mid=l+(r-l)/2;
        long long digit_sun=0;
        long long tem_mid=mid;

        while(tem_mid>0)
        {
            digit_sun+=tem_mid%10;
            tem_mid/=10;
        }
        if(mid -digit_sun>=s)
        {   count=n-mid+1;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return count;
}

int main(){
    
     long long n,s;
     cin>>n>>s;
     long long res=solved(n,s);
     cout<<res<<endl;
    return 0;
}