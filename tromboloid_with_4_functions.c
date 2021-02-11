//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float input();
float volume(float h,float d,float b);
void output(float n);
int main()
{
	float h,d,b,z;
	h=input();
	d=input();
	b=input();
	z=volume(h,d,b);
	output(z);
	return 0;
}

float input()
{
	float n;
	printf("Enter the value : ");
	scanf("%f",&n);
	return n;
}

float volume(float h,float d,float b)
{
	float volume;
	volume = (((h*d*b)+(d/b))/3);
	return volume;
}
void output(float n)
{
	printf("volume is %f",n);
}
