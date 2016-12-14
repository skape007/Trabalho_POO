//
// Created by Antonio Gomes on 29/11/2016.
//

#ifndef CASTLE_WAR_SER_H
#define CASTLE_WAR_SER_H
#include "Colonia.h"


class Ser {

    // todo: os seres tem 10 de saude inicial
    // todo: isto tem de passar a elementoJogo ....... merda
// tem que guardar o id da celula inicial ou seja o castelo
// guarda os atributos
    int ataque;
    int defesa;
    int saude;
    int maxsaude;
    int flag_remedio, flag_second_chance;
    //int x_castelo,y_castelo,
    int contador_espada;
    int localX;
    int localY;
    int scope;
    int velocidade = ((ataque +(defesa/2))/2);// ver se isto dá
    //vector <Atributos *> atributo;
    int IDColonia;
    //scope?





public:
    // todo: criar os metodos
    //isto tem de ser protected e virtual? para os varios tipos=????
    int getAtaque();
    void setAtaque(int ataque);
    int getDefesa();
    void setDefesa(int defesa);
    int getSaude();
    void setSaude(int saude);
    int getMaxSaude();
    void setMaxSaude(int maxsaude);
    int getFlagRemedio();
    void setFlagRemedio(int flag);
    int getFlagSecondChance();
    void setFlagSecondChance(int flag);
    int getContadorEspada();
    void setContadorEspada(int contador);
    int getLocalX() const;
    void setLocalX(int localX);
    int getLocalY() const;
    void setLocalY(int localY);
    void movimentoSer();

    int getScope() const;
};


#endif //CASTLE_WAR_SER_H
