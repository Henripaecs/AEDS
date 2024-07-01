#include<iostream>

using namespace std;

class forma{
public:
    virtual double perimetro()const = 0;
    virtual double area()const = 0;
    virtual void imprimir()const = 0;
    static void mostrar_forma(const forma * forma){
        forma->imprimir();
        cout << "perimetro" << forma->perimetro()<< endl;
        cout << "area" << forma->area() << endl;
    }
};
class retangulo : public forma{
private:
    double base;
    double altura;
public:
    retangulo(double b, double h): base(b), altura(h){
        base = b;
        altura = h;
    }
        double perimetro()const override{
            return 2*(base+altura);
        }
        double area()const override{
            return base*altura;
        }
        void imprimir(){
            cout << "Lado" << base << "altura" << altura << endl;
        }
};
int main(){
    retangulo r(5,3);
    imprimir();
    r.mostrar_forma();
}
