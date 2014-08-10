#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *link;
};
void addAtBeg(struct node **head,int data)
{
	struct node *temp = new node;
	temp->data = data;
	temp->link = *head;
	*head = temp;
}
void printList(struct node *head)
{
	while(head)
	{
		cout<<head->data<<endl;
		head = head->link;
	}
}
int main()
{
	struct node *head = NULL;
	addAtBeg(&head,3);
	addAtBeg(&head,5);
	addAtBeg(&head,7);
	addAtBeg(&head,1);
	addAtBeg(&head,2);
	addAtBeg(&head,8);
	addAtBeg(&head,6);
	addAtBeg(&head,4);
	addAtBeg(&head,9);
	printList(head);
	return 0;
}