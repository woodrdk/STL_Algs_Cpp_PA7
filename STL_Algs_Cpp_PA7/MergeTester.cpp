#include <iterator> 
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;

void mergeLists(list<string> , list<string> );

int main() {
	//Test 1 should result with "abba", acdc", "dbs", "emf", "UB40", "zz top"
	list<string> one = { "abba", "acdc", "UB40" };
	list<string> two = { "dbs", "emf", "zz top" };
	mergeLists(one, two); // Test 1

	//Test 2: should result "abba", acdc", "UB40", "zz top"
	list<string> one2 = { "abba", "acdc", "UB40" };
	list<string> two2 = { "zz top" };
	mergeLists(one2, two2); // Test 2

	//Test 3: should result "abba", acdc", "UB40"
	list<string> one3 = { "abba", "acdc", "UB40" };
	list < string> two3 = {};
	mergeLists(one3, two3); // Test 3

	//Test 4: should result "abba", acdc", "dbs", "emf", "UB40", "zz top"
	list<string> one4 = { "dbs", "emf", "zz top" };
	list<string> two4 = { "abba", "acdc", "UB40" };
	mergeLists(one4, two4); // Test 4

	system("pause");
	return 0;
}


void mergeLists(list<string> one, list<string> two) {
	cout << "The merging of vector 1 and vector 2  will create the following vector" << endl;
	

	//list <string> ::iterator it;
	//for (it = one.begin(); it != one.end(); ++it)
	//	cout << it;
	//cout << '\n';

	//list<string>::iterator it = one.begin();
	//for (int i = 0; i < one.size(); i++) {
	//	cout << it << " ";
	//	++it;
	//}


	cout << endl;
	vector<string> v(one.size() + two.size());
	/*sort(one.begin(), one.end());*/
	/*sort(two.begin(), two.end());
	merge(one.front, one.back, two.front, two.back, v.begin());*/

	/*for (int i = 0; i < v.size(); ++i) {
		cout << v[i];
	}*/
}

