//
// Created by Joao Paulo on 01-12-2016.
//

#include "Colonia.h"
#include "ElementoJogo.h"

Colonia::Colonia(){

    int xx = 3;
    int yy = 3;
    edificosColonia.push_back(new Castelo(xx,yy));

}

int Colonia::getId_colonia() const {
    return id_colonia;
}

void Colonia::setId_colonia(int id_colonia) {
    Colonia::id_colonia = id_colonia;
}

int Colonia::getMoedas() const {
    return moedas;
}

void Colonia::setMoedas(int moedas) {
    Colonia::moedas = moedas;
}

int Colonia::updateMoedas(int moedas){

    this->moedas +=moedas;

}


