/* 
int Stack[SIZE], top = -1;


Above variables are used for Stack, SIZE and top and all are global variables. */

// Function to check if stack is full.
int isFull()
{
	return top==SIZE-1;
}

// Function to check if stack is empty.
int isEmpty()
{
	return top==-1;
}

int min=1000000;
// Function to add an item to stack.
void push(int item)
{
	if(!isFull())
    {
      if(item<=min)
      {
        Stack[++top]=min;
        min=item;
      }
      Stack[++top]=item;
    }
}

// Function to remove an item from stack.
int pop()
{
  if(isEmpty())
    return -1;
  int x=Stack[top--];
	if(x==min)
      min=Stack[top--];
  return x;
}

// Function to return the minimum item from stack.
int getMin()
{
	if(!isEmpty())
      return min;
}