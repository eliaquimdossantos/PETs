#ifndef NATIVO_H
#define NATIVO_H  

#include "animalsilvestre.h"
#include <string>

using std::string;

class Nativo : protected AnimalSilvestre{
protected:
	string uf_origem;
	string autorizacao;
public:
	/**
	 * @brief Construtor padrão
	 */
	Nativo();
	/**
	 * @brief Construtor parametrizado
	 */
	Nativo(string uf_origem_, string autorizacao_, string ibama_);
	/**
	 * @brief Destrutor
	 */
	~Nativo();
	/**
	 * @brief Utilizada para obter a origem do animal
	 * @return Origem do animal
	 */
	string getOrigem();
	/**
	 * @brief Utilizada para obter a origem do animal
	 * @return Origem do animal
	 */
	string getAutorizacao();
	/**
	 * @brief Define o país de origem do animal
	 * @param uf_origem_ País de origem do animal
	 */
	void setOrigem(string uf_origem_);
	/**
	 * @brief Define a autorização do animal
	 * @param autorizacao_ Autorização do animal
	 */
	void setAutoriza(string autorizacao_);
}

#endif