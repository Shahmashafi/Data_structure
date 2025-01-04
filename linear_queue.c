#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int que[SIZE];
int front=-1,rear=-1;
void main()
{
int opt,data,temp,ans;
void insertq(int);
int deleteq();
int searchq(int);
do
{
printf("1.Insert\n");
printf("2.Delete\n");
printf("3.Search\n");
printf("4.Exit\n");
printf(" Enter Your option:");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("Data:");
scanf("%d",&data);
insertq(data);
break;
case 2:
printf("Deleted item=%d\n",deleteq());
break;
case 3:printf("Item to be search:");
scanf("%d",&data);
ans=searchq(data);
if(ans==1)
printf("Found\n");
else
printf("Not found\n");
break;
case 4:
printf("Exit\n THANK YOU" );
exit(0);
}
}
while(1);
}
void insertq(int item)
{
if(rear==SIZE-1)
printf("Queue is full\n");
else
que[++rear]=item;
}
int deleteq()
{
if(front==rear)
{
printf("Queue is empty\n");
exit(1);
}
return que[++front];
}
int searchq(int item)
{
int temp=front+1;
while(temp!=rear && que[temp]!=item)
++temp;
if(que[temp]==item)
return 1;
else
return 0;
}
