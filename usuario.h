#include <string>
using namespace std;

class Usuario{
    private:
     string nome;
     string endereco;
     int telefone;
     int cpf;

    public:
     Usuario(); //construtor 
     void setNome(string _nome);
     void setEndereco(string _endereco);
     string getEndereco();
     string getNome();
     void setTelefone(int _telefone);
     int getTelefone();
     void setCpf(int _cpf);
     void imprimeUsuario();
      ~Usuario(void); //destrutor 
   
};