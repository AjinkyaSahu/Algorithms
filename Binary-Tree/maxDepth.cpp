#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// Find the max depth of a Binary tree.
// We can use recursion or levelorder, but recursion is better
// we check 1 + MAX(heightofrighthalf, heightoflefthalf)

int maxDepth(Node *root)
{
    if (root == NULL)
        return 0;

    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);

    return 1 + max(lh, rh);
}

int main()
{
    struct Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->right = new Node(5);

    maxDepth(root);

    return 0;
}