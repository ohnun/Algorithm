#include <stdio.h>
#include <stdlib.h>
#include "../Error/error.h"
#include "tree.h"

/* Return tree T NULL */
SearchTree MakeEmpty( SearchTree T ){
    if( T != NULL ){
        MakeEmpty( T->Left );
        MakeEmpty( T->Right );
        free( T );
    }
    return NULL;
}

/* Return Position of X in T */
Position Find( ElementType X, SearchTree T ){
    if( T == NULL ){
        return NULL;
    }

    if( X < T->Element ){
        return Find( X, T->Left );
    }else if( X > T->Element ){
        return Find( X, T->Right );
    }else{
        return T;
    }
}

/* Return the Position of minimum in T */
Position FindMin( SearchTree T ){
    if( T == NULL ){
        Error( "Empty tree." );
    }

    Position P = T;
    while( P->Left != NULL ){
        P = P->Left;
    }
    return P;
}

/* Return the Position of maximum in T */
Position FindMax( SearchTree T ){
    if( T == NULL ){
        Error( "Empty tree." );
    }

    Position P = T;
    while( P->Right != NULL ){
        P = P->Right;
    }
    return P;
}

/* Insert X in tree T */
SearchTree Insert( ElementType X, SearchTree T ){
    if( T == NULL ){
        /* Create and return a one-node tree */
        T = ( SearchTree )malloc( sizeof( struct TreeNode ) );
        if( T == NULL ){
            FatalError( "Out of space!!!" );
        }else{
            T->Element = X;
            T->Parent  = NULL;
            T->Left    = NULL;
            T->Right   = NULL;
        }
    }else if( X < T->Element ){
        T->Left  = Insert( X, T->Left );
        T->Left->Parent = T;
    }else if( X > T->Element ){
        T->Right = Insert( X, T->Right );
        T->Right->Parent = T;
    }
    /* Else X is in the tree already; we'll do nothing */

    return T;
}

/* Delete element X in tree T */
SearchTree Delete( ElementType X, SearchTree T ){
    Position TmpCell;

    if( T == NULL ){
        Error( "Element not found" );
    }else if( X < T->Element ){
        /* Go left */
        T->Left = Delete( X, T->Left );
    }else if( X > T->Element ){
        /* Go right */
        T->Right = Delete( X, T->Right );
    }else if( T->Left && T->Right ){ // Found element to be deleted. 
        /* Two children */
        TmpCell = FindMin( T->Right );
        T->Element = TmpCell->Element;
        T->Right   = Delete( T->Element, T->Right );
    }else{
        TmpCell = T;

        if( T->Left == NULL ){
            T = T->Right;
            if( T ){
                T->Parent = TmpCell->Parent;
            }
        }else if( T->Right == NULL ){
            T = T->Left;
            if( T ){
                T->Parent = TmpCell->Parent;
            }
        }

        free( TmpCell );
    }

    return T;
}

/* Return the value of Position P */
ElementType Retrieve( Position P ){
    if( P == NULL ){
        Error( "Empty." );
    }

    return P->Element;
}


int GetDeepth( Position P ){
    int Deepth = 0;
    while( P->Parent != NULL ){
        P = P->Parent;
        Deepth++;
    }

    return Deepth;
}

/* Print every nodes of tree T */
void PrintTree( SearchTree T ){
    if( T != NULL ){
        for( int i = 0; i < GetDeepth( T ); i++ ){
            printf( "  " );
        }
        printf( "%d\n", T->Element );

        if( T->Left != NULL ){
            PrintTree( T->Left );
        }
        if( T->Right != NULL ){
            PrintTree( T->Right );
        }
    }
}