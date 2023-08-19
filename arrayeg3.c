#include<stdio.h>
int main()
{
   int ar[15];  //array declarations 

   printf("\nEnter 15 numbers"); //get data in array
   for(int i=0;i<15;i++)
   {
   scanf("%d",&ar[i]);
   }

   //logic of bubble sort

   for(int i=0;i<14;i++) //number of passes
   {
      for(int j=0;j<14-i;j++) //number of comparisons in each pass
      { //if left element is greater than right than swap 
         if(ar[j]>ar[j+1]) //for descending order we should use < sign 
         {
            int t=ar[j];
            ar[j]=ar[j+1];
            ar[j+1]=t;
         }

      }

   }

   //logic ends
   

   printf("\nSorted Array\n");

   for(int i=0;i<15;i++)
   {
      printf("%d ",ar[i] );
   }

return 0;
}