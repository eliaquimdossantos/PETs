#ifndef ANIMAL_SILVESTRE_H
#define SYMBOL value

#include <string>

using std::string;

class AnimalSilvestre{
protected:
	string ibama;
public:
	AnimalSilvestre();
	AnimalSilvestre(string ibama_);
	~AnimalSilvestre();
	string getIbama();
	void setIbama(string ibama_);
};

#endif