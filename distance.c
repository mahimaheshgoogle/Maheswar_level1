//WAP to find the distance between two point using 4 functions.
#include <stdio.h>

#include <math.h>

double distance(double x1, double y1, double x2, double y2)
{
   double d,dist;
   d=((x2-x1)(x2-x1)) + ((y2-y1)(y2-y1));
   dist = sqrt(d);
   return dist;
}

double getpoint()
{
  double a;
  printf("Value:\t");
  scanf("%lf",&a);
  return a;
}

double display(double x1, double y1, double x2, double y2, double d)
{
   printf("The distance between (%lf,%lf) and (%lf,%lf) is %lf.\n",x1,y1,x2,y2,d);
   return 0.00;
}

int main()
{
  double x1,y1,x2,y2,d;
  printf("Enter the Co-ordinates of First point:\n");
  printf(" 'x' Co-ordinate:\n");
  x1=getpoint();
  printf(" 'y' Co-ordinate:\n");
  y1=getpoint();
  printf("Enter the Co-ordinates of Second point:\n");
  printf(" 'x' Co-ordinate:\n");
  x2=getpoint();
  printf(" 'y' Co-ordinate:\n");
  y2=getpoint();
  d=distance(x1,y1,x2,y2);
  display(x1,y1,x2,y2,d);
   return 0;
}
