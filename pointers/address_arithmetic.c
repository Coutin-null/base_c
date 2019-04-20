#include <stdio.h>
int main(){
	int array[2];
	int *p = array;
	array[0] = 1;
	array[1] = 2;
	printf("%d\n",*++p);
	return 0;
}
