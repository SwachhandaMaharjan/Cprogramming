#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40};
	int *ptr =arr;
	printf("first element%d\n",*ptr);
	ptr++;
	printf("second element%d\n",*ptr);
	return 0;
}
