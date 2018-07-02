// getters
int Funcionario::getId(){
	return id;
}
string Funcionario::getNome(){
	return nome;
}
string Funcionario::getCpf(){
	return cpf;
}

short Funcionario::getIdade(){
	return idade;
}
short Funcionario::getTipoSanguineo(){
	return tipoSanguineo;
}
char Funcionario::getFatorRH(){
	return fatorRH;
}
string Funcionario::getEspecialidade(){
	return especialidade;
}
		
// Setters
void Funcionario::setId(int id_){
	id = id_;
}
void Funcionario::setNome(string nome_){
	nome = nome_;
}
void Funcionario::setCpf(string cpf_){
	cpf = cpf_;
}
void Funcionario::setIdade(short idade_){
	idade = idade_;
}
void Funcionario::setTipoSanguineo(short tipoSanguineo_){
	tipoSanguineo =  tipoSanguineo_;
}
void Funcionario::setFatorRH(char fatorRH_){
	fatorRH = fatorRH_;
}
void Funcionario::setEspecialidade(string especialidade_){
	especialidade = especialidade_;
}