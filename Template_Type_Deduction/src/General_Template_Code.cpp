//============================================================================
// Name        : General_Template_Code.cpp
// Author      : Pritam Kore
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template<typename T>
bool equals(T a, T b)
{
	return a==b;
}

template<>
bool equals<char*>(char* a, char* b)
{
	if(strlen(a) != strlen(b)) return false;
	for(int i=0; i<strlen(a); i++) if(a[i] != b[i]) return false;
	return true;
}

int main() {
	cout << equals(3,4) << endl;
	cout << equals(3.2f,3.2f) << endl;
	cout << equals(4,4) << endl;
	cout << equals("abc","abcd") << endl;
	return 0;
}
