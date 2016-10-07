//WAP to convert string into upper case

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[20];
printf("Enter the String");
gets(str);
printf("The reverse of String is %s",strupr(str));
return 0;
}


////////////////////////////////////////////////////////OR//////////////////
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[20]="sunil";
printf("The reverse of String is %s",strupr(str));
return 0;
}

