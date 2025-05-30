#include<stdio.h>
int main()
{
	int a[4]={1,2,3,4};
	int i, max=a[0];
	for(i=1;i<4;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("%d",max);
}
