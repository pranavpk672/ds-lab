
#include<stdio.h>

#define MAX 50
int front=-1,rear=-1;
int ar[MAX];
void insert();
void deletion();
void Display();

int main()
{


int op;

while(1)
{

printf("\n Operations performed by Queue:");
printf("\n 1.Insert\n 2.Delete \n 3.Display\n 4.Exit");
printf("\n\nEnter the operation:");
scanf("%d",&op);

switch(op)
{
case 1: insert();
break;
case 2: deletion();
break;
case 3: display();
break;
case 4: exit(0);

default: printf("\nInvalid operation !!");
}
}
}

void insert()
{
int add_item;

if(rear == MAX-1)
{
printf("\nOverflow!!");
}
else
{
   if(front == -1)
         front=0;
        printf("insert element into the Queue:");
        scanf("%d",&add_item);
        rear=rear+1;
         ar[rear]=add_item;


}
}

void deletion()
{
if(front == -1 || front>rear)
{
printf("\nUnderflow!!");
}
else
{
printf("\nElement deleted from the queue is:%d",ar[front]);
front=front + 1;
}
}


void display()
{


int i;
if(front == -1){
    printf("Queue is empty \n");}
else{
    printf("Queue is :\n");
    for(i=front;i<=rear;i++)
        printf("%d\t",ar[i]);
    printf("\n");

}}
