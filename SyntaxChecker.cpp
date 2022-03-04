#include "SyntaxChecker.h"
#include "Tokenizer.h"

namespace Interpeter
{
  namespace SyntaxChecker
 {
SYNTAX_STATUS syntaxChecker(std::vector<Token>* tokenList)
{
	unsigned i, j;
	bool newInstruction = true,
	lastWord = false;
	for (i = 0; i < tokenList->size(); i++)
	{
		if (tokenList->at(i).type() == TOKEN_WORD)
		{  continue; }
		else if (tokenList->at(i).type() == TOKEN_TERMINATOR)
	    {	break;	} 
    }
return SE0;
   }	
  }
 }
