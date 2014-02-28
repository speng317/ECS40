#ifndef DICT_H
#define DICT_H


#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;

class Dict
{
public:
	Dict(const char*);

	int getSize() const;


	string getVector(int) const;
private:
	ifstream mFile;
	string str;
	vector <string> vecString;
	int mSize;

};

#endif