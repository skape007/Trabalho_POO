//
// Created by Antonio Gomes on 29/11/2016.
//

#include "Celula.h"

int Celula::idCelula = 1;

Celula::Celula() {

    this->corFundo = 1; //Consola::AZUL;
    this->flagOcupada = 0;
}

int Celula::getCorCelula() {
    return corFundo;
}

void Celula::setCorFundoCelula(int corDefundo) {
    this->corFundo = corFundo;
}

int Celula::getFlagOcupada() const {
    return flagOcupada;
}

void Celula::setFlagOcupada(int flagOcupada) {
    Celula::flagOcupada = flagOcupada;
}


void Celula::addElementoJogo(ElementoJogo *s) {

    ElementosJ.push_back(s);
}

void Celula::delElementoJogo(ElementoJogo *s) {

    for (int i = 0; i < ElementosJ.size(); i++) {
        if (ElementosJ[i] == s) {
            ElementosJ.erase(ElementosJ.begin() + i);
        }
    }

}