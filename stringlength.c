//WAP  to find the length of String
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int length;char str[20];
printf("Enter the String");
gets(str);
length=strlen(str);
printf("The length of String is%d",length);
return 0;
}
