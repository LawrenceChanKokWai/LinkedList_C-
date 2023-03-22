
#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList(int value)
{
    Node *newNode = new Node(value);
    m_head = newNode;
    m_tail = newNode;
    m_length = 1;
}

void LinkedList::PrintList()
{
    Node *temp = m_head;
    while(temp)
    {
        std::cout << temp->m_value << " ";
        temp = temp->m_next;
    }
    std::cout << std::endl;
}

void LinkedList::GetHead()
{
    std::cout << "Head: " << m_head->m_value << std::endl;
}

void LinkedList::GetTail()
{
    std::cout << "Tail: " << m_tail->m_value << std::endl;
}

void LinkedList::GetLength()
{
    std::cout << m_length << std::endl;
}
