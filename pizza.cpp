#include <iostream> 
#include "pizza.h"

using namespace std;

 Pizza::Pizza(){  
 }

void Pizza::setSabor(string _sabor){
    sabor = _sabor; 
 }

 string Pizza::getSabor(){
    return sabor;
 }

 void Pizza::setTamanho(string _tamanho){
    tamanho = _tamanho;
 }

 string Pizza::getTamanho(){
    return tamanho;
 }
 
 void Pizza::setAdicionais(vector <string> _adicionais){
   adicionais = _adicionais;
 }

 void Pizza::addAdicional(string _adicional){
    adicionais.push_back(_adicional); //adicionando os acrescimos no vetor 
 }

 void Pizza::imprimeAdicionais(){
    cout << "Adicionais"; 
    for(string adc: adicionais){
        cout << adc << ", ";
    }
    cout << endl;
 }

 void Pizza::imprimePizza(){
    cout << "Sabor:" << sabor << endl << "Tamanho:" << tamanho << endl;
    imprimeAdicionais();

 }


 Pizza::~Pizza(void){
    sabor.clear();
    tamanho.clear();
    adicionais.clear();
    cout << "Classe destruida" << endl;
 }

