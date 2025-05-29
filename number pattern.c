#include <stdio.h>
int main()
{
    int rows=4,i,j;
    int n=1;
    for (i=0;i<rows;i++) 
	{
        for (j=0;j<=i;j++) 
		{
            printf("%d",n++);
        }
        printf("\n");
    }
    return 0;
}
