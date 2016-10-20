#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
printf("Enter the three numbers:");
scanf("%d","%d","%d",&a,&b,&c);
if(a>b && a>c){
printf("a is greater");
}
if(b>a && b>c){
printf("b is greater");
}
if(c>a && c>b){
printf("c is greater");
}else{
printf("two or three number are  greater");
}
getch();
}
