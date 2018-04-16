/** 
 * This will be one of the algorithms for the final project.
 * This will be an implementation of a balanced binary search tree.[]
*/
#include "stdio.h"

/**
 * Defining a node having some data, has a reference to both right and left childs
 */
struct node 
{
    int data;
    struct node *leftChild;
    struct node *rightChild;
};

struct node* search(int data)
{
    struct node *current = root;
    printf("Searching elements: ");

    while(current->data != data)
    {
        if(current != NULL)
        {
            printf("%d ", current->data);

            //going to left tree
            if(current->data > data)
            {
                current = current->leftChild;
            }
            //else going to right tree
            else
            {
                current = current->rightChild;
            }
            //else if current cannot be found
            if(current == NULL)
            {
                return NULL;
            }
        }
    }
    return current;
}

int main(void)
{
    printf("hello world!\n");
    return 0;
}