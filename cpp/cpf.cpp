#include <iostream>
#include <string>

using namespace std;

class cpfc{
private:
    int cpf;
    string nome;
public:
    cpfc(int cpf, string nome){
        this->cpf = cpf;
        this->nome = nome;
    }
    int getCpf(){
        return cpf;
    }
    string getNome(){
        return nome;
    }
};

int main(){
    int cpf;
    string nome;
    cout << "Digite cpf: ";
    cin >> cpf;
    cout << "Digite o nome: ";
    cin >> nome;
    cpfc cpf1(cpf, nome);
    cout << "O nome e: " << cpf1.getNome() << "e o cpf e: " << cpf1.getCpf() << endl;
}
