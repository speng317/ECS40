#ifndef ELEMENT_H
#define ELEMENT_H

#include "dict.h"

class Element
{
public:
	virtual void complete (const Dict &d) = 0;
	virtual void check(const Dict &d) = 0;
	virtual void show() const = 0; 

};

#endif