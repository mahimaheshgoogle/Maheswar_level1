//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
int input()
{
int a,b;
printf("enter a input value");
scanf("%d",&a);
return a;
}
int find_sum(int a,int b)
{
int sum;
sum=a+b;
return sum;
}
void output(int a,int b, int c)
{
 printf("sum of %d + %d is %d",a,b,c);
}
int main()
{ 
int p,q,r;
p=input();
q=input();
r=find_sum(p,q);
output(p,q,r);
return 0;
}
