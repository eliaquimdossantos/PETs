#include "empresa.h"
#include "veterinario.h"

using std::cerr;

void menu(){
	Empresa my("data");
		int op=0;
		do{

			system("clear");
			cout<<endl;
			cout<<" **********************************************"<<endl; 
			cout<<" *       PET FERA - ANIMAIS SILVESTRES        *"<<endl;
			cout<<" **********************************************"<<endl; 
			cout<<" * (1) Cadastrar animal                       *"<<endl;
			cout<<" * (2) Excluir animal                         *"<<endl;
			cout<<" * (3) Consultar animais por classes          *"<<endl;
			cout<<" * (4) Consultar animais por nome             *"<<endl;
			cout<<" * (5) Cadastrar funcionario                  *"<<endl;
			cout<<" * (6) Excluir funcionario                    *"<<endl;
			cout<<" * (7) Listar funcionarios                    *"<<endl;
			cout<<" * (8) Consultar cadastro de funcinarios      *"<<endl;
			cout<<" * (9) Consultar animais por funcionarios     *"<<endl;
			cout<<" * (0) Exit                                   *"<<endl;
			cout<<" **********************************************"<<endl;
			cout<<" Digite sua opção: ";

			
			cin>>op;
			cin.ignore();
			switch(op){
				case 0:
					break;
				case 1:
					my.cadastrarAnimal();
				break;

				case 2:
					my.excluiAnimal();
				break;

				case 3:
					my.consultarPorClasse();
				break;

				case 4:
					my.consultarPorNome();
				break;
				
				case 5:
					my.empregarFuncionarios();
				break;

				case 6:
					 my.excluiFuncionario();
				break;

				case 7:
					my.mostrarFuncionarios();
				break;
				case 8:
					my.buscarFuncionario();
				break;
				case 9:
					my.consultarAnimalPorFunc();
				default:
					std::cout << "opcao invalida " << std::endl;
				
			}
			
		}while(op!=0);

}
int main(){
	try{
	
		menu();
		
	}catch(int e){

		switch(e){

			case 1:
				cerr << "Erro: Falha ao abrir arquivo!" << endl;
				system("sleep 5");
				menu();
			break;

			case 2:
				cerr << "Erro: funcionario existente" << endl;
				system("sleep 5");
				menu();
			break;
			case 3:
				cerr << "Erro: Animal existente!" << endl;
				system("sleep 5");
				menu();
			break;
			case 4:
				cerr << "Erro: Lista vazia!" << endl;
				system("sleep 5");
				menu();
			break;
			case 5:
				cerr << "Erro: Funcionario não encontrado!" << endl;
				system("sleep 5");
				menu();
			break;
			case 6:
				cerr << "Erro: Animal não encontrado!" << endl;
				system("sleep 5");
				menu();
			break;
			case 7:
				cerr << "Erro: Cpf não encontrado!" << endl;
				system("sleep 5");
				menu();
			break;
			case 8:
				cerr << "Erro: Operacão invalida!" << endl;
				system("sleep 5");
				menu();
			break;
		}
}



	return 0;
}
