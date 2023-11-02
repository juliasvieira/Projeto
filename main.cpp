#include <iostream>
#include <string>
#include <vector> 
#include <map>

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
      ~Usuario(void); //destrutor 
   
};

     Usuario::Usuario(){
      nome = "";
      email = "";
      telefone = 0;
      senha = 0;
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

     
   class Pizza{
      private:
      vector <string> tamanho;
      vector <string> sabor;
      int quantidade; 
      bool borda;

      public:
      Pizza(); //construtor 
      void escolherQuantidade();
      void adicionarIngredientes();
      void escolherSabor();
      void escolherTamanho();
      float calcularPreco(); 
      ~Pizza(void); //destrutor 
   };

      void mostrarCardapio(){
         cout << "Cardapio:" << endl << endl <<
         "Sabores das Pizzas:" << endl <<
         "-Frango com catupiry " << endl <<
          "-Calabresa"           << endl <<
          "-Marguerita"          << endl << endl <<
          "Tamanhos e Valores:"  << endl <<
          "Pequeno: R$39,90"     << endl <<
          "Medio: R$49,90"       << endl << 
          "Grande: R$59,90"      << endl << endl <<
          "Caso tenha acréscimo de borda, em qualquer pizza, o valor acrescentado sera de R$11,90";

      }

      // void Pizza::escolherQuantidade(int _quantidade){
      //    cout << "Digite a quantidade de pizzas que serão pedidas" <<endl;
      //    quantidade = _quantidade; 
      // }

   
 int main(){
    Usuario user;
    string nome,email;
     int telefone, senha, cpf , confirmacaoPedido;
     cout << "Cadastre seu nome, email e cpf, respectivamente" << endl;
     cin >> nome >> email >> cpf;
     user.setNome(nome);
     user.setEmail(email);
     user.setCpf(cpf);
     cout << "Digite em seguida seu telefone para contato" << endl;
     cin >> senha  >> telefone;
     user.setSenha(senha);
     user.setTelefone(telefone);
    
    cout << "Ja podemos começar o pedido. Digite 1 caso sim, caso contrario digite 2" << endl;
    cin >> confirmacaoPedido;
    if(confirmacaoPedido==1){
      cout << "Ok! Vamos iniciar" << endl;
    } else {
      cout << "Agradecemos por seu acesso a plataforma e ficamos no aguardo do seu pedido. Ate breve!" <<endl;
    }

    mostrarCardapio();





    return 0;
 }

