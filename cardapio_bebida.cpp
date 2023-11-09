#include "cardapio_bebida.hpp"
#include <iostream>

void Cardapio::inicializarCardapio() {
  Bebida bebida1;
  bebida1.setSabor("laranja");
  bebida1.setTamanho("grande");
  // bebidas[0] = bebida1;//erro de copilacao
  bebida1.imprime_Bebida();
  // bebidas[0] = bebida1;//erro*/
  /*bebidas[0].setSabor("Cerveja");
  bebidas[0].setTamanho("500ml"); //Nao compila assim
  bebidas[0].setValor(4.56);*/
}
void setbebidadas() {}
void Cardapio::imprime_cardapio() {}
vector<Bebida> Cardapio::getbebidas() { return bebidas; }
