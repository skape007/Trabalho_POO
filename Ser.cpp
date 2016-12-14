//
// Created by Antonio Gomes on 29/11/2016.
//

#include "Ser.h"


/*int Ser::getLocalX() const {
    return localX;
}

void Ser::setLocalX(int localX) {
    Ser::localX = localX;
}

int Ser::getLocalY() const {
    return localY;
}

void Ser::setLocalY(int localY) {
    Ser::localY = localY;
}*/

/*void Ser::movimentoSer(){


for (int i =0 ; i < scope+2 ; i++ ){ // rever os valores para a adicionar ao scope -> if(zoom =1 ) -> if (zoom)
    for (int j =0 ; i < scope+2 ; j++ ){
        if ( flagOcupada()!=0 ){
                    // aqui vejo se a ao lado dos ser existe algo
            if ( != ){

            } // ou comparamos os ponteiros ou criamos um id colonia
        }
    }
}*/
    // se a celula esta ocupada
    // se esta ao pe de um inimigo
    // se perto de um inimigo -> scope x celulas
    // se nas x celunas em todas as direcçoes não existe nada
    // se comando ataque -> ataca o item da lista mais perto
    // se comando retirar -> vai para o castelo

//}

int Ser::getScope() const {
    return scope;
}
