//
// Created by Antonio Gomes on 29/11/2016.
//


#ifndef CASTLE_WAR_CASTELO_H
#define CASTLE_WAR_CASTELO_H
#include "Colonia.h"

using namespace std;

class ElementoJogo{

protected:
    int custoMoedas;
    int saude;
    int defesa;
    int Maxsaude;
    string letra;
    int id_tipo; //castelo 0, torre 1 e quinta 2
    int x;
    int y;
    int IDColonia;

public:
    ElementoJogo(int xx,int yy);
    ElementoJogo(); //conversar sobre isto
    virtual int getX()const;
    virtual int getY()const;
    virtual int getID()const; //retorna o tipo de elemento de jogo
    virtual void setID(int id);
    virtual int getMaxSaude();
    virtual int getSaude();
    virtual void setSaude(int saude);
    virtual void setSaudeMAX(int maxsaude);
    virtual bool isMaxSaude()const; //comparar saude atual com a maxima ?


};

class Castelo:public ElementoJogo{
    int idNivel;
    int valorVenda;
    int flagUpgrade;
public:
    Castelo(int xx, int yy):ElementoJogo(xx , yy){
        this->letra = "T";
        this->custoMoedas = 30;
        this->saude = 20;
        this->Maxsaude = 20;
        this->defesa = 10;
        this->id_tipo = 1;
        this->x = x;
        this->y = y;
        this->IDColonia;
        this->idNivel = 1; //começa a 1 certo?
        this->valorVenda = this->custoMoedas / 2; //decidir se e mesmo esta a estrategia
        this->flagUpgrade = 0; // 1 upgrade por turno
    }
};

class Torre:public ElementoJogo{
    int idNivel;
    int valorVenda;
    int flagUpgrade;
public:
    Torre(int xx, int yy):ElementoJogo(xx , yy){
        this->letra = "T";
        this->custoMoedas = 30;
        this->saude = 20;
        this->Maxsaude = 20;
        this->defesa = 10;
        this->id_tipo = 1;
        this->x = x;
        this->y = y;
        this->IDColonia;
        this->idNivel = 1; //começa a 1 certo?
        this->valorVenda = this->custoMoedas / 2; //decidir se e mesmo esta a estrategia
        this->flagUpgrade = 0; // 1 upgrade por turno
    }
} ;


class Quinta:public ElementoJogo{
    int idNivel;
    int valorVenda;
    int producao;
    int flagUpgrade;
public:
    Quinta(int xx, int yy):ElementoJogo(xx , yy) {
            this->letra = "Q";
            this->custoMoedas = 20;
            this->saude = 20;
            this->Maxsaude = 20;
            this->defesa = 10;
            this->id_tipo = 2;
            this->x = x;
            this->y = y;
            this->IDColonia;
            this->idNivel = 1; //começa a 1 certo?
            this->valorVenda = this->custoMoedas / 2; //decidir se e mesmo esta a estrategia
            this->flagUpgrade = 0; // 1 upgrade por turno reseta --> ver o maximo de upgrades
    }
} ;

//todo: ver se isto dá assim

class Ser :public ElementoJogo{
    int flag_remedio;
    int flag_second_chance;
    int x_castelo,y_castelo;
    int contador_espada;
    int scope;
    int velocidade;
public: Ser(char tipo):ElementoJogo() { // problema
        this->letra = tipo;
        this->custoMoedas = 20;
        this->saude = 20;
        this->Maxsaude = 20;
        this->defesa = 10;
        this->id_tipo = 2;
        this->x = x;
        this->y = y;
        this->IDColonia;
    }
};

#endif //CASTLE_WAR_CASTELO_H
