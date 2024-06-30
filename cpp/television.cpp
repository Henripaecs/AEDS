#include <iostream>

/* Implemente uma classe televisão. A televisão tem um controle de volume do som e um controle de seleção de canal. O controle de
volume permite aumentar ou diminuir a potência do volume de som em uma unidade de cada vez. O controle de canal também permite aumentar e
diminuir o número do canal em uma unidade, porém, também possibilita trocar para um canal indicado. Também devem existir métodos para consultar
o valor do volume de som e o canal selecionado. No programa principal, crie uma televisão e troque de canal algumas vezes. Aumente um pouco o volume,
e exiba o valor de ambos os atributos.*/


using namespace std;

class televisao{
private:
    int volume;
    int canal;
public:
    televisao(int vol, int can){
        volume = vol;
        canal = can;
    }
    void aumentarCanal(){
        canal++;
    }
    void diminuirCanal(){
        if(canal > 0){
            canal--;
        }
    }
    void aumentarVolume(){
        volume++;
    }
    void diminuirVolume(){
        if(volume > 0){
            volume--;
        }
    }
    void setCanal(int canal){
        this-> canal=canal;
    }
    void setVolume(int volume){
        this->volume = volume;
    }
    int getCanal(){
        return canal;
    }
    int getVolume(){
        return volume;
    }
    void menu(){
    system("cls || clear");
    cout<<" 1 - Para aumentar o volume"<<endl;
    cout<<" 2 - Para abaixar o volume"<<endl;
    cout<<" 3 - Para aumentar o canal"<<endl;
    cout<<" 4 - Para decrementar o canal"<<endl;
    cout<<" 5 - Para setar um canal"<<endl;
    cout<<" 6 - Verificar status..."<<endl;
    cout<<" 7 - Para desligar a TV..."<<endl;
    }
};

int main(){
    televisao t1(0,0);
    int opcao, canal;
    do{
        t1.menu();
        cin>>opcao;

        switch(opcao){
            case 1:
                t1.aumentarVolume();
                cout<<" O volume esta em: "<< t1.getVolume()<<endl;
                break;
            case 2:
                t1.diminuirVolume();
                cout<<" O volume esta em: "<< t1.getVolume()<<endl;
                break;
            case 3:
                t1.aumentarCanal();
                cout<<" O canal eh: "<< t1.getCanal()<<endl;
                break;
            case 4:
                t1.diminuirCanal();
                cout<<" O canal eh: "<< t1.getCanal()<<endl;
                break;
            case 5:
                cout<<" Qual canal deseja ir: ";
                cin>> canal;
                t1.setCanal(canal);
                cout<<" O canal eh: "<< t1.getCanal()<<endl;
                break;
            case 6:
                cout<<" Voce esta no canal "<< t1.getCanal()<<endl;
                cout<<" O volume esta em "<< t1.getVolume()<<endl;
                break;
            case 7:
                cout<<" Desligando..."<<endl;
                break;
            }
        }while(opcao != 7);
}
