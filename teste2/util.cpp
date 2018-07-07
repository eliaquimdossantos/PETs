#include "util.h"
Util::Util(){}
Util::~Util(){}

void Util::buscaExporta(string classe, string veterinario, string tratador){
	//carregar dados dos animais armazenado em arquivo
	Empresa my("~/PETs/data");
	my.carregarAnimais();
	armAnimal = my.getArmAnimais(); //atribui no conteiner

	for(itA = armAnimal.begin(); itA != armAnimal.end(); itA++){
		//pesquisa pelos parametros e armazena no vector de saida
		if((classe == (*itA).getClasse()) || (veterinario == (*itA).getVeterinario()) || (tratador == (*itA).getTratador())){
			armSaida.push_back(itA*);
		}

	}

}

void Util::exportar(string nomeArqSaida){
	Empresa my("~/PETs/data");
	
	if(armSaida.empty()){
		my.setArmAnimais(armAnimal);
		my.gravarAnimais(nomeArqSaida);
	}else{
		my.setArmAnimais(armSaida);
		my.gravarAnimais(nomeArqSaida);
	}
}

int main(int argc, char *argv[]){

string classe="null", veterinario="null", tratador="null", nomeArqSaida=string(argv[argc-1])+".CSV";

	if(argc == 1){
		cout << "nenhum parametro passado!" << endl;
	}else if(argc > 8){
		cout << "verifique os parametro passado!" << endl;
		cout << "./exportar -c <classe> -v <veterinario> -t <tratador> <arquivo_saida>" << endl;
	}else{
		for(int i=0; i < argc; i++){
			
			if(string(argv[i]) == "-v")
				veterinario = argv[i+1];
			if(string(argv[i]) == "-c")
				classe = argv[i+1];
			if(string(argv[i]) == "-t")
				tratador = argv[i+1];
		}

		buscaExporta(classe, veterinario,tratador);
		exportar(nomeArqSaida);
	}



	return 0;
}