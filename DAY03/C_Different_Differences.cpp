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
void sloved()
{
   
    ll k, n;
    cin >> k >> n;
 
    ll cur = 0;
    ll sum = 1;
 
    for (ll i = 1; i <= k; i++) {
        if (k - i <= n - sum -cur) {
            sum += cur;
            cur++;
        } else {
            sum++;
        }
        cout << sum << " ";
    }
    cout << endl;
}
 
 
 
int main(){
    
    int t;
    cin>>t;
 
    while (t--)
    {
        /* code */
        sloved();
    }
    
    
    return 0;
}