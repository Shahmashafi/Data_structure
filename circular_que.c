#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int front=0,rear=0;
int que[SIZE];
void main()
{
  void insertq(int);
  int deleteq();
  int searchq(int);
  int data,opt,ans;
  do
  {
    printf("\n 1.Insert \n");
    printf("\n 2.Delete \n");
    printf("\n 3.Search \n");
    printf("\n 4.Exit \n");
    printf("\n Enter your option:");
    scanf("%d",&opt);
    switch(opt)
    {
      case 1: printf("Data:");
              scanf("%d",&data);
              insertq(data);
              break;
      case 2: printf("deleted item=%d\n",deleteq());
              break;
      case 3: printf("Item to be searched:");
              scanf("%d",&data);
              ans=searchq(data);
              if(ans==1)
               printf("found in queue \n");
              else
               printf(" not Found in queue \n");
              break;        
      case 4: exit(0);
     } 
  }         
while(1);
}
void insertq(int item)
{
  int trear=rear;
  trear=(trear+1)%SIZE;
  if(trear==front)
 
    printf("Queue is full");

  
  else
    rear=trear;
  que[rear]=item;
  return;
} 
int deleteq()
{
  if(front==rear)
  {
    printf("Queue is empty");
    exit(1);
    }
    else{
    front=(front+1)%SIZE;
    return que[front];
    }
 }  
int searchq(int item)
{
int tfront;
if(tfront!=rear)
 {
  tfront=(front+1)%SIZE;
  while(tfront!=rear && que[tfront]!=item)
    tfront=(tfront+1)%SIZE;
   if(que[tfront]==item)
    return 1;
    else 
     return 0;
  }
  return 0;
}

