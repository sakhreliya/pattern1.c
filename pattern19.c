#include<stdio.h>
main() 
{
    int i,j,k,n;
    k=1;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i=1;i<=n;i++)
	 {
        for (j=1;j<=i;j++,k++) 
		{
            printf("%3d",k);
		}
        printf("\n");
    }
}

