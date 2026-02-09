#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

int main()
{
    clsDblLinkedList <short> MyDblLinkedList;

    MyDblLinkedList.InsertAtBeginning(10);
    MyDblLinkedList.InsertAtEnd(20);
    MyDblLinkedList.InsertAtEnd(30);
    MyDblLinkedList.InsertAfter(1, 25);   
    MyDblLinkedList.PrintList();

    clsDblLinkedList <short>::Node* Node = MyDblLinkedList.Find(25);

    if (Node != NULL)
        cout << "\nNode Found :-)\n\n";
    else
        cout << "\nNode is not Found :-(\n\n";

    Node = MyDblLinkedList.GetNode(3);

    MyDblLinkedList.InsertAfter(Node, 40);

    MyDblLinkedList.PrintList();

    cout << "\nItem at index 2 : " << MyDblLinkedList.GetItem(2) << "\n\n";

    MyDblLinkedList.UpdateItem(2, 99);
    MyDblLinkedList.PrintList();

    MyDblLinkedList.DeleteFirstNode();
    MyDblLinkedList.DeleteNode(Node);
    MyDblLinkedList.DeleteLastNode();
    MyDblLinkedList.PrintList();

    MyDblLinkedList.Reverse();
    MyDblLinkedList.PrintList();

    cout << "Size : " << MyDblLinkedList.Size() << endl;
    cout << "Is Empty : " << MyDblLinkedList.IsEmpty() << endl;

    MyDblLinkedList.Clear();
    cout << "After Clear -> Is Empty : " << MyDblLinkedList.IsEmpty() << endl;

    system("pause>0");
    return 0;
}