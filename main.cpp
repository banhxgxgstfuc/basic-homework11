#include <stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int i,j,k;
	int bigger,smaller;
	int max,mid,min;
	printf("�п�J���:");
	scanf("%d",&i);
    printf("�п�J���:");
	scanf("%d",&j);	
	printf("�п�J���:");
	scanf("%d",&k);
	if(i>j)
	 bigger=i,smaller=j;
	else
	 bigger=j,smaller=i;
	if(bigger>k)
	{
		max=bigger;
		if(k>smaller)
			mid=k,min=smaller;
		else
		    mid=smaller,min=k;
	} 
	else
	 max=k,mid=bigger,min=smaller;
	printf("�Ѥj��p�ƦC%d %d %d",max,mid,min);
	system("pause");
	return 0;
}
