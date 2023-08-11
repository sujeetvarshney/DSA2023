#include<bits/stdc++.h>
using namespace std;

int main()
{
   //single character data should be given in ''
   // char ch='a';
   // //string data should be given in " "
   // string st="welcome to all this is simple and easy to understand";

   // cout<<"Size of ch :"<<sizeof(ch);
   // cout<<endl<<"Size of string :"<<sizeof(st);

   // cout<<endl<<"Character is :"<<ch;

   // cout<<"\nString is :"<<st;

   //char ar[4]={'a','c','d','e'};

//creating array without size
//char ar[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','\0'};


   //character array printing 
   //by using array name only

   //cout<<"\nArray is "<<ar;

   //using loop

   // int s=sizeof(ar)/sizeof(char);

   // for(int i=0;i<s;i++)
   // {
   //    cout<<ar[i]<<" ";
   // }

   //it will print all values in array till '\0' NULL is found

   // cout<<"\nName of Array :"<<ar;


//whenever you will initialize a string null will be automatically added
   // char ar[]="abcdefghijklmnopqrstuvwxyz";

   // cout<<"\nSize of array :"<<sizeof(ar)/sizeof(char);


   // cout<<"\nSting Contains :"<<ar;


   //input character by character in array
   // char ar[100];

   // int n;
   // cout<<"\nHow many characters ";
   // cin>>n;

   // for(int i=0;i<n;i++)
   // {
   //    cin>>ar[i];
   // }

   // ar[n]='\0';

   // cout<<"\nString Contains :"<<ar;


//input a single word string
   // char ar[100]; //


   // cout<<"\nEnter a name";
   // cin>>ar;

   // cout<<"\nWelcome :"<<ar;



   //input a multiword string



   // char ar[100];



   // cout<<"\nEnter Full name :";
   // cin.getline(ar,100);

   // cout<<"Welcome :"<<ar<<endl;




   //read till .(full stop) is pressed
   //we can input a paragraph


   // char ar[100];

   // cout<<"\nEnter till find $";
   // cin.getline(ar,100,'.');

   // cout<<"\nString Contains :"<<ar;



   //wap to input a sentence and count number of vowels in it

   char ar[100];

   cout<<"\nEnter a sentence :";
   cin.getline(ar,100);
   int c=0;
   for(int i=0;ar[i]!='\0';i++)
   {
      if (ar[i]=='a' or ar[i]=='e' or ar[i]=='i' or ar[i]=='o' or ar[i]=='u'  )
      {
         c++;
      }


   }


   cout<<"\nNumber of vowels:"<<c;


    return 0;


}