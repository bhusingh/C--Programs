#include <stdio.h>
#include <stdlib.h>
 
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
 
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct node* newNode(int data)
{
    struct node* node = (struct node*)
                             malloc(sizeof(struct node));
    node->data  = data;
    node->left  = NULL;
    node->right = NULL;
 
    return(node);
}
bool identicalTrees(node *root1,node *root2)
{
		if(root1==NULL && root2==NULL)
			return true;
		if(root1!=NULL && root2!=NULL)
		{
		identicalTrees(root1->left, root2->left);
		if(root1->data!=root2->data)
			return false;
		identicalTrees(root1->right, root2->right);
		}
		return false;
}
int main()
{
    struct node *root1 = newNode(1);
    struct node *root2 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left  = newNode(4);
    root1->left->right = newNode(5); 
 
    root2->left = newNode(2);
    root2->right = newNode(3);
    root2->left->left = newNode(4);
    root2->left->right = newNode(5); 
 
    if(identicalTrees(root1, root2))
        printf("Both tree are identical.");
    else
        printf("Trees are not identical.");
 
    getchar();
  return 0;
}