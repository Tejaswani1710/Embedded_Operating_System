#include <stdio.h>
#include "userstring.h" 

int main()
{
   char a[] = "Tejaswani";
   char b[10];
   char c[] = "_1234";
   int i;
   int j=0;
   int alen = 0;

   alen = FindLength(a);
   printf("\n Using user string length function....");
   printf("\n Length of string is %d",alen);

   printf("\n\n Using user string copy function....");
   printf("\n String before copy function: ");
   for(i=0;a[i]!='\0';i++)
    {
       printf("%c",a[i]);
    }
   strCopy(b,a);
   printf("\n String copied in b: ");
   for(i=0;b[i]!='\0';i++)
    {
       printf("%c",b[i]);
    }
   printf("\n");

   printf("\n Using user string compare function....");
   printf("\n String 1: ");
   for(i=0;a[i]!='\0';i++)
    {
       printf("%c",a[i]);
    }
   printf("\n String 2: ");
   for(i=0;c[i]!='\0';i++)
    {
       printf("%c",c[i]);
    }
   j = mystrcmp(a,c);
   if(j == 0)
     printf("\n Strings are same.");
   else
     printf("\n Strings are not same. %d",j);

   printf("\n\n Using user string concatenation function....");
   mystrcat(a,c);
   printf("\n Our new string: ");
   for(i=0;a[i]!='\0';i++)
    {
       printf("%c",a[i]);
    }
   printf("\n");
   
   printf("\n Using user string reverse function....");
   mystrrev(a);
   printf("\n Reversed string is %s\n",a);

  return 0;  
}