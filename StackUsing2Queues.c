/*
int top = -1;
int front1=-1, rear1=-1;
int front2=-1, rear2=-1;
int q1[SIZE], q2[SIZE];

void enqueue(int q[], int *f, int *r, int item);
int dequeue(int q[], int *f, int *r);

Above two queue and their enqueue and dequeue functions are available, 
So complete the below two methods to implement stack using these functions. */


// Function to add an item to stack.
int push(int item)
{
	if(rear1!=SIZE-1)
    {
      enqueue(q1,&front1,&rear1,item);
    }
}

// Function to remove an item from stack.
int pop()
{
	if((front1==-1 && rear1==-1) ||(front1>rear1))
      return -1;
  while(front1!=rear1)
  {
    int x=dequeue(q1,&front1,&rear1);
    enqueue(q2,&front2,&rear2,x);
  }
  int ans=dequeue(q1,&front1,&rear1);
  while(front2<=rear2)
  {
    int x=dequeue(q2,&front2,&rear2);
    enqueue(q1,&front1,&rear1,x);
  }
  return ans;
}