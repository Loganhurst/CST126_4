
#include "stdafx.h"
#include <string>
#include <iostream>

#include "term.h"
#include "LinkedList.h"


using namespace std;

LinkedList::LinkedList()
{
	this->my_length = 0;
	this->head = nullptr;
}
LinkedList::~LinkedList()
{
	Node * current = head;
	std::cout << "Destructor";
	while (current != 0)
	{
		Node * next = current->next;
		delete current;
		current = next;
	}
	head = 0;
}

void LinkedList::print()
{
	Node *head = this->head;
	int i = 0;
	while (head)
	{
		std::cout << i << ":\t";
		head->data.output();
		head = head->next;
		i++;
	}
	cout << endl;
}

void LinkedList::add_node(Term data1)
{
	Node * node = new Node();
	node->data = data1;
	my_length++;
	if (head == nullptr)
		head = node;
	else 
	{


		if (data1.name < head->data.name)
		{
			node->next = head;
			head = node;
		}
		else
		{
			Node * temp = head;
			Node * prev = nullptr;

			while (temp != nullptr && (data1.name > temp->data.name))
			{
				prev = temp;
				temp = temp->next;
			}
			prev->next = node;
			node->next = temp;
		}
	}
}
void LinkedList::find_Term()
{
	cout << "What term are you searching for?" << endl;
	string check;
	cin >> check;
	{
		Node *head = this->head;
		int i = 0;
		while (head)
		{
			head->data.match(check);
			head = head->next;
		}
	}
}


