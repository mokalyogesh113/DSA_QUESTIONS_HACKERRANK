#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;  cin>>n;
    vi v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    
    for(int i=0;i<n;i++)
    {
        int temp=find(v.begin(),v.end(),i+1)-v.begin()+1;
        int ans=find(v.begin(),v.end(),temp)-v.begin()+1;
        cout<<ans<<endl;
    }
}

int main()
{
    solve();
    return 0;    
}