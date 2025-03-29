//============================================================================
// Name        : Perfect_Forwarding.cpp
// Author      : Pritam Kore
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

void print(int &a) {cout << "Lvalue called " << a << endl;}
void print(int &&a) {cout << "Rvalue called " << a << endl;}

template<typename T>
void perfect_function(T&& a)		//Universal forwarding
{
	print(std::forward<T>(a));		//Perfect forwarding
}

int main()
{
	perfect_function(3);			//Rvalue called
	int a = 5; perfect_function(a);	//Lvalue called
	return 0;
}
