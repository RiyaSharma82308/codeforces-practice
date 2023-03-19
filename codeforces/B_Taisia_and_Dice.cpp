#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,r;
        cin>>n>>s>>r;
        int a=s-r;
        vector<int>ans(n);
        ans[0]=a;
        int num=r/(n-1);
        int sum=0;
        for(int i=1;i<n-1;i++)
        {
            ans[i]=num;
            sum+=num;
        }
        if(r-sum<=a) ans[n-1]=r-sum;
        else
        {
            int extra=(r-sum)-a;
            for(int i=1;i<=extra;i++)
            {
                ans[i]+=1;
                sum++;
            }
            ans[n-1]=r-sum;
        }
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<' ';
        }
        cout<<endl;
    }
}