#include <bits/stdc++.h>

using namespace std;

#include "header.h"


int main()
{
    DoublyLinkedList < int > * myList = new DoublyLinkedList < int > ();
    ( * myList).print();

    ( * myList).insertAtBegin(1);
    ( * myList).insertAtBegin(2);
    ( * myList).insertAtEnd(3);
    ( * myList).print();

    ( * myList).deleteFromBegin();
    ( * myList).print();

    ( * myList).deleteFromEnd();
    ( * myList).print();

    ( * myList).insertAfterNode((myList -> getHead()) -> getNext(), 5);
    ( * myList).print();

    ( * myList).insertAfterNode((myList -> getHead()), 5);
    ( * myList).print();

    ( * myList).insertAfterNode((myList -> getHead()), 7);
    ( * myList).print();

    ( * myList).deleteAfterNode(myList -> getHead());
    ( * myList).print();

    ( * myList).deleteAfterNode(myList -> getHead());
    ( * myList).print();

    return 0;
}
