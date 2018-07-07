/**
 * @file mamifero.h
 * @brief Cabeçalho da classe Mamifero
 */

#ifndef MAMIFERO_H
#define MAMIFERO_H

#include <string> 		
#include "animal.h"
#include "tratador.h"
#include "veterinario.h"

using std::string;
 
class Mamifero : protected Animal{	
protected:
	string corPelo;
	
public:
	/**
	 * Construtor padrão
	 */
	Mamifero();
	/**
	 * @brief Construtor parametrizado
	 */
	Mamifero(string corPelo_, int id_, 
		string classe_, string nome_, string cientifico_, 
		string sexo_, float tamanho_, string dieta_, 
		Veterinario& veterinario_, Tratador& tratador_, 
		string batismo_);
	/**
	 * @brief Destrutor
	 */   
	~Mamifero();
	/**
	 * @brief Utilizada para obter a cor do pelo
	 * @return cor do pelo
	 */

	string getCorPelo();
	/**
	 * @brief Define cor do pelo
	 * @param Ucor do pelo do mamifero
	 */
	void setCorPelo(string corPelo_);	
};

#endif