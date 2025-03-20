#include <stdio.h>
int top=-1;
//function to pop the data from the stack.
void pop(int a[20])
{
    int x;
    if (top==-1)
    {
        printf("\n stack underflow");
        return;
    }
    x=a[top--];
}
//function to display the stack.
void display (int a[20])
{
int i;
if (top==-1)
{
    printf("No Element");
    return;
}
printf("\n The element of the stack are: ");
for ( i = top; i < 0; i--)
{
    printf("%d",a[i]);
}
//main function
int main ()
{
    int stack[20],ch,n;
    printf("\n Enter the number of elements: ");
    scanf("%d",&n);
}
while (1)
{
    printf("\n 1.push \n 2.pop \n 3.DISPLAY \n 4.EXIT \n Enter the choice: ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1: push (stack);
            break;
    case 2: pop(stack);
            break;
    case 3: display(stack);
            break;
    case 4: return;        
    default:printf("\n Worng choice");
        break;
    }
}
printf("Hello word\n");
return 0;
}