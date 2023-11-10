#include <iostream>
#include "cardapio.h"
#include "usuario.h"

using namespace std;

 int main(){
    // Usuario user;
    // string nome;
    // int telefone,cpf;
    // cout << "Iniciando o cadastro... Digite seu nome" << endl;
    // cin >> nome;
    // user.setNome(nome);
    // cout << "Insira agora seu telefone" << endl;
    // cin >> telefone; 
    // user.setTelefone(telefone);
    // cout << "Por ultimo, insira seu cpf" << endl;
    // cin >> cpf;
    // user.setCpf(cpf);
    // cout << "Confirme se estes dados estam corretos" <<  user.imprimeUsuario(); << endl;

    // Pizza pizza1;
    // string sabor, tamanho, adicional;
    // cout << "Digite o sabor" << endl;
    // cin >> sabor;
    // pizza1.setSabor(sabor);
    //  cout << "Digite o tamanho" << endl;
    // cin >> tamanho;
    // pizza1.setTamanho(tamanho);
    // cout << "Digite um adicional" << endl;
    // cin >> adicional;
    // pizza1.addAdicional(adicional);
    // cout << "Digite outro adicional" << endl;
    // cin >> adicional; 
    // pizza1.addAdicional(adicional);
    // pizza1.imprimePizza();

  //   Bebida bebida1;
  //  string sabor, tamanho, tipo;
  //  cout << "Qual o tipo de bebida?" << endl;
  //  cin >> tipo;
  //  bebida1.setTipo(tipo);
  //  cout << "Digite o sabor" << endl;
  //  cin >> sabor;
  //  bebida1.setSabor(sabor);
  //  cout << "Digite o tamanho" << endl;
  //  cin >> tamanho;
  //  bebida1.setTamanho(tamanho);
  //  bebida1.imprime_Bebida();

   Cardapio cardapio;
   cardapio.inicializarCardapio();
   cardapio.getPizzas();
   cardapio.getBebidas();

    
    return 0;
 }
