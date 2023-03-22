#include <iostream>
#include "LinkedList.h"

int main() {

    LinkedList *listOne = new LinkedList(10);
    listOne->PrintList();

    listOne->GetHead();
    listOne->GetTail();
    listOne->GetLength();

    return 0;
}
