#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char c;
int lowercasevowel, uppercasevowel;
printf("Enter the chat:");
scanf("%c",&c);
lowercasevowel=(c=='a'||c=='e'||c=='o'||c=='u'||c=='i');
uppercasevowel=(c=='A'||c=='E'||c=='I'||c=='U'||c=='O');
if(lowercasevowel||uppercasevowel)
{
printf("char is vowel");
else
printf("char is lower");
}
getch();
}
