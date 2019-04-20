#include <stdio.h>
int swap(int *a,int *b);
int main()
{	
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	swap(&a, &b);
	printf("values after modification:%d %d\n", a, b);
	return 0;
}
int swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
