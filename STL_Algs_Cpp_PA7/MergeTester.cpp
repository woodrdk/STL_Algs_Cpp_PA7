#include <iterator> 
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
#include <sstream>
#include <cstdio>
using namespace std;

void mergeLists(list<string> , list<string> );

int main() {
	
	/*	Test 1 
		list 1 = { "abba", acdc", "UB40"}, list 2 = {"dbs", "emf", "zz top"}
		sorted: list 1 = {"UB40", "abba", acdc"}, list 2 = {"dbs", "emf", "zz top"}
		result: {"UB40", "abba", acdc", "dbs", "emf", "zz top"}
	*/
	
	list<string> one = { "abba", "acdc", "UB40" };
	list<string> two = { "dbs", "emf", "zz top" };
	mergeLists(one, two); // Test 1

	/*	Test 2
		list 1 = { "abba", acdc", "UB40"}, list 2 = {"zz top"}  
		result: {"abba", acdc", "UB40", "zz top"}
	*/
	list<string> one2 = { "abba", "acdc", "UB40" };
	list<string> two2 = { "zz top" };
	mergeLists(one2, two2); // Test 2

	/*	Test 3
		list 1 = { "abba", acdc", "UB40"}, list 2 = {} 
		sorted: list 1 = {"UB40", "abba", acdc"}, list 2 = {} 
		result: {"UB40", "abba", acdc"}
	*/
	list<string> one3 = { "abba", "acdc", "UB40" };
	list < string> two3 = {};
	mergeLists(one3, two3); // Test 3

	/* Test 4
		list 1 = { "dbs", "emf", "zz top" }, list 2 = { "abba", acdc", "UB40"}  
		sorted: list 1 = {"dbs", "emf", "zz top"}, list 2 = {"UB40", "abba", acdc"}
		result: {"UB40", "abba", acdc", "dbs", "emf", "zz top"}
	*/
	list<string> one4 = { "dbs", "emf", "zz top" };
	list<string> two4 = { "abba", "acdc", "UB40" };
	mergeLists(one4, two4); // Test 4

	system("pause");
	return 0;
}


void mergeLists(list<string> one, list<string> two) {
	one.sort();
	cout << " The merging of sorted vector 1, ";
	for (auto v : one) {
		cout << v << " ";
	}
	cout << endl;
	
	two.sort();
	cout << " with sorted vector 2, ";
	for (auto w : two) {
		cout << w << " ";
	}
	cout << endl;

	cout << " Will create the following vector ";

	cout << endl << endl;
	cout << one.size();
	
}

