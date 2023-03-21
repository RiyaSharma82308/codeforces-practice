#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>vec;
        int cnt_0=0;
        int cnt_1=0;
        int cnt_greater=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            vec.push_back(a);
            if(a==0) cnt_0++;
            else if(a==1) cnt_1++;
            else if (a>1) cnt_greater++;
        }
        
        if(cnt_0>cnt_1+cnt_greater+1)
        {
            if(cnt_1==0) cout<<1<<endl;
            else{
                if(cnt_greater>=1) cout<<1<<endl;
                else cout<<2<<endl;
            }
        }
        else cout<<0<<endl;
    }
}