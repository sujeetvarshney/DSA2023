#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cout<<"\nEnter n";
   cin>>n;
   int ar[n];

   cout<<"\nEnter elements in array\n";
   for(int i=0;i<n;i++)
   {

      cin>>ar[i];

   }

   int t;
   cout<<"\nEnter target";
   cin>>t;

   int st=0;
   int end=n-1;

   while(st<end)
   {
      if(ar[st]+ar[end]==t)
      {
         cout<<"Found at "<<st<<" "<<end<<" Location";
         break;
      }
      else if(ar[st]+ar[end]<t)
      {
         st++;
      }
      else
      {
         end--;
      }
   }



   return 0;

}