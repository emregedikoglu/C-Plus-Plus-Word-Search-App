#ifndef _NODE_
#define _NODE_

#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<cmath>
#include<ctype.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

class Node{
public:
	int index;
	string word;
	Node *next;
	Node() :next(NULL) {}
	Node(string w,int i) :word(w),index(i), next(NULL) {}
};

#endif