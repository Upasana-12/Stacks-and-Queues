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

// Function to add an item to stack.
int push(int item)
{
	if(!isFull())
    {
      Stack[++top]=item;
    }
}

// Function to remove an item from stack.
int pop()
{
	if(isEmpty())
      return -1;
  return Stack[top--];
}