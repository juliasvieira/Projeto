#include <iostream>
#include <string>

using namespace std;

class Usuario{
    private:
     string nome;
     string email;
     int telefone;
     int senha;
     int cpf;

    public:
     Usuario(); //construtor 
     void setNome(string _nome);
      string getNome();
     void setEmail(string _email);
      string getEmail();
     void setTelefone(int _telefone);
      int getTelefone();
     void setSenha(int _senha);
      int getSenha();
     void setCpf(int _cpf);
      int getCpf();
      ~Usuario(); //destrutor 
   
};

     Usuario::Usuario(){
      nome = "";
      email = "";
      telefone = 0;
      senha = 0;
      cpf = 0;
    }

    Usuario::~Usuario(){
    }

     void Usuario::setNome(string _nome){
        nome = _nome;
     }

     string Usuario::getNome(){
      return nome;
     }

     void Usuario::setEmail(string _email){
      email = _email;
     }

     string Usuario::getEmail(){
      return email;
     }

     void Usuario::setTelefone(int _telefone){
      telefone = _telefone;
     }

     void Usuario::setSenha(int _senha){
      senha = _senha;
     }
     
     void Usuario::setCpf(int _cpf){
      cpf = _cpf;
     }
 
   
 int main(){
    Usuario user;
    string nome,email;
    int telefone, senha, cpf;
    cout << "Cadastre seu nome, email e cpf, respectivamente" << endl;
    cin >> nome >> email >> cpf;
    user.setNome(nome);
    user.setEmail(email);
    user.setCpf(cpf);
    cout << "Digite em seguida sua senha de acesso e telefone para contato" << endl;
    cin >> senha  >> telefone;
    user.setSenha(senha);
    user.setTelefone(telefone);
    return 0;
 }

