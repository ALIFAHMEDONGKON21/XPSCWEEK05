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
    
    long long t;
    cin>>t;

    while (t--)
    {
        /* code */
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++)
            cin >> a[i];
        long long l = 0, r = INT_MAX;
        bool finalAns = false;
        while (l <= r)
        {
            long long mid = l + (r - l) / 2;
            double ans = 1.0;
            for (long long i = 0; i < n; i++)
            {
                ans *= (a[i] * 1.0 / mid);
            }
            if (fabs(ans - 1.0) < 1e-15)
            {
                finalAns = true;
                break;
            }
            else if (ans > 1.0)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (finalAns)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }    
    return 0;
}