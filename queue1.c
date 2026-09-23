#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int que[SIZE];
int front=0,rear=0,item;
void main()
{
void enqueue(int);
int dequeue(int*),opt,p;
void display();
do
{
printf("\n 1.Insert \n 2.Delete \n 3.Display \n 4.Exit\n");
printf("Your option:");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("Enter item:");
scanf("%d",&item);
enqueue(item);
break;
case 2:item=dequeue(&p);
if(p!=-1)
printf("Deleted value =%d \n",item);
break;
case 3:display();
break;
case 4:exit(0);
}
}
while(9);
}
//function to insert item
void enqueue(int x)
{
int temp;
temp=(rear+1)%SIZE;
if(temp==front)
printf("Queue is full");
else
{
rear=temp;
que[rear]=x;
}
return;
}
//function to delete item
int dequeue(int *p)
{
if(front==rear)
{
printf("queue is empty \n");
*p=-1;
}
else
{
front=(front+1)%SIZE;
return que[front];
}
}
//function to display queue contents
void display()
{
int i;
if(front==rear)
printf("Queue is empty");
else
{
i=(front+1)%SIZE;
while(1)
{
printf("%d,",que[i]);
if(i==rear)
break;
i=(i+1)%SIZE;
}
printf("\n");
}
return;
}
