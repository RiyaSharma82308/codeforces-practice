#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        // vector<int>vec;
        int temp=0;
        if(a==b) cout<<"YES"<<endl;
        else{
        while(a>=b && a%3==0){
            // vec.push_back(a/3);
            // vec.push_back(a-(a/3));
            if(a/3==b || a-(a/3)==b) {
                cout<<"YES"<<endl;
                temp=1;
                break;
            }
            else if(a/3 > b) {
                a=a/3;
            }
            else a=a-(a/3);
        }
        if(temp==0) cout<<"NO"<<endl;
        }

    }
}