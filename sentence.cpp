#include "sentence.h"

Sentence::Sentence(const string& s)
:mString(s)
{
	
}

void Sentence::complete (const Dict& d)
{
	string subString;
	int maxSize=d.getSize(); //get size of vecString
	for(int k=0; k<maxSize; k++)
	{
		string tempString=d.getVector(k);
		if(tempString.find(mString) != string::npos) //if found word 
		{
			//print substring 
			subString=tempString.substr(tempString.find(mString));
			cout<<subString<<endl;
		}
	}
}
void Sentence::check(const Dict& d)
{

}
void Sentence::show() const
{

}

