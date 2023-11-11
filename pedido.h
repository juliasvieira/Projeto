
class Pedido{
private:
    float valorTotal; //valor de entrega, pizza e bebida 
    string formaPagamento;
    string endereco;
    vector <Pizza> pizzaPedido; //vetor de pizzas que o usuario vai pedir 
    vector <Bebida> bebidaPedido; //vetor de bebidas que o usuario vai pedir 
public: 
    Pedido();
    float calcularValorTotal();
    void setFormaPagamento();
    string getFormaPagamento();
    void montarPizza();
};