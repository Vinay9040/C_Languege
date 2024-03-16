#include<stdio.h>
#include<conio.h>
//@brief 
main()
{
int i;
char a,b,str[10];
printf("Enter the string");
gets(str);
//asking for replacement
printf("enter the character to be replaced");
scanf("%c",&a);
// which letter to replace the existing one
printf("enter the character to replace");
scanf("%c",&b);
for(i=0;str[i]!='\0';i++)
{
    if(str[i]==a)
    {
    str[i] = b;
    }
    else
    continue;
}
printf("the new string is");
puts(str);
}