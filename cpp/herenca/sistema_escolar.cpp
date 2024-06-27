#include <iostream>
#include <string>

using namespace std;

class pessoa{
private:
    string nome;
    string email;
    int idade;
public:
    pessoa(string n, string e, int i){
        nome = n;
        email = e;
        idade = i;
    }
    string getNome(){
        return nome;
    }
    string getEmail(){
        return email;
    }
    int getIdade(){
        return idade;
    }
};
class aluno : public pessoa{
private:
    int matricula;
public:
    aluno(int m, string n, string e, int i): pessoa(n, e, i){
        matricula = m;
    }
    int getMatricula(){
        return matricula;
    }
};

int main(){
    string n,e;
    int m,i;
        cout << "Matricula: ";
        cin >> m;
        cout << "Nome: ";
        cin >> n;
        cout << "Email: " ;
        cin >> e;
        cout << "Idade: " ;
        cin >> i;
    aluno aluno1(m, n, e, i);
        cout << "Matricula: " << aluno1.getMatricula() << endl;
        cout << "Nome: " << aluno1.getNome() << endl;
        cout << "Email: " << aluno1.getEmail() << endl;
        cout << "Idade: " << aluno1.getIdade() << endl;
}
