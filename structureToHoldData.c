#include<stdio.h>
struct student{
	char firstName[50];
	int roll;
	float marks;
};
int main()
{	
	struct student s1;
	printf("enter information of the student\n");
	
	printf("Enter first name");
	scanf("%s ",s1.firstName);
	
	printf("enter roll number");
	scanf("%d ",s1.roll);
	
	printf("enter marks");
	scanf("%f ",s1.marks);
	
	//to display the inserted infromation
	printf("First name: %s\n",s1.firstName);
	printf("Roll number: %d\n",s1.roll);
	printf("Marks:%f\n",s1.marks);
	return 0;
}
