
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<pair<long long int,string>>vec;
        for(int i=0;i<n;i++){
            long long int a;
            cin>>a;
            string s;
            cin>>s;
            pair<long long int,string>p;
            p.first=a;
            p.second = s;
            vec.push_back(p);
        }
        long long int a=INT_MAX;
        long long int b=INT_MAX;
        long long int c=INT_MAX;
        for(int i=0;i<vec.size();i++){
            string temp=vec[i].second;
            if(temp[0]=='1' && temp[1]=='1'){
                c=min(vec[i].first,c);
                // cout<<"minimum c is :"<<vec[i].first<<' '<<c<<endl;
            }
            else{

                if(temp[0]=='1') {
                    a=min(a,vec[i].first);
                }
                if(temp[1]=='1'){
                    b=min(b,vec[i].first);
                }
            }
        }
        if((a==INT_MAX || b==INT_MAX) && c==INT_MAX) cout<<-1<<endl;
        else{
            // cout<<a<<' '<<b<<' '<<c<<endl; 
            cout<<min(c,a+b)<<endl;
        } 
    }

    return 0;
}
