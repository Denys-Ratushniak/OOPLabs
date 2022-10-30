template < class T > class Node;
template < class T > class DoublyLinkedList;

template < class T >
class Node
{
private:
    Node * next, * prev;
    T val;
public:
    Node(T val)
    {
        next = NULL;
        prev = NULL;
        this -> val = val;
    }
    T getVal()
    {
        return val;
    }
    Node < T > * getNext()
    {
        return next;
    }
    friend class DoublyLinkedList < T > ;

};

template < class T >
class DoublyLinkedList
{
private:
    Node < T > * head, * tail;
public:
    Node < T > * getHead()
    {
        return head;
    }
    void print()
    {
        Node < T > * now = head;
        if (now == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        cout << "List: ";
        while (true)
        {
            cout << now -> val << " ";
            if (now == tail) break;
            now = now -> next;
        }

        cout << endl;
    }
    void insertAtBegin(T val)
    {
        Node < T > * v = new Node < T > (val);
        if (head == NULL)
        {
            head = tail = v;

            return;
        }
        v -> next = this -> head;
        head -> prev = v;
        head = v;
    }

    void insertAtEnd(T val)
    {
        Node < T > * v = new Node < T > (val);
        if (head == NULL)
        {
            head = tail = v;
            return;
        }
        v -> prev = this -> tail;
        tail -> next = v;
        tail = v;
    }

    void insertAfterNode(class Node < T > * prevNode, T val)
    {
        if (prevNode == NULL)
        {
            cout << "Previous node is required, it can`t be NULL" << endl;
            return;
        }
        if (prevNode == tail)
        {
            insertAtEnd(val);
            return;
        }
        Node < T > * now = new Node < T > (val);

        now -> next = prevNode -> next;
        prevNode -> next = now;
        now -> prev = prevNode;
        now -> next -> prev = now;
    }

    void deleteFromBegin()
    {
        if (head == NULL)
        {
            cout << "List is empty, nothing to delete" << endl;
            return;
        }
        if (head == tail)
        {
            delete head;
            return;
        }

        Node < T > * now = head -> next;
        delete head;
        head = now;
        head -> prev = NULL;
    }

    void deleteFromEnd()
    {
        if (head == NULL)
        {
            cout << "List is empty, nothing to delete" << endl;
            return;
        }
        if (head == tail)
        {
            delete head;
            return;
        }
        Node < T > * now = tail -> prev;
        delete tail;
        tail = now;
        tail -> next = NULL;
    }

    void deleteAfterNode(class Node < T > * prevNode)
    {
        if (prevNode == NULL)
        {
            cout << "Previous node is required, it can`t be NULL" << endl;
            return;
        }
        if (prevNode == tail)
        {
            cout << "Previous node can`t be a tail of list" << endl;
            return;
        }
        if (prevNode == tail -> prev)
        {
            deleteFromEnd();
            return;
        }
        prevNode -> next = prevNode -> next -> next;
        delete prevNode -> next -> prev;
        prevNode -> next -> prev = prevNode;
    }

};
