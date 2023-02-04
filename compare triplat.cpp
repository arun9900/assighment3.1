#include <bits/stdc++.h>

using namespace std;

int main()
{    int a=0;
     int b=0;
    vector<int>alice;
    vector<int>bob;
    for(int i=0;i<3;i++)
    {
        int value1;
        cin>>value1;
        alice.push_back(value1);
    }
    for(int i=0;i<3;i++)
    {
        int value2;
        cin>>value2;
        bob.push_back(value2);
    }
    
    
    for(int i=0;i<3;i++)
    {
        if(alice[i]>bob[i])
        {
        b++;
            
            
        }
     }
   for(int i=0;i<3;i++)
    {
    if(alice[i]<bob[i])
    {
    a++;          
    }
    }
    cout<<b<<" ";
    
    cout<<a;

}

