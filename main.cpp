#include <stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int i,j,k;
	int bigger,smaller;
	int max,mid,min;
	printf("請輸入整數:");
	scanf("%d",&i);
    printf("請輸入整數:");
	scanf("%d",&j);	
	printf("請輸入整數:");
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
	printf("由大到小排列%d %d %d",max,mid,min);
	system("pause");
	return 0;
}
