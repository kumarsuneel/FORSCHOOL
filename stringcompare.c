//WAP to campare two String
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char name[20],name1[20];
    int strg;
   printf("Enter your First String:");
   gets(name);
   printf("Enter your Second String:");
   gets(name1);
   if(strcmp(name,name1)==0)
   {
       printf("String are Equal");
   }
   else
   {
        printf("Strings are not Equal");
   }
   return 0;
