/*
** binaryTree.h
**
** Made by Gabriel Cabanes
** Login   <cabane_g@epitech.net>
**
** Started on Wed Jan 11 12:35:17 2017 Gabriel Cabanes
*/

#ifndef ABR_BINARYTREE_H
#define ABR_BINARYTREE_H

#include <cstdlib>

class BinaryTree {
public:
    BinaryTree();
    ~BinaryTree();

private:
    struct  Node {
        int         key;
        Node        *right;
        Node        *left;
    };
    Node            *root;
};


#endif //ABR_BINARYTREE_H
