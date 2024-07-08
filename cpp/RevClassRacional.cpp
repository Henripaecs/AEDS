#include<iostream>

using namespace std;

class Racional{
private:
    int numerador;
    int denominador;
public:
    Racional(int n, int d){
        numerador = n;
        denominador = d;
    }
    void printRacional(){
        cout << " " << numerador << "/" << denominador << endl;
    }
    double resultado(){
        return static_cast<double>(numerador)/denominador;
    }
};

int main(){
    int numerador, denominador;
    cout << "Numerador";
    cin >> numerador;
    cout << "Denominador";
    cin >> denominador;
    Racional *raci= new Racional(numerador, denominador);
    cout << "Racional: ";
    raci->printRacional();
    cout << "Resultado em decimal: " << raci->resultado() << endl;
    delete raci;

    return 0;
}
