//
// main.cpp (provided)
// ECS 40A: Winter 2014
//


/*#include "element.h"
#include "word.h"
#include "phrase.h"*/
#include "dict.h"
#include "sentence.h"


int main()
{
  string str; 
  int len;
  
  Dict d("data.txt");




  //while (!cin.eof()) {

    getline(cin, str);

    len = str.length();
    
    if (str[len-1] == '.') {
      str.erase(len-1);
      Sentence s(str);
      s.complete(d);
      /*s.check(d);
      s.show();
      continue;*/ 
    }
      
    /*if (str[len-1] == ' ') {
      str.erase(len-1);
      Phrase p(str);
      p.complete(d);
      p.check(d);
      p.show();
      continue;
    }
    
    if (isalpha(str[len-1])) {
      Word w(str);
      w.complete(d);
      w.check(d);
      w.show();
    }
  }*/

  return 0;
}
