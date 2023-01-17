
#include<stdio.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
int count = 0;

int createNodeatbeg(value)
{
    struct Node *newNode = malloc(sizeof(struct Node)); //allocating memory for newNode
    newNode->data = value;
    if(head == NULL) //no node present
    {
        newNode->next=NULL; //address of new node setting as null
        head = newNode;
        printf("\n one node is inserted at beg"); //new node is a pointer passing to head
    }
    else
    {
        newNode->next = head;//insert @ beg
        head = newNode;
        printf("\n one node is inserted at beg");
    }

}


void createNodeatend(value)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    if(head == NULL)
    {
        newNode->next=NULL;
        head = newNode;
        printf("\n one node is inserted at end");
     }
     else
     {
        struct Node *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next=NULL;
        printf("\n one node is inserted at end");
     }
}

void insertnodeatpos()
{
   struct Node *ptr;
        int i,pos;
        struct Node *temp = malloc(sizeof(struct Node));
        if(temp==NULL)
        {
                printf("\n Out of Memory Space:n");
                return;
        }
        printf("\n Enter the position for the new node to be inserted:t");
        scanf("%d",&pos);
        printf("\n Enter the data value of the node:");
        scanf("%d",&temp->data) ;

        temp->next=NULL;
        if(pos==0)
        {
                temp->next=head;
                head=temp;
        }
        else
        {

                for(i=0,ptr=head;i<pos-2;i++)
                    {
                        ptr=ptr->next;
                        if(ptr==NULL)
                        {
                                printf("\n Position not found:");
                                return;
                        }
                }
                temp->next =ptr->next ;
                ptr->next=temp;
        }
}

void display() {
    struct Node *temp = head;
    if(temp == NULL)
    {
        printf("Node is empty\n");
    }
    else{
        printf("Nodes of singly linked list: \n");
        while(temp != NULL) {
        printf("|%d|**|---> ", temp->data);
        temp = temp->next;
        }
    printf("\n");
    }
}
void delatbeg()
{
  struct Node *ptr;
  if(head == NULL)
  {
     printf("Node is empty\n");
   }
   else
    {

     ptr = head;
     head = ptr->next;
     printf("\n Node deleted from the begining");
     printf("\n Deleted Element is :%d",ptr->data);
     free(ptr);
   }


}
void delatend(){

 printf("Delete at end");
 struct Node *ptr ,*ptr1;
 if(head== NULL)
 {
       printf("Node is empty\n");
 }
 else if(head->next == NULL)
  {
            head = NULL;
            free(head);
            printf("\nOnly node of the list deleted ...");
    }
 else
    {
     ptr = head;
     while(ptr->next != NULL)
        {
            ptr1 = ptr;
            ptr = ptr ->next;
         }
    ptr1->next = NULL;
    free(ptr);
    printf("\n Deleted Node from the last ...");
    }



}

void delatpos()
{
   int i,pos;
   struct Node *ptr, *ptr1;
   printf("\n Enter Index position to delete(0-n) :");
   scanf("%d",&pos);
   ptr = head;
   for(i=0;i<pos;i++)
       {
           ptr1 = ptr;
           ptr = ptr->next;
            if(ptr == NULL)
            {
                printf("\nThere are less than %d elements in the list..\n",pos);
                return;
            }
       }
    ptr1->next = ptr->next;
    free(ptr);
    printf("\n Deleted  node at %d th postion",pos);
}


int main()
{
    int ch,a,pos;
    struct Node* head = NULL;
    do{
         printf(" \n \n 1.Insert at  beginning \n 2.Insert at End \n 3.Insert at a position \n 4.Display \n 5.Delete at beginning \n 6.Delete at End \n 7.Delete at a pos \n 8.EXIT \n \n");
         printf("\n Enter your option :");
         scanf("%d",&ch);
         switch(ch)
         {
            case 1:printf("Enter Value of Node :");
                   scanf("%d",&a);
                   createNodeatbeg(a);
                   break;
            case 2:printf("Enter Value of Node :");
                   scanf("%d",&a);
                   createNodeatend(a);
                   break;
            case 3:insertnodeatpos(a,pos);
                   break;
            case 4:display();
                   break;
            case 5:delatbeg();
                   break;
            case 6:delatend();
                   break;
            case 7:delatpos();
                   break;
            case 8:exit(0);
                   break;
            default:printf("Invalid Input");
                   break;
         }
    }
    while(ch==1||2||3||4||5||6||7);

}



