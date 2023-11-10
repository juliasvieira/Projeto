 #include <iostream>
 #include "usuario.h"

using namespace std;
 
 Usuario::Usuario(){ //inicializa a classe com campos vazios 
  }


    Usuario::~Usuario(void){ 
      nome.clear();
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

     void Usuario::setEndereco(string _endereco){
      endereco = _endereco;
     }

     string Usuario::getEndereco(){
      return endereco;
     }

      void Usuario::cadastroInicial(){
         int confirmacaoPedido;
       cout << "Iniciando o cadastro... Digite seu nome" << endl;
       cin >> nome;
       cout << "Insira agora seu telefone" << endl;
       cin >> telefone;
       cout << "Por ultimo, insira seu cpf" << endl;
       cin >> cpf;
      //  cout << "Cadastro realizado com sucesso!Caso queira prosseguir com o pedido, digite 1, caso contrário 
      //  digite 2" << endl;
      //  cin >> confirmacaoPedido;
      //  if (confirmacaoPedido==1){
      //    -chamar a classe para pedido 
      //  }
     }

     void Usuario::imprimeUsuario(){
      cout << "Confirmando seus dados:" << endl 
      << "Nome:" <<  nome << endl << "Telefone:" << telefone << endl << "Cpf:" << cpf << endl;
     }