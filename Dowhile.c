#include<stdio.h>
int main()
{
	int i,sum=0;
	i=1;
	do{
		printf("\n %d",i);
		sum=sum+i;
		i++;
	}
	while(i<5);
	printf("\n the sum numbers=%d",sum);
	return 0;
}
