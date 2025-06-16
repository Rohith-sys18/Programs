#include<stdio.h>
int main()
{
	int i=20;
	int *ptr;
	printf("\n%d",&i);
	ptr=&i;
	printf("\n%d",ptr);
	printf("\n%d",&ptr);
	printf("\n%d",*ptr);
	return 0;
}
