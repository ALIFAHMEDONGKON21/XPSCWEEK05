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
    
    int caseNumber = 1; 

    while (true) {
        int N, Q;
        cin >> N >> Q;

        if (N == 0 && Q == 0) {
            break;
        }

        vector<int> marbles(N);

        for (int i = 0; i < N; i++) {
            cin >> marbles[i];
        }

        sort(marbles.begin(), marbles.end());

        cout << "CASE# " << caseNumber << ":" << endl;
        caseNumber++;

        for (int i = 0; i < Q; i++) {
            int query;
            cin >> query;

            auto pos = lower_bound(marbles.begin(), marbles.end(), query);

            if (pos != marbles.end() && *pos == query) {
                cout << query << " found at " << (pos - marbles.begin() + 1) << endl;
            } else {
                cout << query << " not found" << endl;
            }
        }
    }

    
    return 0;
}