#include<stdio.h>

int main()
{
  float h,b,d,v;

  printf("Enter height: \n");
  scanf("%f",&h);

  printf("Enter breadth: \n");
  scanf("%f",&b);

  printf("Enter depth: \n");
  scanf("%f",&d);

  v = 0.3333 *((h*d*b)+(d/b));

  printf("The volume of tromboloid is %f",v);
  return 0;
}
