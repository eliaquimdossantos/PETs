/**
 * @file reptil.h
 * @brief Cabeçalho da classe Reptil
 */

#ifndef REPTIL_H
#define REPTIL_H

#include <string>

using std::string;

class Reptil : protected Animal{
protected:
	bool venenoso;
	string tipoVeneno;
public:
	/**
	 * Construtor padrão
	 */
	Reptil();
	/**
	 * @brief Construtor parametrizado
	 */
	Reptil(bool venenoso_, string tipoVeneno_, int id_, string classe_, string nome_, 
		string cientifico_, string sexo_, float tamanho_,
		string dieta_, Veterinario& veterinario_, Tratador& tratador_, string batismo_);
	/**
	 * @brief Destrutor
	 */
	~Reptil();
	/**
	 * @brief Utilizada para saber se o réptil é venenoso ou não
	 * @return 1 para sim e 0 para não
	 */
	bool getVenenoso();
	/**
	 * @brief Utilizada para obter o tipo de veneno que o animal possui
	 * @return Tipo de veneno
	 */
	string getTipoVeneno();
	/**
	 * @brief Define quando se o animal é venenoso
	 * @param venenoso_ 1 para sim e 0 para não
	 */
	void setVenenoso(bool venenoso_);
	/**
	 * @brief Define o tipo de veneno que o animal possui
	 * @param tipoVeneno_ Tipo de veneno
	 */
	void setTipoVeneno(string tipoVeneno_);
};

#endif