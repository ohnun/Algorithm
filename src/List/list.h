#ifndef _LIST_H
#define _LIST_H

#define ElementType int // type of element in the node. 

struct ListNode;

typedef struct ListNode *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

List MakeEmpty( List L );
int IsEmpty( List L );
int IsLast( Position P, List L );
Position Find( ElementType X, List L );
void Delete( ElementType X, List L );
Position FindPrevious( ElementType X, List L );
void Insert( ElementType X, List L, Position P );
void DeleteList( List L );
Position Header( List L );
Position First( List L );
Position Advance( Position P );
ElementType Retrieve( Position P );
void PrintList( List L );

#endif /*_LIST_H*/

#ifndef _LIST_NODE
#define _LIST_NODE

struct ListNode{
    ElementType Element;
    Position    Next;
};

#endif /*_LIST_NODE*/