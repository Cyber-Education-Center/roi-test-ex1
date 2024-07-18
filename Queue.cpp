#include "Queue.h"


void initQueue(Queue* q, unsigned int size)
{
	q->count = 0;
	q->maxSize = size;
	q->empty = true;
	q->elements = new unsigned int[q->maxSize];
}

void cleanQueue(Queue* q)
{
	delete[] q->elements;
}


bool isEmpty(Queue* q)
{
	return q->empty;
}

bool isFull(Queue* q)
{
	return (q->count == q->maxSize);
}

void enqueue(Queue* q, unsigned int newValue)
{
	if (!isFull(q))
	{
		q->elements[q->count] = newValue;
		q->count++;
		q->empty = false;
	}
}

int dequeue(Queue* q)
{
	if (isEmpty(q))
	{
		return -1; // Nothing to dequeue
	}
	else
	{
		int ans = q->elements[0]; // Save the answer
		/* Remove it from the queue */
		for (unsigned int i = 1; i < q->count; ++i)
		{
			q->elements[i - 1] = q->elements[i];
		}
		q->count--;
		q->empty = (q->count == 0);

		return ans;
	}
}