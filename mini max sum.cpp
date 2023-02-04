#include <iostream>
using namespace std;
int main()

{  
int arr[5];
for(int i=0;i<5;i++)
{
    cin>>arr[i];
} 
int maxvalue=arr[0],minivalue=arr[0];
long long sum=0;
   for(int i=0;i<5;i++)
   {
       minivalue=min(minivalue,arr[i]);
       maxvalue=max(maxvalue,arr[i]);
       
    sum=sum+arr[i];  
   }
    cout << sum - maxvalue << " " << sum - minivalue << endl;
  return 0;
}


