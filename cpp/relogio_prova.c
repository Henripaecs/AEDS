#include <iostream>
#include <string>

using namespace std;

class Relogio{
private:
    int minuto;
    int hora;
    int segundo;
    void ajusteh(){
        if(segundo = 60){
            segundo == 0;
            minuto++;
        }
        if(minuto = 60){
            minuto == 0;
            hora++;
        }
        if(hora == 24){
            hora == 0;
        }
    }
public
    void setHora(int h, int m, int s){
        hora = h;
        minuto = m;
        segundo = s;
        ajusteh();
    }
    string getHora(){
        string hh, mm, ss;
        if(hora < 10){
            hh = "0" + to_string(hora);
        }
        if(minuto < 10){
            mm = "0" + to_string(minuto);
        }
        if(segundo < 10){
            ss = "0" + to_string(segundo);
        }
        return hh + ":" + mm + ":" + ss;
    }
    void addSegundo(){
        segundo++;
        ajusteh();
    }
};

int main(){
    Relogio relogio1;
    relogio1.setHora(15, 53, 58);
    count<< relogio1.getHora()<<end1;
    relogio1.addSegundo();
}
