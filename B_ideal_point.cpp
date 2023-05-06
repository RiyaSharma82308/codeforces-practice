#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a=0; int b=0;
        while(n--)
        {
            int l,r;
            cin>>l>>r;
            if(l==k) a=1;
            if(r==k) b=1;
        }
        if(a&&b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
