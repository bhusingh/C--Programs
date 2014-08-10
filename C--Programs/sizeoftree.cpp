#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<vector>
using namespace std;
struct node
{
	struct node *left,*right;
	int data;
};
struct node *newNode(int data)
{
	struct node *temp = new node;
	temp->left = NULL;
	temp->right = NULL;
	temp->data = data;
};
struct listC
{
	struct listC *prev,*next;
	int val;
};
void inOrder(struct node *root)
{
	if(root==NULL)
		return;
	inOrder(root->left);
	cout<<root->data;
	inOrder(root->right);
}
int sizeofTree(struct node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	return (1+sizeofTree(root->left)+sizeofTree(root->right));
}
bool identicalTrees(struct node *root1,struct node *root2)
{
	if(root1==NULL && root2==NULL)
		return true;
	identicalTrees(root1->left,root2->left);
	if(root1->data!=root2->data)
		return false;
	identicalTrees(root1->right,root2->right);
	//return true;
}
void mirror(struct node *root)
{
	if(root==NULL)
		return;
	mirror(root->left);
	mirror(root->right);
	struct node *temp = root->left;
	root->left = root->right;
	root->right = temp;
}
void printArray(vector<int> &a,int index)
{
	//vector <int>::iterator it;
	//for(it=a.begin();it!=a.end();it++)
	//{
		//cout<<*it<<"->";
	//}
	for(int i=0;i<=index;i++)
	{
		cout<<a[i]<<"->";
	}
}
void printRootToLeaf(struct node *root,vector <int> &a,int index)
{
	if(root==NULL)
		return;
	if(root->left == NULL && root->right == NULL)
	{
		a[index]=root->data;
		printArray(a,index);
		cout<<endl;
		return;
	}
	
	a[index]=root->data;
	index++;
	printRootToLeaf(root->left,a,index);
	printRootToLeaf(root->right,a,index);
}
struct node *lca(struct node*root,int n1,int n2)
{
	if(root==NULL)
		return NULL;
	if(root->data >n1 && root->data >n2)
		return lca(root->left,n1,n2);
	else if(root->data <n1 && root->data <n2)
		return lca(root->right,n1,n2);
	return root;
}
void treeToList(struct node*root,struct listC** head)
{
	if(root == NULL)
	{
		return;
	}
	struct node *prev=NULL;
	listD = (struct listC*)malloc(sizeof(struct listC));
	listD->prev = treeToList(root->left,listD);
	listD->val = root->data;
	listD->next = treeToList(root->right,listD);
	return listD;
}
void printListD(struct listC* listD)
{
	while(listD)
	{
		cout<<listD->val<<"->";
		listD = listD->next;
	}
}
int main()
{
	struct node *root        = newNode(20);
    root->left               = newNode(8);
    root->right              = newNode(22);
    root->left->left         = newNode(4);
    root->left->right        = newNode(12);
    root->left->right->left  = newNode(10);
    root->left->right->right = newNode(14);
	int n1 = 10, n2 = 14;
	//struct listC* listD=(struct listC*)malloc(sizeof(struct listC));
	struct node *head = NULL;
	listD = treeToList(root,&head);
	printListD(head);
    return 0;
}