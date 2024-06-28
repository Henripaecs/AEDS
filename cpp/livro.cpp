#include <iostream>
#include <string>

using namespace std;

class livro{
private:
    string nome;
    string autor;
    int ano;
public:
    livro(string n, string au, int a){
        nome = n;
        autor = au;
        ano = a;
    }
    void printar(){
        cout << "Titulo: " << nome << endl;
        cout << "Autor: " << autor<< endl;
        cout << "Ano: " << ano << endl;
    }
};
class infantil : public livro{
private:
    int classificacao;
public:
    infantil(string n, string au, int a, int cla) : livro(n,au,a){
        classificacao = cla;
    }
    void printar(){
        cout << "==================================" << endl;
        livro::printar();
        cout << "Qual a faixa etaria deste livro: ";
        cin >> classificacao;
    }
};

int main(){
    string n,au;
    int a,cla;
    cout << "Titulo: ";
    cin >> n;
    cout << "Autor: ";
    cin >> au;
    cout << "Ano: ";
    cin >> a;
    infantil livro1(n,au,a,cla);
    livro1.printar();
}
