#include <string>
#include <vector>
using namespace std;

class Bebida {
private:
  string sabor;
  string tipo;
  string tamanho;
  float valor;

public:
  Bebida(string _tipo, string _sabor, string _tamanho, float _valor);
  void setTipo(string _tipo);
  void setSabor(string _sabor);
  void setTamanho(string _tamanho);
  void setValor(float _valor);

  string getSabor();
  string getTipo();
  string getTamanho();
  float getValor();
  void imprimeBebida();

  ~Bebida(void); // destrutor
};
