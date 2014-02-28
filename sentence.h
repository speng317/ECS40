#ifndef SENTENCE_H
#define SENTENCE_H	

#include "element.h"
#include "dict.h"

class Sentence
{
public:
	//using vector from dictionary
	Sentence(const string&);

	virtual void complete (const Dict &d);
	virtual void check(const Dict &d);
	virtual void show() const;
	
private:
	string mString;
};


#endif