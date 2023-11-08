#include <string> 
#include <vector>
#include <iostream>
#include "pizza.h"

using namespace std;

class Cardapio{
    private: 
    vector <Pizza> pizzas;
    public:
    void inicializarCardapio();
    vector <Pizza> getPizzas();
}