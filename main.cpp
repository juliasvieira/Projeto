main.cpp#include <iostream>
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
   
};

     Usuario::Usuario(){
      nome = "";
      email = "";
      telefone = 0;
      senha = 0;
      cpf = 0;
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
    Usuario usuario1;
    usuario1.setNome("ana");
    cout << "Nome digitado:" << usuario1.getNome();
    
    return 0;
 }
