#include<stdio.h>
#include<stdlib.h>
#define ppd(x) printf("%d\n",x)
#define ch struct node*
struct node
{
	int data;
	ch left;
	ch right;
};
ch createnode(int i)
{
	ch temp=(ch)(malloc(sizeof(struct node)));
	temp->data=i;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
void insert(ch* nn,int i)//store in bst
{
	if ((*nn)==NULL)
	{
		(*nn)=createnode(i);
	}
	else if (((*nn)->data)>i)
	{
		insert(&((*nn)->left),i);
	}
	else
	{
		insert(&((*nn)->right),i);	
	}
}
void inorder(ch* nn)//print in inorder
{
	if ((*nn)==NULL)
	{
		return;
	}
	inorder(&((*nn)->left));
	ppd((*nn)->data);
	inorder(&((*nn)->right));
}
int main()
{
	int a[10]={19, 22, 13, 7, 24, 17, 11, 3, 39, 51};
	ch nn=NULL;
	for (int i=0;i<10;++i)
	{
		insert(&nn,a[i]);	
	}
	inorder(&nn);
}