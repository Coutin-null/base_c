#include <math.h>
#include <stdio.h>
typedef struct{
	int x;
	int y;
} point;
typedef struct{
	point p1;
	point p2;
} rect;
double diagonDistance(rect r){
	double verticalDistance = pow((double)(r.p2.y - r.p1.y), 2.0);
	double horizentalDistance = pow((double)(r.p2.x - r.p1.y), 2.0);
       	return sqrt(verticalDistance + horizentalDistance);	
}
int main()
{	point p1 = {200, 300};
	point p2 = {300, 400};
	rect s = {p1, p2};
	printf("p1.x:%d\tp1.y:%d\n",s.p1.x, s.p1.y);
	printf("p2.x:%d\tp2.y:%d\n",s.p1.x, s.p2.y);
	printf("diagon distance: %.2lf\n",diagonDistance(s));
	return 0;
}

