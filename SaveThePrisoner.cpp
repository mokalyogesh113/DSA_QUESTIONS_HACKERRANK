#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n,m,s;
    cin>>n>>m>>s;

    int ans=(s+m-1)%n;
    ans=ans==0 ? n : ans;
    cout<<ans<<endl;
    return;    
}

using namespace std;
int main()
{
    int T;  
    cin>>T;
    for(int c=1;c<T+1; c++)
    {
        solve();
    }

    return 0;    
}