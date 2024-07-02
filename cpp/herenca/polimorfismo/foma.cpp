#include<iostream>

using namespace std;

class forma{
public:
    virtual double perimetro()const = 0;
    virtual double area()const = 0;
    virtual void imprimir()const = 0;

    static void mostrar_forma(const forma * forma){
        forma->imprimir();
        cout << "perimetro " << forma->perimetro()<< endl;
        cout << "area " << forma->area() << endl;
    }
};
class retangulo : public forma{
private:
    double base;
    double altura;
public:
    retangulo(double b, double h){
        base = b;
        altura = h;
    }

        double perimetro()const override{
            return 2*(base+altura);
        }
        double area()const override{
            return base*altura;
        }
        void imprimir()const override{
            cout << "Lado " << base << " altura " << altura << endl;
        }

};
class circulo : public forma{
private:
    double raio;
public:
    circulo(double r): raio(r){}

        double perimetro()const override{
            return 2*(3,14*raio);
        }
        double area()const override{
            return 3,14*(raio*raio);
        }
        void imprimir()const override{
            cout << "Raio " << raio  << endl;
        }

};
int main(){
    retangulo r(5,3);
    forma::mostrar_forma(&r);

    circulo c(4);
    forma::mostrar_forma(&c);
}
