//WAP to Copy One String into Another 
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char name[20],name1[20];
   char strg[20];
   printf("Enter your String:");
   gets(name);
  strcpy(strg,name);
  printf("The String after Copy %s\n",strg);

   return 0;
}
