#ifndef _SYNTAXCHECKER_H_
#define _SYNTAXCHECKER_H_
 
#include <fstream>
#include <vector>
#include "Tokenizer.h"

using namespace Interpeter;
using namespace Tokenizer;

namespace Interpeter
{
  namespace SyntaxChecker
  {
class Word
{	
private:
	string _name;
	int _id;
};

enum SYNTAX_STATUS {
	SE0	 };//	Status OK

SYNTAX_STATUS syntaxChecker(std::vector<Token>* tokenList);
  } // !namespace Tokenizer 
}  // !namespace Interpreter

#endif // !_SYNTAXCHECKER_H_
