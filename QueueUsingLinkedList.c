/*
struct QNode	{	int data; struct QNode *next; };
struct QueueLL	{	struct QNode *front,*rear; };
struct QueueLL *main_Queue;
struct QNode* newElement(int data);

Above strcutures and variables are used for queue.
Also newElement(int) function will insert a new node and return the address of new node.
 */

int enqueue(int data)
{
	struct QNode* temp=newElement(data);
  if(main_Queue->rear==NULL)
  {
    main_Queue->rear=temp;
    main_Queue->front=temp;
  }
  else
  {
    main_Queue->rear->next=temp;
    main_Queue->rear=temp;
  }
  return 1;
}

int dequeue()
{
	if(main_Queue->front==NULL)
      return -1;
  int temp=main_Queue->front->data;
  main_Queue->front=main_Queue->front->next;
  if(main_Queue->front==NULL)
    main_Queue->rear=NULL;
  return temp;
}