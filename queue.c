#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int que[SIZE];
int front=0,rear=0;
void main()
{
void enqueue(int);
int dequeue,item,opt;
void display();
do
{
printf("1.Insert \n 2.Delete \n 3.Display \n 4.Exit\n");
printf("Your option:");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("Enter item:");
scanf("%d",&item);
enqueue(item);
break;
case 2:item=dequeue();
printf("Deleted value =%d",item);
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
printf("Queue is empty");
else
{
rear=temp;
que[rear]=item;
}
return;
}
//function to delete item
int dequeue()
{
if(front==rear)
printf("queue is empty");
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
printf("No data");
else
{
i=(front=1)%SIZE;
do
{
printf("%d,",que[i]);
i=(i+1)%SIZE;
}while(i!=front);
}
return;
}
