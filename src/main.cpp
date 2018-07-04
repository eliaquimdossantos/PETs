#include "empresa.h"
#include "veterinario.h"
int main(){

	Veterinario * vet = new Veterinario("1", "joao silva souza", "45644545", "25",  "o+", "+","sem especialidade7");
	//std::cout << vet << std::endl;
	Empresa my;

	
	my.carregarFuncionarios("/home/david/c++/PETs/data/funcionarios.CSV");
	my.adicionarFuncionarios(*vet);
	//my.gravarFuncionarios("/home/david/c++/PETs/data/funcionarios.CSV");
	//my.mostrarFuncionarios();
	return 0;
}
