#include<stdio.h>
typedef struct
{
int nume;
int deno;
}fraction;
int range()
{
int n;
printf("Enter the number of fractions: ");
scanf("%d",&n);
return n;
}
int input(int n,fraction a[n])
{

for(int i = 0;i<n;i++)
 {
   printf("Enter the %d numerator and denominator of fraction :",i+1);
   scanf("%d%d",&a[i].nume,&a[i].deno);
   }
}
fraction sum(int n,fraction a[n])
{
int numerator = 0, denominator = 1;
for(int i=0;i<n;i++)
{
denominator*= a[i].deno;
}
for (int i=0;i<n;i++)
{
numerator +=(a[i].nume)*(denominator/a[i].deno);
}
fraction add={numerator,denominator};
int gcd=1;
for (int i=1;i<=add.nume&&i<=add.deno;i++)
{
  if(add.nume%i==0&&add.deno%i==0)
{
gcd=i;
}
}
add.nume=add.nume/gcd;
add.deno=add.deno/gcd;
return add;
}
void display(int n,fraction add)
{
printf("the sum of %d fractions entered is %d/%d",n,add.nume,add.deno);
}
int main()
{
int n;
n=range();
fraction a[n];
input(n,a);
fraction result=sum(n,a);
display(n,result);
return 0;
}

