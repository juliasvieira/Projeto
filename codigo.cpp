
#include "codigo.hpp"


using namespace std;

Usuario::Usuario()

 void Usuario::CadastroUsuario(string nome, string email, int telefone,int senha, int cpf){
  this->nome_=nome;
  this->email_=email;
  this->telefone_=telefone;
  this->senha_=senha;
  this->cpf_=cpf;
 }