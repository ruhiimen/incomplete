#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *sp=(struct node*)0;
struct node *push(struct node*,int);
struct node *pop(struct node*,int*);
void display(struct node*);
int search(struct node*, int);
void main()
{

int option,data,found;
for(;;)
{
printf("\n 1.Push \n 2.Pop\n 3.Display \n 4.Search \n 5.Exit \n");
printf("Enter your choice:");
scanf("%d",&option);
switch(option)
{
case 1: printf("Enter elements:");
scanf("%d,",&data);
sp=push(sp,data);
break;
case 2: if (sp==(struct node *)0)
printf("stack is empty");
else
{
sp=pop(sp,&data);
printf("poped item=%d",data);
}
break;
case 3: display(sp);
break;
case 4:printf("Enter item to search:");
scanf("%d",&data);
found=search(sp,data);
if(found)
printf("Element %d Found",data);
else
printf("Element %d Not Found",data);
break;
case 5:exit(0);
}
}//end of for loop

}//end of main fn

//function for push opertaion
struct node *push(struct node *sp,int data)
{
struct node * temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=data;
temp->next=sp;
sp=temp;
return temp;
}
//function to pop item 
struct node * pop(struct node *s,int *x)
{
struct node *temp;
if(s!=(struct node*)0)
{
temp=s;
*x=s->data;
s=s->next;
free(temp);
}
return s;
}
//function to display contents
void display(struct node *sp)
{
if(sp==NULL)
{
printf("Stack Empty \n ");
return;
}
printf("Stack contents are:\n");
while(sp!=NULL)
{
printf("%d \n",sp->data);
sp=sp->next;
}
}

//function to search an item in stack
int search(struct node *sp, int data)
{
while(sp!=0 && sp->data!=data)
sp=sp->next;
if(sp==0)
return 0;
else
return 1;
}

