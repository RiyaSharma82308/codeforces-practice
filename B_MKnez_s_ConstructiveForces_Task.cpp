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
        if(n==3)
        {
            cout<<"NO"<<endl;
        }
        else if(n%2!=0 && n!=1)
        {
            int num=n/2;
            cout<<"YES"<<endl;
            for(int i=0;i<n;i=i+2)
            {
                if(i==n-1)
                {
                    cout<<num-1<<endl;
                }
                else{
                cout<<num-1<<' ';
                cout<<-1*num<<' ';
                }
            }
        }
        else
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
            {
                if(i%2==0)cout<<1;
                else cout<<-1;
                if(i!=n-1)cout<<' ';
            }
            cout<<endl;
        }
    }
}