#ifndef _TOKENIZER_H_
#define _TOKENIZER_H_

#include <fstream>
#include <sstream>
#include <vector>
#include <string>

namespace Interpeter
{
  namespace Tokenizer
  {
	enum TOKEN_TYPE {
	TOKEN_WORD,	 // nome
	TOKEN_KEYWORD,	// if end while
	TOKEN_METHOD_OPEN,	//	(
	TOKEN_METHOD_CLOSE,	//	)
	TOKEN_SCOPE_OPEN,  // {
	TOKEN_SCOPE_CLOSE, // }
	TOKEN_ASSIGNMENT, // =
	TOKEN_TERMINATOR, // \n ;
	TOKEN_OPERATOR,	 // + - * /
	TOKEN_STRING	// ' "
	};

class Token
{
public:
	Token(TOKEN_TYPE type, std::string value);
	std::string print();
	std::string simulate();
	TOKEN_TYPE type();
	std::string val();
private:
	TOKEN_TYPE _type;
	std::string _value;
};

enum TOKENIZER_STATUS {
	TE0, //	Status OK
	TE1, //	Source code not exist
	TE2, //	Character not accepted
	};

TOKENIZER_STATUS tokenizer(char* path, std::vector<Token>* tokenList);
TOKENIZER_STATUS readSource(std::string& source, std::vector<Token>* tokenList);
  } // namespace Tokenizer
} // namespace Interpreter

#endif // !_TOKENIZER_H_
