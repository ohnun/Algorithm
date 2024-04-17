#ifndef _STACK_H
#define _STACK_H

#define ElementType int

struct ListNode;
typedef struct ListNode *PtrToNode;
typedef PtrToNode Stack;

int IsStackEmpty( Stack S );
Stack CreateStack( void );
void DisposeStack( Stack S );
void Push( ElementType X, Stack S );
ElementType Top( Stack S );
void Pop( Stack S );

#endif /*_STACK_H*/