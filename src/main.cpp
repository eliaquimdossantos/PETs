#include "veterinario.h"
int main(){
	//Veterinario(int id_, string nome_, string cpf_, int idade_,  string tipoSanguineo_, char fatorRH_,	string especialidade_);
	Veterinario * vet = new Veterinario(1, "joao silva souza", "45644545", 25,  "o+", '+',"sem especialidade");
	std::cout << *vet << std::endl;
	return 0;
}