#pragma once
#include <iostream>

using namespace std;

template <class T>
class clsDblLinkedList
{
	int ListSize = 0;

public:

	class Node
	{
	public:

		T Value;
		Node* Next;
		Node* Prev;
	};

	Node* Head = NULL;

	void InsertAtBeginning(T Value)
	{
		Node* NewNode = new Node;

		NewNode->Value = Value;
		NewNode->Next = Head;
		NewNode->Prev = NULL;

		if (Head != NULL)
		{
			Head->Prev = NewNode;
		}

		Head = NewNode;

		ListSize++;
	}

	void PrintList()
	{
		Node* Current = Head;

		cout << "NULL <--> ";

		while (Current != NULL)
		{
			cout << Current->Value << " <--> ";

			Current = Current->Next;
		}

		cout << "NULL\n";
	}

	Node* Find(T Value)
	{
		Node* Current = Head;

		while (Current != NULL)
		{
			if (Current->Value == Value)
				return Current;

			Current = Current->Next;
		}

		return NULL;
	}

	void InsertAfter(Node* Current, T Value)
	{
		if (Current == NULL)
		{
			return;
		}

		Node* NewNode = new Node;

		NewNode->Value = Value;
		NewNode->Next = Current->Next;
		NewNode->Prev = Current;

		if (Current->Next != NULL)
		{
			Current->Next->Prev = NewNode;
		}

		Current->Next = NewNode;

		ListSize++;
	}

	void InsertAtEnd(T Value)
	{
		Node* NewNode = new Node;

		NewNode->Value = Value;
		NewNode->Next = NULL;

		if (Head == NULL)
		{
			NewNode->Prev = NULL;
			Head = NewNode;
		}
		else
		{
			Node* LastNode = Head;

			while (LastNode->Next != NULL)
			{
				LastNode = LastNode->Next;
			}

			NewNode->Prev = LastNode;
			LastNode->Next = NewNode;
		}

		ListSize++;
	}

	void DeleteNode(Node*& NodeToDelete)
	{
		if (Head == NULL || NodeToDelete == NULL)
		{
			return;
		}

		if (Head == NodeToDelete)
		{
			Head = NodeToDelete->Next;
		}

		if (NodeToDelete->Next != NULL)
		{
			NodeToDelete->Next->Prev = NodeToDelete->Prev;
		}

		if (NodeToDelete->Prev != NULL)
		{
			NodeToDelete->Prev->Next = NodeToDelete->Next;
		}

		delete NodeToDelete;

		ListSize--;
	}

	void DeleteFirstNode()
	{
		if (Head == NULL)
		{
			return;
		}

		Node* Temp = Head;

		Head = Head->Next;

		if (Head != NULL)
		{
			Head->Prev = NULL;
		}

		delete Temp;

		ListSize--;
	}

	void DeleteLastNode()
	{
		if (Head == NULL)
		{
			return;
		}

		if (Head->Next == NULL)
		{
			delete Head;
			Head = NULL;
			ListSize--;
			return;
		}

		Node* Currenct = Head;

		while (Currenct->Next->Next != NULL)
		{
			Currenct = Currenct->Next;
		}

		Node* Temp = Currenct->Next;

		Currenct->Next = NULL;
		delete Temp;

		ListSize--;
	}

	int Size()
	{
		return ListSize;
	}
};

