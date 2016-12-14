//
// Created by Joao Paulo on 01-12-2016.
//

#ifndef CASTLE_WAR_COLONIA_H
#define CASTLE_WAR_COLONIA_H

#include <iostream>


#include "Inimigos.h"
#include <vector>
class ElementoJogo;
class Ser;
class Celula;

using namespace std;

class Colonia {

    int id_colonia;
    int moedas;
    string nome;
    vector<ElementoJogo *> edificosColonia;     // vector de edificios que pretence a colonia
  //  vector<Ser *> serColonia;               // vector de seres que pretence a colonia
 //   vector<Inimigos> listaAbater;           // lista das coordenadas de inimigos ainda vivos

public:

    Colonia();
    int getMoedas()const;
    void setMoedas(int moedas);
//    void movimentoSer();
    void cria_SER();
    void constroi_EDIFICIO();
    void vender_EDIFICIOS();
    bool existeEspaco(); //ver se a celula esta ocupada
    int getId_colonia() const;
    int updateMoedas(int moedas);
    const string &getNome() const;
    void setNome(const string &nome);
    const vector<ElementoJogo *> &getEdificosColonia() const;
    void setEdificosColonia(const vector<ElementoJogo *> &edificosColonia);
    const vector<Ser *> &getSerColonia() const;
    void setSerColonia(const vector<Ser *> &serColonia);
    const vector<Inimigos> &getListaAbater() const;
    void setListaAbater(const vector<Inimigos> &listaAbater);
    void setId_colonia(int id_colonia);
    void arranqueColonia();

};


#endif //CASTLE_WAR_COLONIA_H
