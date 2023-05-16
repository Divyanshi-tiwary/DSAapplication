#include <stdio.h>
#include <conio.h>
#include <malloc.h>
struct node
{
int data;
struct node *left;
struct node *right;
};
struct node *tree;
void create_tree(struct node *);
struct node *insertElement(struct node *, int);
int FindHeight(struct node *);

int main() 
{
int option, val;
struct node *ptr;
create_tree(tree);
do
{
		printf("\n ******MAIN MENU******* \n");
		printf("\n 1. Insert Element");
		printf("\n 2. find height ");
		printf("\n 3. Exit");
		printf("\n\n Enter your option : ");
		scanf("%d", &option);
		switch(option)
 {
			case 1:
				printf("\n Enter the value of the new node : ");
				scanf("%d", &val);
				tree = insertElement(tree, val);
				break;
			
			case 2:
				printf("\n The height of the tree = %d",Height(tree));
				break;
				
				case 3:
					printf("exit");
			
		
} 
}
while(option!=3);
return 0;
}
void create_tree(struct node *tree)
{
tree = NULL;
}
struct node *insertElement(struct node *tree, int val)
{
struct node *ptr, *nodeptr, *parentptr;
ptr = (struct node*)malloc(sizeof(struct node));
ptr ->data = val;
ptr ->left = NULL;
ptr ->right = NULL;
if(tree==NULL)
{
		tree=ptr;
		tree->left=NULL;
		tree->right=NULL;
}
else
{
		parentptr=NULL;
		nodeptr=tree;
		while(nodeptr!=NULL)
 {
			parentptr=nodeptr;
			if(val<nodeptr->data)
				nodeptr=nodeptr->left;
			else
				nodeptr = nodeptr->right;
 }
		if(val<parentptr->data)
			parentptr->left = ptr;
		else
			parentptr->right = ptr;
}
return tree;
}

int FindHeight(struct node *tree)
{
int lh , rh;
if(tree==NULL)
		return 0;
else
{
		lh = Height(tree->left);
		rh = Height(tree->right);
		if(lh> rh)
			return (lh + 1);
		else
			return (rh + 1);
} }

