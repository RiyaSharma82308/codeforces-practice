#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;;
        cin>>n;
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            vec.push_back(a);
        }
        int cnt=1;
        for(int i=0;i<n-1;i++)
        {
            if(vec[i]==1) vec[i]++;
            if(vec[i]%vec[i-1]==0) vec[i]++;
            if(vec[i+1]%vec[i]==0) vec[i+1]++;
        }
        for(int  i=0;i<n;i++)
        {
            cout<<vec[i]<<' ';
        }
        cout<<endl;
    }
}