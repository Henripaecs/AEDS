#include <iostream>
#include <string>

using namespace std;

class Carro{
private:
    string modelo;
    string marca;
    int fabricacao;
    float preco;
public:
    Carro(string mo, string ma, int f, float p){
        modelo = mo;
        marca = ma;
        fabricacao = f;
        preco = p;
    }
    string getModelo(){
        return modelo;
    }
    string getMarca(){
        return marca;
    }
    int getFabricacao(){
        return fabricacao;
    }
    float getPreco(){
        return preco;
    }
    void Desconto(){
        if(fabricacao < 2014){
            preco *= 0.8;
        }
    }
};
int main(){
    string modelo, marca;
    int fabricacao;
    float preco;
    cout << "digite o modelo: ";
    cin >> modelo;
    cout << "digite o marca: ";
    cin >> marca;
    cout << "digite o fabricacao: ";
    cin >> fabricacao;
    cout << "digite o preco: ";
    cin >> preco;
    Carro carro1(modelo, marca, fabricacao, preco);
    carro1.Desconto();
    cout << "O preco e: " << carro1.getPreco() << endl;
}
