#include <iostream>
#include <vector>
#include "HashTable.h"
using namespace std;
 
void testFunc();
 
int main()
{
	testFunc();
	system("pause");
	return 0;
}
 
void testFunc()
{
	//testing default constructor
	cout << "Creating ht0 using default constructor...\n\n";
	HashTable ht0;

	cout << "ht0.maxSize(): " << ht0.maxSize() << endl;
	cout << "ht0.size(): " << ht0.size() << endl << endl;

	//insert and one param constructor
	cout << "Creating ht1 using one param constructor...\n\n";
	HashTable ht1(9);

	cout << "ht1.maxSize(): " << ht1.maxSize() << endl;
	cout << "ht1.size(): " << ht1.size() << endl << endl;

	cout << "Inserting elements to ht1 (test if return true on all inserts):\n";
	cout << ht1.insert("bat") << endl;
	cout << ht1.insert("cat") << endl;
	cout << ht1.insert("rhinoceros") << endl;
	cout << ht1.insert("ocelot") << endl;
	cout << ht1.insert("elephant") << endl;
	cout << ht1.insert("hippopotamus") << endl;
	cout << ht1.insert("giraffe") << endl;
	cout << ht1.insert("camel") << endl;
	cout << ht1.insert("lion") << endl;
	cout << ht1.insert("panther") << endl;
	cout << ht1.insert("bear") << endl;
	cout << ht1.insert("wolf") << endl;
	cout << endl;

	/*cout << "ht1:\n";
	vector<string> v1 = ht1.get();
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << endl;
	cout << endl;*/

	cout << "Inserting 'hippopotamus' again: " << ht1.insert("hippopotamus") << endl << endl;

	//search
	cout << "Testing search ht1...\n";
	string _test1 = "frog";
	string _test2 = "camel";
	string _test3 = "wolf";
	string _test4 = "oceano";
	string _test5 = "bat";
	cout << "search " << _test1 << "return val: " << ht1.search(_test1) << endl;
	cout << "search " << _test2 << "return val: " << ht1.search(_test2) << endl;
	cout << "search " << _test3 << "return val: " << ht1.search(_test3) << endl;
	cout << "search " << _test4 << "return val: " << ht1.search(_test4) << endl;
	cout << "search " << _test5 << "return val: " << ht1.search(_test5) << endl;

	cout<<endl;	

	//copy constructor and remove
	cout << "Creating ht2 using copy constructor to copy from ht1...\n\n";
	HashTable ht2(ht1);

	/*cout<<"ht2 b4 remove:\n";
	vector<string> v2=ht2.get();
	for(int i=0;i<v2.size();i++)
		cout<<v2[i]<<endl;
	cout<<endl;*/

	string test0 = "";
	string test1 = "ocelot";
	string test2 = "bat";
	string test3 = "rhinoceros";
	string test4 = "johnnydepp";
	string test5 = "wolf";
	string test6 = "boohooassbitch";
	string test7 = "hippopotamus";
	string test8 = "rhinoceros";
	cout << "remove \"" << test0 <<"\" return val: "<< ht2.remove(test0) << endl;
	cout << "remove \"" << test1 <<"\" return val: "<< ht2.remove(test1) << endl;
	cout << "remove \"" << test2 <<"\" return val: "<< ht2.remove(test2) << endl;
	cout << "remove \"" << test3 <<"\" return val: "<< ht2.remove(test3) << endl;
	cout << "remove \"" << test4 <<"\" return val: "<< ht2.remove(test4) << endl;
	cout << "remove \"" << test5 <<"\" return val: "<< ht2.remove(test5) << endl;
	cout << "remove \"" << test6 <<"\" return val: "<< ht2.remove(test6) << endl;
	cout << "remove \"" << test7 <<"\" return val: "<< ht2.remove(test7) << endl;
	cout << "remove \"" << test8 <<"\" (again) return val: "<< ht2.remove(test8) << endl;
	
	/*cout<<"\nht2 after remove:\n";
	vector<string> _v2=ht2.get();
	for (int i = 0; i < _v2.size(); i++)
		cout << _v2[i] << endl;
	cout << endl;*/

	//assignment operator and set functions
	cout << "Creating ht3 equal to ht1 and ht4 equal to ht2 using assignment operator...\n\n";
	HashTable ht3 = ht1;
	HashTable ht4 = ht2;

	/*cout << "ht3:\n";
	vector<string> v3 = ht3.get();
	for (int i = 0; i < v3.size(); i++)
		cout << v3[i] << endl;
	cout << endl;*/

	/*cout << "ht4:\n";
	vector<string> v4 = ht4.get();
	for (int i = 0; i < v4.size(); i++)
		cout << v4[i] << endl;
	cout << endl;*/

	cout << "ht4.maxSize(): " << ht4.maxSize() << endl;
	cout << "ht4.size(): " << ht4.size() << endl << endl;

	cout << "Removing \"lion\" and \"giraffe\" from ht3 (test if return true on all removes):\n";
	cout << ht3.remove("lion") << endl;
	cout << ht3.remove("giraffe") << endl << endl;

	cout << "Inserting more elements to ht4 (test if return true on all inserts):\n";
	cout << ht4.insert("wolf") << endl;
	cout << ht4.insert("johnnydepp") << endl;
	cout << ht4.insert("hippopotamus") << endl;
	cout << ht4.insert("aaaaaaaa") << endl;
	cout << ht4.insert("iAmAwesomeCodingIsTheBestILoveProgrammingCplusplusBestProgrammingLanguageInTheWorld") << endl << endl;

	/*cout << "ht3 after remove:\n";
	vector<string> _v3 = ht3.get();
	for (int i = 0; i < _v3.size(); i++)
		cout << _v3[i] << endl;
	cout << endl;*/

	/*cout << "ht4 after insert:\n";
	vector<string> _v4 = ht4.get();
	for (int i = 0; i < _v4.size(); i++)
		cout << _v4[i] << endl;
	cout << endl;*/

	cout << "ht4.maxSize(): " << ht4.maxSize() << endl;
	cout << "ht4.size(): " << ht4.size() << endl << endl;

	cout << "Intersection of ht3 and ht4:\n";
	vector<string> intersection = ht3.intersection(ht4);
	for (int i = 0; i < intersection.size(); i++)
		cout << intersection[i] << endl;
	cout << endl;

	cout << "Union of ht3 and ht4:\n";
	vector<string> unions = ht3.unions(ht4);
	for (int i = 0; i < unions.size(); i++)
		cout << unions[i] << endl;
	cout << endl;

	cout << "Set difference between ht3 and ht4:\n";
	vector<string> difference = ht3.difference(ht4);
	for (int i = 0; i < difference.size(); i++)
		cout << difference[i] << endl;
	cout << endl;
}