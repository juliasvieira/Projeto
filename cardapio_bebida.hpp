#include "bebida.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Cardapio {
private:
vector<Bebida> bebidas;

public:

  void inicializarCardapio();
  vector<Bebida> getbebidas();
  void setbebidas();
  void imprime_cardapio();
};
