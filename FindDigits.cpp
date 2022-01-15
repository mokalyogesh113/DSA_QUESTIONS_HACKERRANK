#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

void solve()
{
    int n;  cin>>n;
    int a=n;
    int cnt=0;
    while(n!=0)
    {
        int temp=n%10;
        n/=10;
        if(temp!=0 && a%temp==0)
            cnt++;
    }
    cout<<cnt<<endl;

}

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