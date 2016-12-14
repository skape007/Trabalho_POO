//
// Created by Joao Paulo on 01-12-2016.
//

#include "ElementoJogo.h"

ElementoJogo::ElementoJogo(int x, int y){
    this->custoMoedas = 0;
    this->saude = 50;
    this->Maxsaude = 50;
    this->defesa = 10;
    this->id_tipo = 5; //um qualquer
    this->letra = "U";
    this->x = x;
    this->y = y;
}

ElementoJogo::ElementoJogo(){
    this->custoMoedas = 0;
    this->saude = 10;
    this->Maxsaude = 10;
    this->defesa = 0;
    this->id_tipo = 5; //um qualquer
    this->letra = "U";
    this->x = x; // inserir aqui as coordendas do castelo da colonia
    this->y = y;
}

int ElementoJogo::getX()const {return x;}
int ElementoJogo::getY()const {return y;}
int ElementoJogo::getID()const {return id_tipo;}
void ElementoJogo::setID(int id){id_tipo=id;}
int ElementoJogo::getMaxSaude() {return Maxsaude;}
int ElementoJogo::getSaude() {return saude;}
void ElementoJogo::setSaude(int saude) {saude=saude;}
void ElementoJogo::setSaudeMAX(int maxsaude) {Maxsaude=maxsaude;}


bool ElementoJogo::isMaxSaude()const
{
    if (saude==Maxsaude)
        return true;
    else
        return false;
}
