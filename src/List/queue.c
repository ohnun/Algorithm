#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "queue.h"
#include "../Error/error.h"

/* Return true if Q is empty */
int IsQueueEmpty( Queue Q ){
    return IsEmpty( Q );
}

/* Create a queue */
Queue CreateQueue( void ){
    Queue Q = NULL;

    return MakeEmpty( Q );
}

/* Dispose the queue Q */
void DisposeQueue( Queue Q ){
    if( !IsEmpty( Q ) ){
        DeleteList( Q );
    }
    if( Q != NULL ){
        free( Q );
    }
}

/* Push the element at the tail of queue Q */
void Enqueue( ElementType X, Queue Q ){
    if( Q == NULL ){
        Error( "Must use CreateQueue first." );
    }

    Position P = Q;
    while( !IsLast( P, Q ) ){
        P = Advance( P );
    }
    Insert( X, Q, P );
}

/* Return the first element of queue Q */
ElementType Front( Queue Q ){
    if( Q == NULL ){
        Error( "Must use CreateQueue first." );
    }
    if( IsEmpty( Q ) ){
        Error( "Empty queue." );
    }

    return Retrieve( First( Q ) );
}

/* Pop the first element of queue Q */
void Dequeue( Queue Q ){
    if( Q == NULL ){
        Error( "Must use CreateQueue first." );
    }
    if( IsEmpty( Q ) ){
        Error( "Empty queue." );
    }

    Delete( Retrieve( First( Q ) ), Q);
}

/* Return the first element of queue Q */
/* And then pop it from the queue */
ElementType FrontAndDequeue( Queue Q ){
    ElementType First = Front( Q );
    Dequeue( Q );

    return First;
}