#include<stdio.h>
#include<stdlib.h>
struct Node//created a structure contains data and next
{
	int data;//data means the value that we input in node
	struct Node* next;//overhere next means pointing to the addres of the next node
};
struct Node* head;//head means the pointer variable of first node
void Print()//Print function to print the inputs and even numbers
{
	struct Node* temp=head;
	while(temp!=NULL)//this loop iterates upto temp  not equal to NULL
	{
		printf("%d-->",temp->data);
		temp=temp->next;//pointing to next node
	}
	printf("NULL");
	printf("\n");
}
void insert(int data,int n)//insert function yo insert at the n th position of that node
{
	struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
	temp1->data=data;
	temp1->next=NULL;
	if(n==1)
	{
		temp1->next=head;
		head=temp1;
		return;
	}
	struct Node* temp2=head;
	for(int i=1;i<=n-2;i++)
	{
         	temp2=temp2->next;
	}
	temp1->next=temp2->next;
	temp2->next=temp1;
}
void Delete(int n)//delete function to delete odd numbers in the list which we input
{
	struct Node* temp1=head;//pointing temp1 to head first
	if(n==1)
	{
		if((temp1->data)%2==0)//if it is even
		{
			head=temp1->next;//the pointer head should point to next node
			temp1=temp1->next;//temp1 is pointing to the next node
		}
		else//if it is odd
		{
			head=temp1->next;
			free(temp1);//then delete that odd number from the memory
			temp1=temp1->next;//pointing to next node
		}
		return;
	}
	int i;
	for(i=1;i<=n-2;i++)
	{
		temp1=temp1->next;
	}
	struct Node* temp2=temp1->next;
	temp1->next=temp2->next;
	free(temp2);
}
int main()
{
	int p,data,i;
	struct 	Node* temp=head;
	head=NULL;
	scanf("%d",&p);
	for(int i=1;i<=p;i++)//inputing the values 
	{
		scanf("%d",&data);
		insert(data,i);//here data is value and i is position of that element in memory
	}
	Print();//printing the input values
        temp = head;
	for(int i=1;temp!=NULL;i++)
	{
		if((temp->data)%2!=0)
		{
			Delete(i);//deleting the odd values
			i--;
			temp=temp->next;
			continue;
		}
		else
			temp=temp->next;
	}

	Print();//printing the final list with even numbers
	return 0;
}
