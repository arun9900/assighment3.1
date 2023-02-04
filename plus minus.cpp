#include <bits/stdc++.h>
using namespace std;
//void plus_minus(int arr[],int n);
int main()
{
  int i,n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
   double a,b,c;
    int P=0,N=0,Z=0;
    for(int i=0;i<n;i++)
    {
       if(arr[i]>0)
       {
         P++;
       }    
       else if(arr[i]<0)
       {
           N++;
       } 
       else
       {
           Z++;
       }
    }

a=double(P)/double(n);
b=double(N)/double(n);
c=double(Z)/double(n);

cout<<a<<"\n";
cout<<b<<"\n";
cout<<c;

  return 0;
}

