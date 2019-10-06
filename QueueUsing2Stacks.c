/*
int front=-1, rear=-1;
int s1[SIZE], s2[SIZE], top1=-1, top2=-1;
int push(int s[], int *top, int item);
int pop(int s[], int *top);

Above two stack and their push and pop functions are available, 
 */

// Method to add an item to the queue.
void enqueue(int item)
{
	if(top1!=SIZE-1)
    {
      push(s1,&top1,item);
    }
}

// Method to remove an item from queue.
int dequeue()
{
  int item;
  if(top1==-1 && top2==-1)
  {
    return -1;
  }
	if(top2==-1)
    {
      while(top1!=-1)
      {
        int x=pop(s1,&top1);
        push(s2,&top2,x);
      }
      item=pop(s2,&top2);
    }
  else
  {
    item=pop(s2,&top2);
  }
  return item;
}