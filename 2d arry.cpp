#include<stdio.h>
int main ()
{
	int a[5][5],i,j,sum=0;
	printf("enter matrex elemnets");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
		    scanf("%d",&a[i][j]);
		}
	}
	printf("matrix are  : \n");
	for(i=0;i<5;i++){
		
		for(j=0;j<5;j++){
		printf("%d ",a[i][j]);
		}
			printf("\n");
	}

}
