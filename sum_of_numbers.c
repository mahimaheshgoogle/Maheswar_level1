//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int input(int n)
{
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  return n;
}
int i,n,value,sum = 0;
printf("Enter the elements to be added: ");
for(i = 1;i<=n;i++)
   {
    scanf("%d",&value);
    sum = sum+value;
    }
}
void output(int sum)
{
printf("Sum of n numbers are: %d\n",sum);
}
int main()
{
	int num,sum,n,s;
	int(n);
	sum();
	output(sum);
	return 0;
}
