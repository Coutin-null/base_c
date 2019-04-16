#include <stdio.h>
int main()
{	long n;
	n = 0;
	while(getchar() != EOF){
		++n;
	}
	printf("Total numbers of characters:%ld\n",n);
	return 0;
}
