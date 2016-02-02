//  Created by Ivan Jonathan Hoo
//  Copyright (c) 2015 Ivan Jonathan Hoo. All rights reserved.

#pragma once

#include "LinkedList.h"

class HashTable
{
public:
	HashTable(); //default constructor
	HashTable(int); //one parameter constructor
	HashTable(const HashTable&); //copy constructor
	~HashTable(); //destructor
	HashTable& operator=(const HashTable&); //assignment operator
	bool insert(const string&);
	bool remove(const string&);
	bool search(const string&) const;
	int size() const; //return numOfItems
	int maxSize() const; //return arrSize
	double loadFactor() const;
	vector<string> intersection(const HashTable&) const;
	vector<string> unions(const HashTable&) const;
	vector<string> difference(const HashTable&) const;

private:
	LinkedList* arr;
	int arrSize;
	int numOfItems;
	int hashFunc(const string&) const;
	int getPrime(int) const;
	bool isPrime(int) const;
	void deepCopy(const HashTable& h);
	vector<string> get() const; //returns a vector of all the strings in the HashTable
};
