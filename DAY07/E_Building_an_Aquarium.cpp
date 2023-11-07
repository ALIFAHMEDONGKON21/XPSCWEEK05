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

    while (t--)
    {
        /* code */long long n, k;
		cin >> n >> k;
		
		vector<int> v(n);
		for(int i = 0; i < n; i++)
			cin >> v[i];
		
		long long st = 1;
		long long dr = 2000000000;
		long long ans = 0;
		while(st <= dr)
		{
			long long mid = (st + dr) / 2;
			long long nec = 0;
			for(int i = 0; i < n; i++)
				if(mid > v[i])
					nec += (mid - v[i]);
			if(nec <= k)
				ans = mid, st = mid + 1;
			else
			{
				
				dr = mid - 1;
			}
		}
		cout << ans << '\n';
	}
    
    return 0;
}