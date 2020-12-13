#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

class BinarySearchTree
{
    struct Pointers
    {
        BinarySearchTree* left = nullptr;
        BinarySearchTree* right = nullptr;
    };

public:
    int data; // in our case the node data == node key, but it's easy to change
    Pointers pointers;
    unsigned int quantityOfNodes; // For random bin search tree only

    BinarySearchTree(int data = 0);
    BinarySearchTree(string input);
    ~BinarySearchTree();

    void view(int d = 0);

    int getQuantityOfNodes();
    void updateQuantityOfNodes();

    BinarySearchTree* find(int data);
    BinarySearchTree* rotateLeft();
    BinarySearchTree* rotateRight();

    BinarySearchTree* insertInRoot(int data); // Return root pointer
    BinarySearchTree* insert(int data);

    BinarySearchTree* deleteFirst(int data);
};