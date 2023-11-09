#include <iostream>
#include "usuario.h"
#include "pizza.h"

using namespace std;


 int main(){
   //  Usuario user;
   //  string nome;
   //  int telefone,cpf;
   //  cout << "iniciando o cadastro. digite seu nome" << endl;
   //  cin >> nome;
   //  user.setNome(nome);
   //  cout << "digite seu telefone" << endl;
   //  cin >> telefone; 
   //  user.setTelefone(telefone);
   //  cout << "digite seu cpf" << endl;
   //  cin >> cpf;
   //  user.setCpf(cpf);
   //  cout << user.getNome() << endl;
   //  user.imprimeUsuario();

    Pizza pizza1;
    string sabor, tamanho, adicional;
    cout << "Digite o sabor" << endl;
    cin >> sabor;
    pizza1.setSabor(sabor);
     cout << "Digite o tamanho" << endl;
    cin >> tamanho;
    pizza1.setTamanho(tamanho);
    cout << "Digite um adicional" << endl;
    cin >> adicional;
    pizza1.addAdicional(adicional);
    cout << "Digite outro adicional" << endl;
    cin >> adicional; 
    pizza1.addAdicional(adicional);
    pizza1.imprimePizza();

    Bebida bebida1;
   string sabor, tamanho;
   cout << "Digite o sabor" << endl;
   cin >> sabor;
   bebida1.setSabor(sabor);
   cout << "Digite o tamanho" << endl;
   cin >> tamanho;
   bebida1.setTamanho(tamanho);
   bebida1.imprime_Bebida();
  


    
    return 0;
 }
