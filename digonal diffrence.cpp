   #include<iostream>
   #include<math.h>
   using namespace std;
   int main()
   {   
       int n;
       
       
       int sumdigonal1=0;
       int sumdigonal2=0;
       cin>>n;
       int a[n][n];
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
         {
             cin>>a[i][j];
         }
     }
     
     
     
       for(int i=0;i<n;i++)
       { 
            sumdigonal1=(sumdigonal1+a[i][i]);
        }
        int i=0;
       int  j=n-1;
       
        while(i<n&&j>=0)
        {
         sumdigonal2+=a[i][j];
         i++;
         j--;
           
        }
        cout<<abs(sumdigonal1-sumdigonal2);
    }
    
    
   
    
    

