
#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H

#include "Node.h"

/**
 * This class holds the Linked List logics
 */
class LinkedList {

private:
    Node *m_head;
    Node *m_tail;
    int m_length;

public:
    /**
     * User-defined constructor
     * Used in creating a link list by passing a value parameter.
     * Creates a new node,
     * m_head to point to the new created node.
     * m_tail to point to the new created node.
     * m_length is set to 1.
     * @param value
     */
    LinkedList(int value);

    /**
     * Used in printing out the element in the list.
     * Creates a new pointer temp,
     * using a while loop, condition where temp is not equals to nullptr,
     * prints the value of the pointed node,
     * and set temp pointer to next index.
     * Breaks when temp pointer is on nullptr.
     */
    void PrintList();

    /**
     * Used for getting the value of head pointer
     */
    void GetHead();

    /**
     * Used for getting the value of tail pointer
     */
    void GetTail();

    /**
     * Used for getting the length of the link list
     */
    void GetLength();

};


#endif //LINKEDLIST_LINKEDLIST_H
