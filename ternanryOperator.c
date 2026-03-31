#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("enter two numbers");
	scanf("%d%d",&n1,&n2);
	n3=(n1>n2)?n1:n2;
	printf("the larger number is %d",n3);
	return 0;
}
