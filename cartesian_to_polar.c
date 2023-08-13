//conversion of cartesian co-ordinates to polar co-ordinates
#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,r,theta;
	printf("\nenter the x and y co-ordinates");
	scanf("%f %f",&x,&y);
	r=sqrt(x*x+y*y);
	theta=atan2(y,x);
	theta=theta*180*3.14;
	printf("the polar co_ordinates are %f%f",r,theta);
	return 0;
}
