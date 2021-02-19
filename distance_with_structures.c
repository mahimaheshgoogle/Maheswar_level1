//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
struct point
{
   float x;
   float y;
};
typedef struct point point;
point input()
{
   point p;
printf("for first point\n");
printf("Enter x-coordinates ");
scanf("%f",&p.x);
printf("enter y-coordinates ");
scanf("f",&p.y);
return p;
}
float compute(point p1,point p2)
{
   float distance;
   distance = sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
   return distance;
}
void output(point p1, point p2, float dist)
{
printf("the distance between %f,%f and %f,%f is %f",p1.x,p2.y,p2.x,p2.y,dist);
}
int main()
{
  float dist;
  point p1,p2;
  p1=input();
  p2=input();
  dist=compute(p1,p2);
  output(p1,p2,dist);
  return 0;
}
