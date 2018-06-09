#pragma once
#include "stdafx.h"

#include <string>
#include <iostream>

#include "term.h"
using namespace std;

class Node
{
public:
	Node() { next = nullptr; }
	Node * next;
	Term data;
};
class LinkedList
{
public:
	LinkedList();
	~LinkedList();
	
	int length() { return my_length; };
	void add_node(Term data);
	void find_Term();
	void print();

private:
	int my_length;
	Node * head;
};
