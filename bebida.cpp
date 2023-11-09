#include "bebida.hpp"
#include <iostream>

Bebida::Bebida() {}
void Bebida::setSabor(string _sabor) { sabor = _sabor; }
void Bebida::setTamanho(string _tamanho) { tamanho = _tamanho; }
void Bebida::setValor(float _valor) { valor = _valor; }
string Bebida::getSabor() { return sabor; }
string Bebida::getTamanho() { return tamanho; }
float Bebida::getValor() { return valor; }

void Bebida::imprime_Bebida() {
  cout << "Sabor:" << sabor << endl << "Tamanho:" << tamanho << endl;
}
void ::Bebida::imprima() { cout << "qualquer coisa" << endl; }

Bebida::~Bebida(void) {
  sabor.clear();
  tamanho.clear();
  cout << "Classe destruida" << endl;
}
