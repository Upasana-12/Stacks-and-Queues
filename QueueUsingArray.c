/*
int front=-1, rear=-1;
int array[SIZE];

Above variables are used for queue, SIZE, front and rear and all are global variables. */

// Method to add an item to the queue.
void enqueue(int item)
{
  if(rear==SIZE-1)
  return;
  if(front==-1 && rear==-1)
  {
	front++;
  rear++;
  }
  else
  {
    rear++;
  }
  array[rear]=item;
  
}

// Method to remove an item from queue.
int dequeue()
{
  if(front>rear)
    return -1;
 	if(rear==-1)
       return -1;
  return array[front++];
}