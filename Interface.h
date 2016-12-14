//
// Created by Antonio Gomes on 29/11/2016.
//

#ifndef CASTLE_WAR_INTERFACE_H
#define CASTLE_WAR_INTERFACE_H

#include <iostream>
#include <vector>
#include <string>
#include "Jogo.h"
#include "Celula.h"
#include "Consola.h"
#include "Ser.h"
#include <sstream>

using namespace std;

class Interface {

    Consola c;
    int numeroJogadores;
    vector<string> nomesColonias;
    vector<Ser *> vectorSeresBase;
    int tamanhoMapaLinhas;
    int tamanhoMapaColunas;
    int numeroInicialMoedas;
    int caracteristicas[15][2]={{10,10},{1,0},{1,1},{2,2},{2,3},{1,1},{2,2},{1,1},{1,1},{1,1},{1,1},{1,1},{2,1},{3,0},{5,5}} ;

public:

    static void arranqueUI(void);
    void arranqueReal();
    int desenharMenuPrincipal();
    void recolheDados();
    int getNumeroJogadores() const;
    const vector<string> &getNomesColonias() const;
    int getTamanhoMapaLinhas() const;
    int getTamanhoMapaColunas() const;
    int getNumeroInicialMoedas() const;
    void desenhaMapa(Celula ** mapa);
    string recebeComando();
    int recebeCarateristicaSer();
    void listaCareteristicasSer();
    void instrucoes();
    void criaSerBase();
    void menuJogo();

};


#endif //CASTLE_WAR_INTERFACE_H
