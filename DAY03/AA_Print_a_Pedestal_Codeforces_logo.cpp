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
#define     in_range(i,x,y)                 for(int i=x;i<=y;i++)


//......Let's Start ........................//



int main(){
    
    int t;
    cin>>t;

    while(t--)
    {
        int n;              cin>>n;
 
        int x,y,z;
 
       for(int i=1; i<=n; i++)
       {
            y=i;
 
            int rem=n-y;
 
            if(rem%2==0){
                x=1+(rem/2);
            }
            else{
                x=(rem+1)/2;
            }
 
            z=n-y-x;
 
            if(x>0 and y>0 and z>0 and x<y and x>z){
                break;
            }
        }
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
    
    return 0;
}