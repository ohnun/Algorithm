#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "../Error/error.h"

/* Make a list L */
List MakeEmpty( List L ){
    L = ( List )malloc( sizeof( List ) );
    L->Next = NULL;

    return L;
}

/* Return true if L is empty */
int IsEmpty( List L ){
    return L->Next == NULL;
}

/* Return true if P is the last position in list L */
/* Parameter L is unused in this implementation */
int IsLast( Position P, List L ){
    return P->Next == NULL;
}

/* Return Position of X in L; NULL if not found */
Position Find( ElementType X, List L ){
    Position P = NULL;

    P = L->Next;
    while( P != NULL && P->Element != X ){
        P = P->Next;
    }
    return P;
}

/* Delete first occurrence of X from a list */
/* Assume use of a header node */
void Delete( ElementType X, List L ){
    Position P = NULL, TmpCell = NULL;

    P = FindPrevious( X, L );

    if( !IsLast( P, L ) ){
        TmpCell = P->Next;
        P->Next = TmpCell->Next;
        free( TmpCell );
    }
}

/* If X is not found, then Next field of returned */
/* Position is NULL */
/* Assumes a header */
Position FindPrevious( ElementType X, List L ){
    Position P = NULL;

    P = L;
    while( P->Next != NULL && P->Next->Element != X ){
        P = P->Next;
    }
    return P;
}

/* Insert (after legal position P) */
/* Header implementation assumed */
/* Parameter L is unused in this implementation */
void Insert( ElementType X, List L, Position P ){
    Position TmpCell = NULL;

    TmpCell = ( List )malloc( sizeof( struct ListNode ) );
    if( TmpCell == NULL ){
        FatalError( "Out of space!!!" );
    }
    TmpCell->Element = X;
    TmpCell->Next = P->Next;
    P->Next = TmpCell;
}

/* Delete element of list L */
void DeleteList( List L ){
    Position P = NULL, Tmp = NULL;

    P = L->Next;
    L->Next = NULL;
    while( P != NULL ){
        Tmp = P->Next;
        free( P );
        P = Tmp;
    }
}

/* Return header of list L */
Position Header( List L ){
    return L;
}

/* Return the first Node position in list L */
Position First( List L ){
    return L->Next;
}

/* Return the next Node position of P */
Position Advance( Position P ){
    return P->Next;
}

/* Retrieve the element of P */
ElementType Retrieve( Position P ){
    return P->Element;
}

/* Print the list L */
void PrintList( List L ){
    Position P = NULL;

    P = L -> Next;
    while( P != NULL ){
        printf( "%d%s", P->Element, IsLast( P, L ) ? "\n" : " " );
        P = P->Next;
    }
}