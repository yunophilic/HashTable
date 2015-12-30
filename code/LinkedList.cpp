//  Created by Ivan-kun165
//  Copyright (c) 2015 Ivan-kun165. All rights reserved.

#include "LinkedList.h"

LinkedList::LinkedList() //default constructor
{
	front=NULL;
}

LinkedList::LinkedList(const LinkedList& ls) //copy constructor
{
	deepCopy(ls);
}

LinkedList::~LinkedList() //destructor
{
	deleteList();
}

//In "ls1=ls2" assigns ls2 to ls1 and returns ls1
LinkedList& LinkedList::operator=(const LinkedList& ls) //assignment operator
{
	if(this!=&ls)
	{
		deleteList();
		deepCopy(ls);
	}
	return *this;
}

bool LinkedList::insert(const string& s)
{
	if(search(s))
		return false;
	front=new Node(s,front);
	return true;
}

bool LinkedList::remove(const string& s)
{
	Node* temp=front;
	if(temp==NULL) //list is empty
		return false;
	if(temp->data==s) //s is first string in list
	{
		front=temp->next;
		delete temp;
		return true;
	}
	else
	{
		while(temp->next!=NULL){
			if(temp->next->data==s)
			{
				Node* deletedNode=temp->next;
				temp->next=temp->next->next;
				delete deletedNode;
				return true;
			}
			temp=temp->next;
		}
		return false;
	}
}

bool LinkedList::search(const string& s) const
{
	Node* temp=front;
	while(temp!=NULL) //Traverse list
	{
		if(temp->data==s)
			return true;
		temp = temp->next;
	}
	return false;
}

vector<string> LinkedList::get() const
{
	vector<string> str_vec;
	for(Node* temp=front;temp!=NULL;temp=temp->next)
		str_vec.push_back(temp->data);
	return str_vec;
}

void LinkedList::deepCopy(const LinkedList& ls)
{
	front=NULL;
	if(ls.front!=NULL) //Only copy if ls is non-empty
	{
		Node* original=ls.front;
		Node* copy;
		copy=new Node(original->data, NULL);
		front=copy;
		original=original->next;
		while(original!=NULL) //Traverse the original copying each node
		{
			copy->next=new Node(original->data, NULL);
			copy=copy->next;
			original=original->next;
		}
	}
}

void LinkedList::deleteList()
{
	Node* tmp;
	while(front!=NULL){
		tmp=front->next;
		delete front;
		front=tmp;
	}
}