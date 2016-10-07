#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char name[20],name1[20];
   char strg[20];
   printf("Enter your First String:");
   gets(name);
   printf("Enter your Second String:");
   gets(name1);
   

printf("The string after Combine %s",strcat(name1,name));
  
   return 0;
}
