//WAP to convert upper case string into Lower case
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[20]="SUNIL";
printf("The reverse of String is %s",strlwr(str));
return 0;
}

//////////////////OR//////////////////////

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[20];
printf("Enter the String");
gets(str);
printf("The reverse of String is %s",strlwr(str));
return 0;
}
