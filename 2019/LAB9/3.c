#include<stdio.h>
struct student//creating the structure of student which contains information about student
{
	char name[20];
	char rollnumber[20];
	int age;
	int marks;
};

int main()
{
	int n;
	scanf("%d",&n);
	struct student info[n];
	//inputing the information of student
	for(int i=0;i<n;i++)
	{
		scanf("%s",info[i].name);//input the name
		scanf("%s",info[i].rollnumber);//input the rollnumber
		scanf("%d",&info[i].age);//input the age
		scanf("%d",&info[i].marks);//input the marks
	}
	//printing out the student list
	for(int i=0;i<n;i++)
	{
		printf("%s\n",info[i].name);//printing name
		printf("%s\n",info[i].rollnumber);//printing rollnumber
		printf("%d\n",info[i].age);//printing age
		printf("%d\n",info[i].marks);//printing marks
	}
	return 0;
}
