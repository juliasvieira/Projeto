#include <iostream>
#include "usuario.h"

using namespace std;


 int main(){
    Usuario user;
    string nome;
    int telefone,cpf;
    cout << "iniciando o cadastro. digite seu nome" << endl;
    cin >> nome;
    user.setNome(nome);
    cout << "digite seu telefone" << endl;
    cin >> telefone; 
    user.setTelefone(telefone);
    cout << "digite seu cpf" << endl;
    cin >> cpf;
    user.setCpf(cpf);
    cout << user.getNome() << endl;
    user.imprimeUsuario();
    
    return 0;
 }
