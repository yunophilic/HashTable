//  Created by Ivan-kun165
//  Copyright (c) 2015 Ivan-kun165. All rights reserved.

#pragma once

#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

class LinkedList
{
public:
	LinkedList(); //default constructor
	LinkedList(const LinkedList& ls);//copy constructor
	~LinkedList(); //destructor
	LinkedList& operator=(const LinkedList&); //assignment operator
	bool insert(const string&);
	bool remove(const string&);
	bool search(const string&) const;
	vector<string> get() const;

private:
	class Node
	{
	public:
		string data;
		Node* next;
		Node(string s):data(s),next(NULL) {};
		Node(string s,Node* nd):data(s),next(nd) {};
	};
	Node* front;
	void deepCopy(const LinkedList& ls);
	void deleteList();
};