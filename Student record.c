#include <stdio.h>

int main()
{
	int rollno,i,subjects,marks[i];
	char name[50];
	printf("Enter the name of the student:");
	scanf("%s",name);
	printf("\nEnter the roll no of the student:");
	scanf("%d",&rollno);
	printf("\nEnter the number of subjects:");
	scanf("%d",&subjects);
	for(i=1;i<=subjects;i++){
		printf("\nEnter marks for subject [%d]:",i);
		scanf("%d",&marks[i]);
	}
	printf("\nYou entered \n1.Name=%s\n2.Rollno=%d",name,rollno);
	for(i=1;i<=subjects;i++){
		printf("\nMarks for subject [%d]=%d",i,marks[i]);
	}	
	return 0;
}
