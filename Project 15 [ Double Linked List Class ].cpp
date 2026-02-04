#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

int main()
{
    clsDblLinkedList <short> MyDblLinkedList;

    MyDblLinkedList.InsertAtBeginning(5);
    MyDblLinkedList.InsertAtBeginning(4);
    MyDblLinkedList.InsertAtBeginning(3);
    MyDblLinkedList.InsertAtBeginning(2);
    MyDblLinkedList.InsertAtBeginning(1);

    cout << "\nLinked List Content :\n";
    MyDblLinkedList.PrintList();

    cout << "\nNumber of items in the Linked List = " << MyDblLinkedList.Size() << endl;

    cout << "\nExecutint .Clear()\n";

    MyDblLinkedList.Clear();
    cout << "\nNumber of items in the Linked List = " << MyDblLinkedList.Size() << endl;

    if (MyDblLinkedList.IsEmpty())
        cout << "\n\nYes List is Empty.\n";
    else
        cout << "\n\nNo List is not Empty.\n";

    /*clsDblLinkedList<short>::Node* N1 = MyDblLinkedList.Find(2);

    if (N1 != NULL)
        cout << "\n\nNode with value 2 is found :-)\n";
    else
        cout << "\n\nNode is not found :-(\n";

    MyDblLinkedList.InsertAfter(N1, 500);

    cout << "\n\nAfter Inserting 500 After 2 :\n";
    MyDblLinkedList.PrintList();

    MyDblLinkedList.InsertAtEnd(700);

    cout << "\n\nAfter Inserting 700 at end :\n";
    MyDblLinkedList.PrintList();

    clsDblLinkedList<short>::Node* N2 = MyDblLinkedList.Find(4);

    MyDblLinkedList.DeleteNode(N2);

    cout << "\n\nAfter Deleting 4 :\n";
    MyDblLinkedList.PrintList();

    MyDblLinkedList.DeleteFirstNode();

    cout << "\n\nAfter Deleting First Node :\n";
    MyDblLinkedList.PrintList();

    MyDblLinkedList.DeleteLastNode();

    cout << "\n\nAfter Deleting Last Node :\n";
    MyDblLinkedList.PrintList();*/

    system("pause>0");
    return 0;
}