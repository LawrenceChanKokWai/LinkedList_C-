
#ifndef LINKEDLIST_NODE_H
#define LINKEDLIST_NODE_H

/**
 * Node class which is used for creating a node.
 * A node contains a value and a pointer in pointing to the next element.
 */
class Node {
public:
    int m_value;
    Node *m_next;

    /**
     * User-defined Constructor
     * Used in constructing a node containing a value and a pointer.
     * @param value
     */
    Node(int value);
};


#endif //LINKEDLIST_NODE_H
