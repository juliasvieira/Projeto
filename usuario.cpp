 #include <iostream>
 #include "usuario.h"

using namespace std;
 
 Usuario::Usuario(){ //inicializa a classe com campos vazios 
      nome = "";
      telefone = 0;
      cpf = 0;
    }

    Usuario::~Usuario(void){ 
      cout << "Classe destruida" << endl;
    }

     void Usuario::setNome(string _nome){
        nome = _nome;
     }

     string Usuario::getNome(){
      return nome;
     }

     void Usuario::setTelefone(int _telefone){
      telefone = _telefone;
     }

     void Usuario::setCpf(int _cpf){
      cpf = _cpf;
     }

     void Usuario::imprimeUsuario(){
      cout << "Confirmando seus dados:" << endl 
      << "Nome:" <<  nome << endl << "Telefone:" << telefone << endl << "Cpf:" << cpf << endl;
     }