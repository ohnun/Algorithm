#ifndef _QUEUE_H
#define _QUEUE_H

#define ElementType int

struct ListNode;
typedef struct ListNode *PtrToNode;
typedef PtrToNode Queue;

int IsQueueEmpty( Queue Q );
Queue CreateQueue( void );
void DisposeQueue( Queue Q );
void Enqueue( ElementType X, Queue Q );
ElementType Front( Queue Q );
void Dequeue( Queue Q );
ElementType FrontAndDequeue( Queue Q );

#endif /*_QUEUE*/