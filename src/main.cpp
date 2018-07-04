#include "empresa.h"
#include "veterinario.h"
int main(){

	Veterinario * vet = new Veterinario("1", "joao silva souza", "45644545", "25",  "o+", "+","sem especialidade");
	//std::cout << vet << std::endl;
	Empresa my;

	my.adicionarFuncionarios(*vet);
	my.carregarFuncionarios("/home/david/c++/PETs/data/funcionarios.CSV");
	my.mostrarFuncionarios();
	my.gravarFuncionarios("/home/david/c++/PETs/data/funcionarios.CSV");
	return 0;
}
