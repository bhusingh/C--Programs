#include<iostream>
#include<queue>
using namespace std;
struct node
{
	int data;
	struct node *left,*right;
};
struct node *newNode(int data)
{
	struct node *temp = new node;
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}
void rightView(struct node *root)
{
	queue<struct node*>q;
	if(root == NULL)
		return;
	q.push(root);
	while(1)
	{
		int size = q.size();
		int i=0;
		while(i<size)
		{
			struct node *temp = q.front();
			if(i==size-1)
				cout<<temp->data<<endl;
			q.pop();
			if(temp->left)
				q.push(temp->left);
			if(temp->right)
				q.push(temp->right);
			i++;
		}
	}
}
int main()
{
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);
    rightView(root);
    return 0;
}