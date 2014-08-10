#include<iostream>
using namespace std;
struct node 
{
	int data;
	struct node *link;
};
void push(struct node **head,int data)
{
	struct node *temp = new node;
	temp->data = data;
	temp->link = *head;
	(*head)->link = temp;
}
void printList(struct node *result)
{
	while(result)
	{
		cout<<result->data<<endl;
		result = result->link;
	}
}

void addList(struct node* head1,struct node *head2,struct node **result)
{
	int size1=0,size2=0;
	struct node *temp=head1;
	while(temp)
	{
		size1++;
		temp = temp->link;
	}
	temp = head2;
	while(temp)
	{
		size2++;
		temp = temp->link;
	}
	if(head1==NULL)
	{
		*result = head2;
		return;
	}
	else if(head2==NULL)
	{
		*result = head1;
		return;
	}
	if(size1==size2)
	{
		*result = addSameSize(head1,head2);
	}
}
int main()
{
    node *head1 = NULL, *head2 = NULL, *result = NULL;
 
    int arr1[] = {9, 9, 9};
    int arr2[] = {1, 8};
 
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
 
    // Create first list as 9->9->9
    int i;
    for (i = size1-1; i >= 0; --i)
        push(&head1, arr1[i]);
 
    // Create second list as 1->8
    for (i = size2-1; i >= 0; --i)
        push(&head2, arr2[i]);
 
    addList(head1, head2, &result);
 
    printList(result);
 
    return 0;
}