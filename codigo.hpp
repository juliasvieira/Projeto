#include <iostream>
#include <string>


using namespace std;


class Usuario{
    public:
     Usuario(); //construtor 
     void CadastroUsuario();

    private:
    string nome_;
    string email_;
    int telefone_;
    int senha_;
    int cpf_;
}

class 