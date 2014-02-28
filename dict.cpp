#include "dict.h"


  Dict::Dict(const char* filename)
  :mFile(filename)
  {
    while(getline(mFile, str, '.'))
    {
      str.erase(std::remove(str.begin(), str.end(), '\n'), str.end());
      vecString.push_back(str + '.');
    }
     mSize=vecString.size();
  }


string Dict::getVector(int i) const
{
  return vecString[i];
}



int Dict::getSize() const
{
  return mSize;
}
  
