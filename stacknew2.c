#include<stdio.h>
int stack[10];
int num;
int top = -1,i,n,popped,sr;

int push()
{
    if(top == n-1)
    {
         printf("Stack is full");
    }
    else
    {
          printf ("\nEnter element to be pushed: ");
          scanf ("%d", &num);
          top = top + 1;
          stack[top] = num;
    }
};
int pop()
{
  if( top == -1)
  {
      printf("Stack is empty");
  }
  else
  {
      popped = stack[top];
      printf("The popped element is : %d ",popped);
      top =top-1;
  }
};
int search()
{
    printf ("\n Enter a key for searching  :");
    scanf("%d",&sr);
    for(i=0;i<=num;i++)
    {
        if(stack[i]==sr)
        {
           break;
        }
    }
    if(i<num)
      printf("Element is founded at index :%d",i+1);
    else
      printf("NO ELEMENT FOUNDED");


};
int display()
{
   if(top == -1)
   {
       printf("Stack is empty");
   }
   else
   {
   for(i = top ;i>=0;i--)
   {
        printf("%d \n",stack[i]);
   }
   }

};
int main()
{
    int ch;
    printf("Enter the size of Stack:");
    scanf("%d",&n);
    do
    {
     printf("\nSelect any following options :\n");
     printf(" 1.PUSH operation\n 2.POP operation\n 3.DISPLAY\n 4.SEARCH operation\n 5.EXIT \n");
     printf("\nSelect your option :");
     scanf("%d",&ch);
     switch (ch)
            {
                case 1:push();
                        break;
                case 2:pop();
                        break;
                case 3:display();
                        break;
                case 4:search();
                        break;
                case 5:exit(0);
                default: printf("Invalid operation \n");
                    }
            } while (ch == 1 || ch == 2 || ch == 3 ||ch == 4);

    return 0;
}
