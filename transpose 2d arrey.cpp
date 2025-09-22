#include<stdio.h>
int main ()
{
	int a[3][3],i,j,sum=0;
	printf("enter matrex elemnets");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		    scanf("%d",&a[i][j]);
		}
	}
	printf("matrix are  : \n");
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
		printf("%d ",a[i][j]);
		}
			printf("\n");
	}
	printf(" transpose matrix are  : \n");
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
		printf("%d ",a[j][i]);
		}
			printf("\n");
	}

}
