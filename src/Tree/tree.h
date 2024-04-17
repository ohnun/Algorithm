#ifndef _TREE_H
#define _TREE_H

#define ElementType int

struct TreeNode;
typedef struct TreeNode *Position;
typedef struct TreeNode *SearchTree;

SearchTree MakeEmpty( SearchTree T );
Position Find( ElementType X, SearchTree T );
Position FindMin( SearchTree T );
Position FindMax( SearchTree T );
SearchTree Insert( ElementType X, SearchTree T );
SearchTree Delete( ElementType X, SearchTree T );
ElementType Retrieve( Position P );
void PrintTree( SearchTree T );

#endif /*_TREE_H*/

#ifndef _TREE_NODE
#define _TREE_NODE

struct TreeNode{
    ElementType Element;
    SearchTree  Parent;
    SearchTree  Left;
    SearchTree  Right;
};

#endif /*_TREE_NODE*/