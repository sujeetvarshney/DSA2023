#include<stdio.h>
int main()
{
   int ar[10];  //array declarations 

   printf("\nEnter 10 numbers"); //get data in array
   for(int i=0;i<10;i++)
   {
   scanf("%d",&ar[i]);
   }
   int se;
   printf("Enter element to search\n");
   scanf("%d",&se);


   int fi=0,la=9,mid,found=0;

   while(fi<=la)
   {
      mid=(fi+la)/2;
      if(ar[mid]==se)
      {
         printf("Element found at position %d",mid);
         found=1;
         break;

      }
      else if(ar[mid]<se)
      {
         fi=mid+1;

      }

      else
      {
         la=mid-1;
      }


   }

   if(found==0)
   {
      printf("Element is not found..");
   }

return 0;
}