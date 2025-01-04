#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int stack[SIZE];
int sp=-1;
void main()
{
int opt,data;
void push(int);
int pop();
void display();
do
{
printf("1.Push\n");
printf("2.Pop\n");
printf("3.Display\n");
printf("4.Exit\n");
printf("Your option:");
scanf("%d",&opt);
switch(opt)
{
case 1:printf("Data:");
scanf("%d",&data);
push(data);
break;
case 2:data=pop();
printf("Popped,item=%d\n",data);
break;
case 3:display();
break;
case 4: printf("Exit \n THANK YOU");

exit(0);
}
}
while(1);
}

void push(int data)
{
if(sp==SIZE-1)
printf("Full stack");
else
stack[++sp]=data;
}

int pop()
{
if(sp==-1)
{
printf("Empty stack");
exit(1);
}
else 
return stack[sp--];
}

void display()
{
int tsp=sp;
printf("Stack elements:\n");
while(tsp!=-1)
{
printf("%d\n",stack[tsp]);
tsp--;
}
if(sp==-1)
{
printf("Empty stack\n");
exit(1);
}
printf("\n");
}

