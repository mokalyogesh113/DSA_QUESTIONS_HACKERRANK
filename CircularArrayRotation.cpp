#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n,k,q;
    cin>>n>>k>>q;
    k=k%n;
    vi v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    
   for(int i=0;i<q;i++)
   {
       int x;   cin>>x;
       int index=abs((n-k+x))%n;
       cout<<v[index]<<endl;
   }
}

int main()
{
        solve();
    return 0;    
}