//
// Created by Antonio Gomes on 29/11/2016.
//

#ifndef CASTLE_WAR_CELULA_H
#define CASTLE_WAR_CELULA_H
#include <vector>
#include "ElementoJogo.h"

class Ser;


using namespace std;

//todo: criar os get´s

class Celula {
// podemos fazer uma de 2 coisas
// inserindo o ponteiro para elementoJogo/Ser sabemos logo que elemento esta na celula ou ser
// apenas inserindo uma flag para ver se esta ocupa tenho que pecorrer todos os seres para saber qual é o que esta lá

    static int idCelula;
    vector<ElementoJogo *>ElementosJ;
    int corFundo;
    int flagOcupada;

public:

    Celula();
    int getCorCelula();
    void setCorFundoCelula(int corDefundo);
    int getFlagOcupada() const;
    void setFlagOcupada(int flagOcupada);
    void addElementoJogo(ElementoJogo * s);    // elemento a celula
    void delElementoJogo(ElementoJogo * s);    //apaga um elemento da celula

};


#endif //CASTLE_WAR_CELULA_H
