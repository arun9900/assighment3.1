#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);






int main()
{
    int n;
    cin>>n;
     long sum=0;
    vector<long>v1;
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        v1.push_back(value);
        
    }
    for(int i=0;i<v1.size();i++)
    {
       sum=sum+v1[i];
       
        
    }
    
    cout<<sum;
    
    
    
    
    
}

