#include "empresa.h"
#include "veterinario.h"
int main(){

	Empresa my("/home/david/c++/PETs/data");
	
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
		cout<<" Digite sua opção:";

		
		cin>>op;


		switch(op){

			case 5:
				my.empregarFuncionarios();
			break;

			case 6:

				 my.excluiFuncionario();
			break;

			case 7:
				my.mostrarFuncionarios();
				cout << "7" << endl;
			break;

			default:
				std::cout << "opcao invalida " << std::endl;
			
		}
		
	}while(op!=0);




	return 0;
}
