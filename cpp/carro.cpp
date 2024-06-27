#include <iostream>

using namespace std;

class Carro{
private:
    double combustivelDisponivel;
    double distanciaPercorrida;
    double capacidadeTanque;
    double consumo;
public:
    Carro(double capacidadeTanque, double consumo){
        combustivelDisponivel = 0;
        distanciaPercorrida = 0;
        this->capacidadeTanque = capacidadeTanque;
        this->consumo = consumo;
    }
    double getCombustivelDisponivel(){
        return combustivelDisponivel;
    }
    double getDistanciaPercorrida(){
        return distanciaPercorrida;
    }
    double getCapacidadeTanque(){
        return capacidadeTanque;
    }
    double getConsumo(){
        return consumo;
    }
    void abastecer(double quantidade){
        if(quantidade + combustivelDisponivel > capacidadeTanque){
            combustivelDisponivel = capacidadeTanque;
        }else{
            combustivelDisponivel += quantidade;
        }
    }
    void mover(double distancia){
        distanciaPercorrida += distancia;
    }
    void calcula(){
        combustivelDisponivel -= distanciaPercorrida / consumo;
        if(combustivelDisponivel < 0){
            combustivelDisponivel = 0;
        }
    }
};

int main(){
    Carro carro1(50, 15);
    double combustivel, distancia;
    cout << "O carro esta sem combustivel" << endl;
    cout << "Deseja abastecer com quantos litros: ";
    cin >> combustivel;
    carro1.abastecer(combustivel);
    cout << "A distancia percorrida foi de: ";
    cin >> distancia;
    carro1.mover(distancia);
    carro1.calcula();
    cout << "Restou: " << carro1.getCombustivelDisponivel()<<"adasdadd"<< endl;

}

