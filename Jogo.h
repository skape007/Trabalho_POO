//
// Created by Antonio Gomes on 29/11/2016.
//

#ifndef CASTLE_WAR_JOGO_H
#define CASTLE_WAR_JOGO_H
#include <iostream>
#include "Celula.h"
#include "Colonia.h"
#include "Consola.h"
#include "Ser.h"
class Interface;
class Celula;



using namespace std;

class Jogo {

    Interface * ui; // pointeiro para o interface
    Celula** mapa; // celulas do jogo, cada celula guarda tudo o que pode conter
    vector<Colonia*> colonias;


public:

    static void iniciaJogo(Interface * );
    void arranqueReal(Interface *);
    void criaMapa();
    void inicializaColonia();
    void inicializaJogo();
    void cicloPrincipal();
    void adicionaColonia();
    void movimentoSer();


};

#endif //CASTLE_WAR_JOGO_H
