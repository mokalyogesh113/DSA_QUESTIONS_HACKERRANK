#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n,j;  cin>>n>>j;
    vi v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    
    int cnt=0,pos=0;

    do
    {
        pos=(pos+j)%n;
        cnt++;
        if(v[pos])
            cnt+=2;

    } while (pos!=0);
    
    cout<<100-cnt;
}

int main()
{
   solve();

    return 0;    
}