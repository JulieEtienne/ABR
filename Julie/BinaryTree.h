#ifndef BINARYTREE_H_
#define BINARYTREE_H_

#include <cstdlib>

class BinaryTree {

    public :
        BinaryTree(); //Constructeur par défaut
        ~BinaryTree(); //Destructeur

    private :
        struct Node {
            int key;
            BinaryTree* right;
            BinaryTree* left;
        };
        Node* root;

};

#endif //BINARYTREE_H_
