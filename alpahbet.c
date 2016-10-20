#include<stdio.h>
void main()
{
char c;
printf("Enter the char:");
scanf("%c",&c);
if((c>='a' && c<='z')||(c>='A' && c<='Z'))
{
printf("char is alphabet");
else
printf("char is not alphabet");
}
getch();
}
