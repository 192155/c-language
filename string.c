//wap to Program to compare two strings by using strcmp() function
#include<stdio.h>
#include<string.h>
int main()
{
	char a[90],b[90];
	printf("enter name frist person : ");
	gets (a);
	printf("enter name second person : ");
	gets (b);
	if(strcmpi(a,b) ==0 )
	{
		printf("name are equal : ");
	}
	else{
		printf("name are not equal : ");
    }
    return 0;
}

//wap return total no of characters in string frist
{
	printf("enter the frist name : ");
	gets(a);
	printf("%d",strlen(a));
}

//wap to copies string tovalue into string frist
{
	printf("enter the frist name : ");
	gets(a);
	strcpy(b,a);
	puts(b);
}

//wap to copies frist 3 charactersstring frist 2 into string 1 
{
	printf("enter the frist name : ");
	gets(a);
	strncpy(b,a,3);
	puts(b);
}
