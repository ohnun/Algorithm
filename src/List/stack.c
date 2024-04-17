#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "stack.h"
#include "../Error/error.h"

/* Return true if stack S is empty */
int IsStackEmpty( Stack S ){
    return IsEmpty( S );
}

/* Create a stack */
Stack CreateStack( void ){
    Stack S = NULL;

    return MakeEmpty( S );
}

/* Dispose the stack S */
void DisposeStack( Stack S ){
    if( !IsEmpty( S ) ){
        DeleteList( S );
    }
    if( S != NULL ){
        free( S );
    }
}

/* Put element on the top of stack S */
void Push( ElementType X, Stack S ){
    if( S == NULL ){
        Error( "Must use CreateStack first." );
    }

    Insert( X, S, S );
}

/* Return the element on the top of stack S */
ElementType Top( Stack S ){
    if( S == NULL ){
        Error( "Must use Createstack first." );
    }
    if( IsEmpty( S ) ){
        Error( "Empty stack." );
    }

    return Retrieve( First( S ) );
}

/* Pop the element on the top of stack S */
void Pop( Stack S ){
    if( S == NULL ){
        Error( "Must use Createstack first." );
    }
    if( IsEmpty( S ) ){
        Error( "Empty stack." );
    }

    Delete( Retrieve( First( S ) ), S);
}