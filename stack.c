#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int stk[SIZE];
int sp=-1;
void main()
{
void push(int);
int pop(),opt,item;
void display();
do
{
printf("1.Push \n 2.Pop\n 3.Exit \n 4.Display \n");
printf("Your option:");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("Enter item:");
scanf("%d",&item);
push(item);
break;
case 2: item=pop();
printf("Popped value=%d  \n",item);
break;
case 3:display();
break;
case 4:exit(0);
}
}
while(9);
}
void push(int x)
{
if(sp==SIZE-1)
{
printf("stack is full");
return;
}
else
{
stk[++sp]=x;
return;
}
}
int pop()
{
if(sp==-1)
printf("Empty stack");
else
{
sp--;
return stk[sp+1];
}
}
void display()
{
if(sp==-1)
printf("stack is empty");
else
{
printf("Elements are:");
for(int i=sp;i>=0;i--)
{
printf("%d  \n",stk[i]);
}
printf("--------\n");
}
}
