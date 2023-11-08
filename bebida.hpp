#include <string>
#include <vector>
using namespace std;

class Bebida {
private:
  string sabor;
  string tamanho;
  float valor;

public:
  Bebida(); // construtor
  void setSabor(string _sabor);
  void setTamanho(string _tamanho);
  void setValor(float _valor);

  string getSabor();
  string getTamanho();
  float getValor();
  void imprime_Bebida();

  ~Bebida(void); // destrutor
};
